// Trailling zeroes in factorial

// Naive solution
#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<ans<<endl;
    int count=0;
    while(ans%10==0){
       count++;
       ans/=10;
    }
    cout<<count;
}

