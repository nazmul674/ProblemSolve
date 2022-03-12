#include<iostream>
using namespace std;
int max(int a,int b){
	return (a>b)? a:b;
}

int knapSack(int w,int wt[],int val[],int n){
	
	if(n==0||w==0){
		return 0;
		
	}else if(wt[n-1]>w){
		return knapSack(w,wt,val,n-1);
	}
	else return max( val[n-1]+knapSack(w-wt[n-1],wt,val,n-1),knapSack(w,wt,val,n-1));                       
	
	
	
	
}


int main()  
{  
    int val[] = {60, 100, 120};  
    int wt[] = {10, 20, 40};  
    int W = 50;  
    int n = sizeof(val)/sizeof(val[0]);  
    cout<<knapSack(W, wt, val, n);  
    return 0;  
}  