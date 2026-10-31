#include<iostream>
using namespace std;
int main(){
	
	int arr[5]={5,4,3,1,2};
	for(int i=0;i<4;i++){
		int mindex=i;
		for(int j=i+1;j<5;j++){
			if(arr[j]<arr[mindex]){
				mindex=j;
				
			}
			if(mindex !=i){
				int temp=arr[i];
				arr[i]=arr[mindex];
				arr[mindex]=temp;
			}
			
		}
	}
		cout<<" selection Sorted array"<<endl;
	for(int i=0;i<5;i++){
		cout<<arr[i]<<"	";
	}
	
	//buuble sort
	for(int i=0;i<5-1;i++){
		for(int j=0;j<5-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	cout<<" bubble Sorted array"<<endl;
	for(int i=0;i<5;i++){
		cout<<arr[i]<<"	";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}