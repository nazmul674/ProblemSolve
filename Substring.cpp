#include<iostream>
using namespace std;
int main(){
	int in[24],sub[6],i,j,n,l;
	
	cout<<"length of the string"<<endl;
	cin>>n;
	for(i=0;i<n;i++){
	cin>>in[i];
	}
	cout<<"take the length of substring"<<endl;
	cin>>l;
	for(i=0;i<l;i++){
	cin>>sub[i];
	}

	i=0;
	int flag=0;
	while(i<n){
		j=0;
		while(j<l){
		if(sub[j]==in[i]){
			i++;
			j++;
			if(j==l){
				flag=1;
				break;
			}else{
				flag=0;
			}
		}
		else{
			i++;
			
		}	
	}
	}
	
	
if(flag==1){
	cout<<"yes"<<endl;
	
}else{
	cout<<"no";
}
	
	
	
	
	
	
	
	
	
	
	
	
	
}