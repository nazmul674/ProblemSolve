#include <iostream>
using namespace std;
int main(){
	int i,k;
     int a[4]={4,3,35,5};
	int arr[5];
	for(i=0;i<4;i++){
		arr[i]=a[i];// 2 ta binno array hoileo loop variable kinto same..karon ey loop varible ta index er position fixed kre just je array ei hok..0,1 esb tw same position sbr jnno..ejnno varibale o same
	}
	for(k=0;k<4;k++){
		
		cout<< " " <<arr[k];// je loop tar variable i kebol use krte hbe..remember
	}
}