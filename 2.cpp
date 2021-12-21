// Find the palindrome
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=n;
    int rev=0;
    while(temp!=0){
        rev=(rev*10)+(temp%10);
        temp/=10;
    }
    if(rev==n){
        cout<<"Palindrome";
    }else{
        cout<<"Not palindrome";
    }
}