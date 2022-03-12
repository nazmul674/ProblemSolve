#include<iostream>
#include <algorithm>
using namespace std;
using namespace std;
int max (int a,int b){
	return(a>b)?a:b;
}
 int knapsack(int value[],int weight[],int l,int capacity){
	
   if(capacity== 0 || l==0)
	return 0;

	else if (capacity<0)
		return 0;
	
	else {
		//cout<<"finding max";
		return max(value[l]+knapsack(value,weight,l-1,capacity-weight[l]),knapsack(value,weight,l-1,capacity));
	}	
	/*je parameter gula ashtese segula r hisab krbe..segula obsshoi kobe..and base case e powchar try krbe..so base case oy parameter gula thekei ashbe*/
	
}
int main(){
	int max,capacity=50;
	int value[] = {60,100,120};
	int weight[]={10,20,40};

	int l = sizeof(weight)/sizeof weight[0];
//	
     cout<<knapsack(value,weight,l-1,capacity);
     cout<<endl<<"find max";
}