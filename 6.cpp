// // LCM
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans=(a>b)?a:b;
//     while(true){
//         if(ans%a==0 && ans%b==0){
//             cout<<ans;
//             break;
//         }else{
//             ans++;
//         }
//     }
// }

// Optimised approach
#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    int a,b;
    cin>>a>>b;
    int gc=gcd(a,b);
    int ans=(int)(a*b)/gc;
    cout<<ans;
}