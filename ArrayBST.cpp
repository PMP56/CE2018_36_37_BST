#include "ArrayBST.h"

#include<iostream>

using namespace std;
ArrayBST::ArrayBST(){
    for(int x=0;x<MAX;x++){
        arrayTree[x]=0;
    }
    currentIndex=1;
}

ArrayBST::~ArrayBST(){}

void ArrayBST::add(int data){
    currentIndex=1;
    while(currentIndex<=MAX){
        if (arrayTree[currentIndex]==0) {
            arrayTree[currentIndex]=data;
            cout << "the given arrayTree" << data << "is added at " << currentIndex << endl;
            break;
        } else if (data<arrayTree[currentIndex]) {
            currentIndex*=2;
        } else if (data>arrayTree[currentIndex]) {
            (currentIndex*=2)+=1;
        }
    }   
}

int ArrayBST:: getLeftChild(int currentIndex){
    if((arrayTree[currentIndex]!=0) && ((2*currentIndex) <= MAX)){
        return 2*currentIndex;
    
    }
    else{
        return -1;
    }
}

int ArrayBST:: getRightChild(int currentIndex){
    if((arrayTree[currentIndex]!=0) && ((2*currentIndex+1) <= MAX)){
        return (2*currentIndex+2);
    
    }
    else {
        return -1;
    }
}

void ArrayBST::preOrderTraversal(int currentIndex){
    if((currentIndex >= 0) && (arrayTree[currentIndex] != 0)){
        cout << arrayTree[currentIndex]<<endl;
        preOrderTraversal(getLeftChild(currentIndex));
        preOrderTraversal(getRightChild(currentIndex));
    }
}
void ArrayBST::search(int key){
    int currentIndex=1;
	
	while(true){
		if(arrayTree[currentIndex]==0){
			cout<<"Key Not Found!"<<endl;
			break;
		}
		else if(key==arrayTree[currentIndex]){
			cout<<"Key  Found! at Index "<< currentIndex << endl;
			break;
		}
		
		else if(key>arrayTree[currentIndex]){
			currentIndex=(2*currentIndex)+1;
			
		}
		else if(key < arrayTree[currentIndex]){
			currentIndex=(2*currentIndex);
			
		}
	}
}
int ArrayBST::min(){

} 

int ArrayBST::max_e(){

}

int main(){
    ArrayBST myTree;
    myTree.add(10);
    myTree.add(9);
    myTree.add(12);
    myTree.add(1);
    myTree.add(6);
    myTree.add(15);

    myTree.preOrderTraversal(0);
}
