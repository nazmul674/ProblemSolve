#include<iostream>
using namespace std;
int main()
{
	
	int n=2,sum=0,sum2=0;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			sum=sum+2;
		
		}
		sum2=sum2+sum;
	  sum++;
	}
	cout<<"sum2 is:"<<sum2;
	return 0;
	
}