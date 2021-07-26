#include<iostream>
using namespace std;

void linearSearch(int n,int a[], int k){
    int flag=0,c=0;
    for(int i=0;i<n;i++){
        if(a[i]==k){
            c++;
            flag=1;
            cout<<"element exists\n";
            break;
        }
        else{
            c++;
            continue;
        }
    }
    if(flag==0)
        cout<<"no element exists\n";
    cout<<"no of comparisons is "<<c;
    
}

int main(){
    int n,l,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
    linearSearch(n,a,k);
    return 0;
}
