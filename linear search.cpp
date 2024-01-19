#include<iostream>
using namespace std;
int main(){
	int input;
	cout<<"1.finding value"<<endl;
	cout<<"2.finding index of value"<<endl;
	cout<<"Enter your choice: ";
	cin>>input;
	int a[6]={2,3,5,6,4,7,};
	if(input==2){
		int value;
		cout<<"Enter value: ";
		cin>>value;
		for(int i=0;i<6;i++){
			if(value==a[i]){
				cout<<"index number: "<<i<<endl;
			}
		}
	}
	if(input==1){
		int index=1;
//		cout<<"Enter index number: ";
//		cin>>index;
		cout<<"value is: "<<a[index]<<endl;
	}
}