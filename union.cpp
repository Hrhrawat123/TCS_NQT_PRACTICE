#include<bits/stdc++.h>
using namespace std;
int main(){
   int N;
   cin>>N;
   vector<int>ans;
   for(int i=0;i<N;i++){
       int num;
       cin>>num;
       ans.push_back(num);
   }
   int M;
   cin>>M;
   vector<int>ans2;
   for(int i=0;i<M;i++){
       int num;
       cin>>num;
       ans2.push_back(num);
   }
   int i=0;
   int j=0;
   vector<int>Union;
   while(i<ans.size() && j<ans2.size()){
       if(ans[i]<ans2[j]){
           Union.push_back(ans[i]);
           i++;
       }
       else if(ans2[j]<ans[i]){
           Union.push_back(ans2[j]);
           j++;
       }
       else{
           Union.push_back(ans[i]);
           i++;
           j++;
       }
   }
   while(i<ans.size()){
       Union.push_back(ans[i]);
       i++;
   }
   while(j<ans2.size()){
       Union.push_back(ans2[j]);
       j++;
   }
cout<<"elements after union:\n";
    for(int el:Union){
        cout<<el;
    }
    return 0;
}