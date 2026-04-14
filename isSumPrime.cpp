#include<bits/stdc++.h>
using namespace std;
bool isPrime(int N){
    if(N<=1){
        return false;
    }
    for(int i=2;i<N/2;i++){
        if(N%i==0){
            return false;
        }
    }
    return true;
}
bool isSumPrime(int N){
    for(int i=2;i<sqrt(N);i++){
        if(isPrime(i)&& isPrime(N-i)){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    cout<<n<<" is prime number:"<<isSumPrime(n);
    
}