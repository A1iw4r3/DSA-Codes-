#include<iostream>
using namespace std;
int main(){
	int a[6]={2,3,4,5,6,7};
	int n=sizeof(a)/sizeof(a[0]);
	int key;
	cout<<"Enter your key: ";
	cin>>key;
	int l=0;
	int r=n-1;
	while(l<=r){
		int m=(l+r)/2;
		if(key==a[m]){
			cout<<"index: "<<m;
			return 0;
		}
		else if(key<a[m]){
			r=m-1;
		}
		else{
			l=m+1;
		}
	}
	cout<<"Key not found!"<<endl;
}