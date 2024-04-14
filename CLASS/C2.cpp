#include<iostream>
using namespace std;
class add
{
	public:
		int a;
		int b;
		void get(){
			cout<<"Enter Numbers :::";
			cin>>a>>b;
		}
		void sum(){
			cout<<"The sum is "<<a+b;
		}
};
int main(){
	add x;
	x.get();
	x.sum();
	return 0;
}
