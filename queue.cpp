#include<iostream>
using namespace std;
class queue{
	private:
		int que[100];
		int size;
	public:
		queue(){
			size=0;
		}
		void push(int value){
			if(size<100){
				que[size]=value;
				size++;
			}
			else{
				cout<<"Queue has no space!"<<endl;
			}
		}
		void pop(){
			if(size>0){
				cout<<"Element "<<que[0]<<" is removed!"<<endl;
				for(int i=0;i<size-1;i++){
					que[i]=que[i+1];
				}
				size--;
			}
			else{
				cout<<"Que is empty"<<endl;
			}
		}
		~queue(){}
};
int main(){
	queue a;
	a.push(10);
	a.push(20);
	a.pop();
}