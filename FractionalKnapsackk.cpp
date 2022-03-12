#include<iostream>
#include <algorithm>
using namespace std;
struct item{
	int weight;
	int value;
};

bool cmp(struct item a, struct item b) {     //compare item a and item b based on the ration of value and weight
   double aRatio = (double)a.value / a.weight;
   double bRatio = (double)b.value / b.weight;
   return aRatio > bRatio;
}
double knapsack(int itemlist[], int capacity,int n){
	sort(itemlist,itemlist+n,cmp);
	int currentweight= 0,i;
	int totalvalue= 0;
	double remain;
	/*sort(itmlist,itmlist+n,cmp);  greedy property r kaj ta ey sorting ei hoiye gese..sorting e 
	determine hoiye geche first e kon item ta pick krtesi...karon jar ratio beshi sei onosharei sort hoise*/
	for( i=0;i<n;i++){
		if(itemlist[i].weight <= (capacity-currentweight)){//j e2 ta available or kotha 1st e chinta kro..ekhane crntweight ar capacity declare ache 1ste tai eder diyei condition soro hbe*/
		
			currentweight= currentweight + itemlist[i].weight;
			totalvalue= totalvalue+ itemlist[i].value;
		}
		
		else {
			int freespace= capacity- currentweight;
			remain= (double)itemlist[i].value*itemlist[i].weight]/freespace ;//amader drkr value..ekhane reamain bolte value bujacche not weight
			totalvalue= totalvalue+remain;
		
		}
		
		
	}
	
	return totalvalue;
	
}
int main(){
	int capacity= 50;
	double  maximum_profit;
	struct itemlist[]= {(10,60),(20,100),(30,120)};
	int l= sizeof(itemlist)/itemlist[0];
	maximum_profit = knapsackprblm(itemlist,capacity,n);		
    cout<< maximum_profit;
}