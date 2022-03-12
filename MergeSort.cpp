#include<iostream>
void mergesort(int a[],int low,int high);
void Merge(int a, int l,int mid,int h);
using namespace std;
int main(){
	
	 int i,n,len;
	int a[n];

	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	len = sizeof(a)/sizeof a[0];
      mergesort(a,0,len);
     cout<<"after merged";
	for(i=0;i<n;i++){
		cout<<a[i];
	}
	
}
void mergesort(int a[],int low,int high){
	 int mid;
	 int l=low;
	 int h= high;
	if(l<h){
	mid = (l+h)/2;	
	 mergesort(a,l,mid-1);
	 mergesort( a,mid+1,h);
	 Merge(a,l,mid,h);
	}
	
}
/*Merge(int a, int l,int mid,int h){
	
for(i=l;i<mid;i++){
	right[i]=a[i];
}	
for(j=mid;j<h;j++){
	left[j]=a[j];
}*/		
	
while(l<h){
	if(right[i]<left[i]){
		nw[k]=right[i];
		k++;
		i++;
	}else{
		nw[k]=left[i];
		k++;
		i++;
	}
}
	
	void mergesort(int a[],int low,int high){
	 int mid;
	 int l=low;
	 int h= high;
	if(l<h){
	mid = (l+h)/2;	
	 mergesort(a,l,mid-1);
	 mergesort( a,mid+1,h);
	 Merge();
	}
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}