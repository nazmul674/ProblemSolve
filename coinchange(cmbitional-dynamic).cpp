#include<iostream>
using namespace std;
int coinchange(int val[],int N,int V){
	int c[N+1][V+1];
	int v,n,lval,rval;
	for(v=1;v<=V;v++){
		c[0][v]=0;
	}
	for(n=0;n<=N;n++){
		c[n][0]=1;
	}
	
	for(n=1;n<=N;n++){
		for(v=1;v<=V;v++){
		if(val[n-1]>v){
			 c[n][v]=c[n-1][v];
		}else{
			lval= c[n-1][v];
			rval= c[n][V-val[n-1]];
			c[n][v]= lval+rval;
		}
		}	
	}
	
	
	
//return c[N][V];	
	
}


int main(){
	int coin[]={1,2,3};
	int amount=5;
	int len= sizeof(coin)/sizeof(coin[0]);
    int ways= coinchange(coin,len,amount);	
	cout<<ways;

}