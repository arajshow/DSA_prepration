#include<vector>
using namespace std;

template<typename t>
class tree{
    public:
    t data;
    tree<t> *left;
    tree<t> *right;
    tree(t data){
        this->data = data;
        this->left= NULL;
        this->right= NULL;
    }


};