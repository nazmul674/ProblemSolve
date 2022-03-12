#include<iostream>
#include<vector>
using namespace std;
int main(){
	//int i;
	vector< int > v(5);
	
	for(int i=0;i<v.size();i++){
		cin>>v[i];
	}

    for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
      
   // though we have fixed the size of v is 5 ..but still we can push data in vector..thats why its dynamic data structure     
	v.push_back(8);
	v.push_back(5);
	v.push_back(2);
      
    for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	v.pop_back();
	cout<<"after poping last data"<<endl;
     for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	v.insert(v.begin(),9);//v.insert e 2 ta perameter thakbe..ekta parameter position, onno ta value
	cout<<"after inserting in the beginning"<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	cout<<"after inserting in the middle"<<endl;
	v.insert(v.begin()+3,32);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	v.erase(v.begin()+3);
	cout<<"after erasing data"<<endl;
 for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	} 
}