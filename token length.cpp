#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main(){
	int i,s;
	char str[30],str2[34];
	gets(str);
	s = strlen(str);
	char *token;
	token = strtok(str, ";");
	while(str!=NULL){
		str2[i++]= strlen(token);
		cout<<token <<endl;
		token = strtok(NULL,";");
	}
	int sum;
	for(i=0;i<s;i++){
		sum=sum+str2[i];
	}
	cout<<sum;
	
	return 0;
	
}