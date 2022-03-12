#include<iostream>
using namespace std;
int coinchange(int c[],int len,int amnt){
	
	if(amnt==0){
		return 1;
	}
	// kon ketre gron krbo na value seta zero return korai dibo..ekhane amnt<0 hole ar coin sesh hoi gele zero return korabo
	else if(c[len]<0 || amnt<0){
		return 0;
	}
		/*else if(c[len]==0){
			return 0;
		}*/
	else if(c[len]>amnt){
		return coinchange(c,len-1,amnt);
	}else 
	return coinchange(c,len,amnt-c[len])+coinchange(c,len-1,amnt);
}
int main(){
	int coin[]={1,2,3};
	int amount=5;
	int len= sizeof(coin)/sizeof(coin[0]);
    int ways= coinchange(coin,len-1,amount);	
	cout<<ways;

}