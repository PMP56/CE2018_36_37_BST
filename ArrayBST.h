#include "BST.h"

#define MAX 100

class ArrayBST : public BST
{
    private:
        int arrayTree[MAX];
        int currentIndex;
    public:
        ArrayBST();
        ~ArrayBST();
        void add(int data);
        void preOrderTraversal(int currentIndex);
        void search(int key);
        int max_e();
        int min();
        int getLeftChild(int currentIndex);
	    int getRightChild(int currentIndex);
};

