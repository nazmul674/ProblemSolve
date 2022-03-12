#include<iostream>
int value();
using namespace std;
int main(){
	
	
	int p= value();
	cout<<p;
	
	
}
int value()
{
	int x=0;
	while(x<9){
		x=x+3;

	}
	return x;
}