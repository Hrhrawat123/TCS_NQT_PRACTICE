#include <bits/stdc++.h>
using namespace std;
void selection_sort(vector<vector<int>>& arr, int N){
    for(int i = 0; i < N - 1; i++){
        int minIndex = i;

        for(int j = i + 1; j < N; j++){
            if(arr[j][0] < arr[minIndex][0]){
                minIndex = j;
            }
            else if(arr[j][0] == arr[minIndex][0] && arr[j][1] < arr[minIndex][1]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
int main(){
    int N;
    cin >> N;
    vector<vector<int>> arr(N,vector<int>(2));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 2; j++){
            cin >> arr[i][j];
            
        }
    }
    selection_sort(arr,N);
    string ans="";
  cout<<endl;
    for(auto it : arr){
        for(auto x : it){
            ans+=to_string(x)+" ";
        }
        ans+=",";
    }
    ans=ans.substr(0,ans.length()-2);
     cout<<ans;
     return 0;
}

#include<iostream>
#include<string>
#include<vector>
#include<utility>
using namespace std;
typedef pair<int,int> pii;

void selection_sort(vector<pii>& arr, int N){
    for(int i = 0; i < N - 1; i++){
        int minIdx = i;

        for(int j = i + 1; j < N; j++){
            if(arr[j].first < arr[minIdx].first ||
              (arr[j].first == arr[minIdx].first && arr[j].second < arr[minIdx].second)){
                minIdx = j;
            }
        }

        swap(arr[i], arr[minIdx]);
    }
}

int main(){
    int N;
    cin >> N;

    vector<pii> arr(N);

    for(int i = 0; i < N; i++){
        cin >> arr[i].first >> arr[i].second;
    }

    selection_sort(arr, N);

    string result = "";
    bool first = true;

    for(auto it : arr){
        if(!first) result += ",";
        first = false;

        result += to_string(it.first) + " " + to_string(it.second);
    }

    cout << result;
}