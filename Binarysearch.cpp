#include<stdio.h>
int main(){
	double a,b,c;
	scanf("%lf %lf",&a,&b);
	if((a>0&&a<10)&&(b>0&&b<10)){
		c=(a+b)/2;
		printf("%lf",c);
	}else{
		printf("wrong input");
	}
	
	 
	
	return 0;
}