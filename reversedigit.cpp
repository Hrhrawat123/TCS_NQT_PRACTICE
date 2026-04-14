#include<bits/stdc++.h>
using namespace std;
int ReverseNum(int n){
    int rev=0;
    while(n){
        int temp=n%10;
        rev=rev*10+temp;
        n/=10;
    }
    return rev;
}
int main(){
    int n;
    cin>>n;
    cout<<"sum of  digits is:"<<ReverseNum(n);
    return 0;
}