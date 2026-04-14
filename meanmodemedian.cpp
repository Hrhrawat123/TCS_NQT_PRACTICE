#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;

    vector<int> arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    // Mean
    float sum = 0;
    for(int el : arr){
        sum += el;
    }
    float mean = sum / N;

    // Mode
    unordered_map<int,int> mp;
    for(int el : arr){
        mp[el]++;
    }

    int maxfreq = 0;
    int mode = arr[0];

    for(auto it : mp){
        if(it.second > maxfreq){
            maxfreq = it.second;
            mode = it.first;
        }
    }

    // Median using empirical formula
    float median = (mode + 2*mean) / 3;

    cout<<"Mean is: "<<mean<<endl;
    cout<<"Mode is: "<<mode<<endl;
    cout<<"Median is: "<<median<<endl;

    return 0;
}