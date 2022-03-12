#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[5]={4,7,1,2,9},i;
	int l = sizeof(a)/sizeof a[0];
	sort(a,a+l,greater<int>());
	
	for(i=0;i<l;i++){
		cout<< " "<<  a[i] ;
	}
	
}