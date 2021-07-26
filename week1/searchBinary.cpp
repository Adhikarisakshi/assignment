#include<iostream>
using namespace std;

void searchBinary(int n,int arr[],int k){
    bool flag=false;
    int low=0,high=n-1,mid,cnt=0;
    while(low<=high){
        cnt++;
        mid= (low+high)/2;
        if(arr[mid] == k){
            flag=true;
            break;
        }
        if(arr[mid] < k)
            low=mid+1;
        else
            high= mid-1;
    }
    if(flag) 
		cout<<"Present\t";
    else 
		cout<<"Not Present\t";
    cout<<cnt<<endl;

}

int main(){
	int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) 
            cin>>arr[i];
        cin>>k;
		searchBinary(n,arr,k);
    }
    return 0;
}
