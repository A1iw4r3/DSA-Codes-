#include<iostream>
using namespace std;
class Tnode{
	int data;
	Tnode* Left=NULL;
	Tnode* Right=NULL;
	friend class BST;
	public:
		Tnode(int data):data(data){};
};
class BST{
	private:
		Tnode* root=NULL;
		Tnode* insertion(Tnode* t,int i){
			if(t==nullptr){
				t= new Tnode(i);
			}
			else if(i<t->data){
				t->Left=insertion(t->Left,i);
			}
			else if(i>t->data){
				t->Right=insertion(t->Right,i);
				}
				return t;
			}
			void inorder(Tnode *t){
				if(t==NULL)
					return;
				inorder(t->Left);
				cout<<t->data<<" ";
				inorder(t->Right);
			}
	public:
		void add_node(int data){root=insertion(root,data);}
		void inorder(){inorder(root);}
};
int main(){
	BST tree;
	tree.add_node(16);
	tree.add_node(23);
	tree.add_node(2);
	tree.inorder();
}