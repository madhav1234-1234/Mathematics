// // Checking for primes
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     bool flag=true;
//     if(n==0 || n==1){
//         cout<<"Not prime";
//     }
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             cout<<"Not prime";
//             flag=false;
//             break;
//         }
//     }
//     if(flag==true){
//         cout<<"Prime";
//     }
// }

#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n==0 || n==1){
        return true;
    }
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Prime";
    }else{
        cout<<"Not prime";
    }
}

