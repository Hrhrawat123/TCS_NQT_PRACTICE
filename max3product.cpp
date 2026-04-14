#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    getline(cin,line);
    stringstream ss(line);
    string word;
    vector<int>arr;
    while(getline(ss,word,' ')){
        arr.push_back(stoi(word));
    }
    sort(begin(arr),end(arr));
    int n=arr.size();
    int max1=arr[n-1]*arr[n-2]*arr[n-3];
    int max2=arr[0]*arr[1]*arr[n-1];//negative case 2 neg numbers
    cout<<"maximum product of three numbers is "<<max(max1,max2);
    return 0;

}
