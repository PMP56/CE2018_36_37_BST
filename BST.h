#ifndef BINARYTREE_h
#define BINARYTREE_h


class BinarySearchTree{
	public:
		virtual void add(int data)=0;

		virtual bool search(int data)=0;

        virtual void preordertraversal()=0;
        virtual void inordertraversal() = 0;
        virtual void deleteitem(int data) = 0;

		virtual int maximum() = 0;
		//virtual int minimum() = 0;

};
#endif
