#include<bits/stdc++.h>
using namespace std;
int DigitSum(int n){
    int sum=0;
    while(n){
        int temp=n%10;
        sum+=temp;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<"sum of  digits is:"<<DigitSum(n);
    return 0;
}