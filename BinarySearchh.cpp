#include<iostream>
#include <string.h>
int BinarySearch(int arr[],int l,int r,int );
using namespace std;
int main(){
	int arr[]={3,26,76,82,87,88,94,98};
	int search,len;
	cout<<"Input the Serching word"<<endl;
	cin>>search;
	 len= sizeof(arr)/sizeof arr[4];
	 //cout<<len;

	int rs = BinarySearch(arr,0, len-1, search);
	if(rs==-1){
		cout<<"not found the item";
	}else{
		cout<<"found";
	}
	
	return 0;
}
int BinarySearch(int arr[],int l,int r,int search){
	int mid;
	//mid=(l+r)/2;
	
	while(l<r){
		mid=(l+r)/2;
	if(arr[mid]==search){/*iterative e o etai base statement..just differnce hocche amader ey base e powchanor
		jonno ekta loop chalaite hbe...recursive e jebabe functn ta nijeke nije call kre just base e powchanor jnno*/
		return mid;
	}
	else if(arr[mid]>search){
		r=mid-1;
	}
	else if(arr[mid]<search){
		l= mid+1;
	}
	}
	
	return -1;/*jkn l>r hbe tkn while loop theke ber hoi jabe prgrm cntrl trpr ey function -1 return krbe.
	etar jonno alda condition dewar drkr nai*/
	
	
}