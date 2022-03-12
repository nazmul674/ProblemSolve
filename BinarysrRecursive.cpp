#incllude<iostream>
int main(){
	int arr[]={3,26,76,82,87,88,94,98};
	int search,len;
	cout<<"Input the Serching word"<<endl;
	cin>>search;
	 len= sizeof(arr)/sizeof arr[4];
	 //cout<<len;

	int rs = BinarySearch(arr,0, len-1, search);
	if(rs==-1){
		cout<<"not found the item";
	}else{
		cout<<"found";
	}
	
	
	
}
int BinarySearch(int arr,int l,int r,int search){
	
	int mid=(l+r)/2;
	if(l>r){
		return -1;
	}
	else if(arr[mid]>search){
      BinarySearch(int arr,int l,int mid-1,int search;
	}else {
		 BinarySearch(int arr,int mid+1,int r,int search);
	}
	
}