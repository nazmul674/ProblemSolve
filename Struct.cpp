#include<iostream>
using namespace std;

struct item{
	int value;
	int weight;
	
}it;
int main(){
	int i;
	struct item it = {5,60};
	struct item it2;
    cout<< " value = " <<it.value <<" "<< "weight = " << it.weight << endl;;
	cin>>it2.value >> it2.weight;
	
	cout<<" value = " <<it2.value <<" "<< "weight = " << it2.weight<< endl;
	 
 struct item it3[2];
 for(i=0;i<4;i++){
 	 
   cin>>it3[i].value;  	 
	 
 }
	 
 for(i=0;i<4;i++){
 	 
   cout<<" value of list it3" << it3[i].value;  	 
	 
 }
	 
	 
	 
}