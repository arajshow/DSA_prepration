#include <string>
using namespace std;

template <typename v>
class ournode
{
public:
    string key;
    v value;
    ournode *next;
    ournode(string key, v value)
    {
        this->key = key;
        this->value = value;
        this->next = NULL;
    }

    ~ournode()
    {
        delete next;
    }
};

template <typename v>
class ourmap
{

    ournode<v> **bucketarray;
    int count;
    int bucketsize;

public:
    ourmap()
    {
        count = 0;
        bucketsize = 5;
        bucketarray= new ournode<v>*[bucketsize];
        for (int i = 0; i < bucketsize; i++)
        {
            bucketarray[i] = NULL;
        }
    }

    ~ourmap()
    {
        for (int i = 0; i < bucketsize; i++)
        {
            delete bucketarray[i];
        }

        delete[] bucketarray;
    }

    int size()
    {
        return count;
    }

    v remove(string key)
    {
        int index = getindex(key);
        ournode<v> *head = bucketarray[index];
        ournode<v> *pre = NULL;
        while (head != NULL)
        {
            if (head->key == key)
            {
                if(pre==NULL){
                    bucketarray[index]= head->next;
                }
                else
                pre->next = head->next;
                v value = head->value;
                head->next = NULL;
                delete head;
                count--;
                return value;
            }
            pre = head;
            head = head->next;
        }
        return 0;
    }

private:
    int getindex(string key)
    {
        int coefficient = 1, hascode = 0;
        for (int i = key.size() - 1; i >= 0; i--)
        {
            hascode += key[i] * coefficient;
            hascode = hascode % bucketsize;
            coefficient *= 37;
            coefficient = coefficient % bucketsize;
        }
        return hascode % bucketsize;
    }

public:
    void insert(string key, v value)
    {
        int index = getindex(key);
        ournode<v> *head = bucketarray[index];
        while (head != NULL)
        {
            if (head->key == key)
            {
                head->value = value;
                return;
            }
            head = head->next;
        }
        head = bucketarray[index];
        ournode<v> *newhead = new ourhead<v>(key, value);
        bucketarray[index] = newhead;
        newhead->next = head;
        count++;
    }

    v getvalue(string key)
    {
        int index = getindex(key);
        ournode<v> *head = bucketarray[index];
        while (head != NULL)
        {
            if (head->key == key)
            {
                return head->value;
            }
            head = head->next;
        }
        return 0;
    }
};
