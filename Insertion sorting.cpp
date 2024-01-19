#include<iostream>
using namespace std;
class insertion_sort{
	private:
		int size;
		int *array;
		void insertion_sorting();	
	public:
		void enter_array();
		void print_array();
};
void insertion_sort::insertion_sorting(){
			for(int i=1;i<size;i++){
				int current=array[i];
				int j=i-1;
				while(array[j] > current && j>=0){
					array[j+1]=array[j];
					j--;
				}
				array[j+1]=current;
			}
		}
void insertion_sort::print_array(){
		for(int i=0;i<size;i++){
			cout<<array[i]<<" ";
			}
		}
void insertion_sort::enter_array(){
			cout<<"Enter size of Array: ";
			cin>>size;
			array=new int[size];
			for(int i=0;i<size;i++){
				cout<<"Enter "<<i+1<<" element of Array: ";
				cin>>array[i];
			}
			insertion_sorting();
		}
	int main(){
		insertion_sort a;
		a.enter_array();
		a.print_array();
	}