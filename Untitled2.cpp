#include<iostream>
using namespace std;
int main(){
	int arr[10];
	cout<<"Enter values of arrya"<<endl;
	for(int i=0;i<10;i++){
	cin>>arr[i];
	
	
	}
	
	for(int i=0;i<10-1;i++){
			int minimum=i;
	
		for(int j=i+1;j<10;j++){
		
			if(arr[j]<arr[minimum]){
			
				minimum=j;
		
				
			}
			
		}
			if(minimum !=i){
				int temp=arr[i];
				arr[i]=arr[minimum];
				arr[minimum]=temp;
			}
		
		
	
	}	
	
	for(int i=0;i<10;i++){
		cout<<arr[i]<<"	";
	}
	
	
}