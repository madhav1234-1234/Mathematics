// Prime factors.
#include<iostream>
using namespace std;
bool isprime(int i){
    if(i==0 || i==1){
       return false;
    }
    for(int j=2;j*j<=i;j++){
        if(i%j==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            if(isprime(i)){
                cout<<i<<" ";
            }
        }
    }
}