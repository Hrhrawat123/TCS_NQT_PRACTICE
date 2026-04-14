#include<bits/std++.h>
using namespace std;
bool isPrime(int N){
    if(N<=1){
        return true;
    }
    for(int i=2;i<N/2;i++){
        if(N%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int N;
    cin>>N;
    cout<<N<<"is prime "<<isPrime(N);
    return 0;
}