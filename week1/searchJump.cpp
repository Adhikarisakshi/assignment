#include<iostream>
using namespace std;

void searchJump(int n,int a[],int k){
	int i=2,cnt=0;
        while(i <n){
            cnt++;
            if(k < arr[i]){
                break;
            }q
            i+=2;
        }

        bool flag= false;
        i= i-2;
        while(i<n){
            cnt++;
            if(arr[i] == k){
                flag= true;
                break;
            }
            i++;
        }
        if(flag) cout<<"Present\t";
        else cout<<"Not Present\t";
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
		searchJump(n,a,k);   
    }
    return 0;
}
