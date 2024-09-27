#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[100001];
    for(int i=0;i<n*7;i++){
        cin>>a[i];

    }

    int sum =0;
    int x=0;
    for(int i=0;i<=n*7;i++)
    { 
        if(i>0 && i%7==0){
            cout<<sum<<" ";
            sum =0;
            
        }
        sum += a[i];
        x++;
        
            
        }
    return 0;
}