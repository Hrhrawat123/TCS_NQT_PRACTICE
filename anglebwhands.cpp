#include<bits/stdc++.h>
using namespace std;
int main(){
    string time;
    getline(cin,time);
    stringstream ss(time);
    string word;
    vector<double>arr;
    while(getline(ss,word,':')){
        arr.push_back(stoi(word));
    }
    double min=arr[1];
    min=min*6;
    double hour=(arr[0]*30)+(arr[1]*0.5);
    double result=abs(min-hour);
    if(result>180){
        result=360-result;
    }
    cout<<"angles between hands at the time "<<arr[0]<<":"<<arr[1]<<" is "
    <<result<<" degree";
    return 0;
}