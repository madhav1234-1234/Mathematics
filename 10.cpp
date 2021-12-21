// // // Computing power

// // Iterative method
// // #include<iostream>
// // using namespace std;
// // int power(int a,int x){
// //     if(x==0){
// //         return 1;
// //     }
// //     return a*power(a,x-1);
// // }
// // int main(){
// //     int a,x;
// //     cin>>a>>x;
// //     int ans =power(a,x);
// //     cout<<ans;
// //     return 0;
// // }

// // Optimised method-recursive
// #include<iostream>
// using namespace std;
// int power(int a,int x){
//     if(x==0){
//         return 1;
//     }
//     int temp=power(a,x/2);
//     temp=temp*temp;
//     if(x%2==0){
//         return temp;
//     }else{
//         return temp*a;
//     }

// }
// int main(){
//     int a,x;
//     cin>>a>>x;
//     int ans=power(a,x);
//     cout<<ans;
//     return 0;
// }

// Optimised approach-Iterative
#include<iostream>
using namespace std;
int power(int a,int x){
    int res=1;
    while(x>0){
        if(x%2!=0){
            res=res*a;
        }
        a=a*a;;
        x=x/2;
    }
    return res;
}
int main(){
    int a,x;
    cin>>a>>x;
    int ans=power(a,x);
    cout<<ans;
    return 0;
}