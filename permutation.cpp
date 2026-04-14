
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r;
    cin>>n;
    cin>>r;
    int temp=1;
    for(int i=1;i<=n;i++){
        temp*=i;
    }
    int temp2=n-r;
    int temp3=1;
    for(int i=1;i<=temp2;i++){
        temp3*=i;
    }
    cout<<temp/temp3;
    return 0;
}