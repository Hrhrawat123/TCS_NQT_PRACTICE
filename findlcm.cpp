#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int findhcf(int N1,int N2){
    int hcf=1;
    for(int i=1;i<=min(N1,N2);i++){
        if(N1%i==0 && N2%i==0){
            hcf=i;
        }
    }
    return hcf;
}
int main(){
    int N1,N2;
    cin>>N1;
    cin>>N2;
    cout<<"lcm of "<<N1<<"&"<<N2<<"is:"<<(N1*N2)/findhcf(N1,N2);
    return 0;  
}