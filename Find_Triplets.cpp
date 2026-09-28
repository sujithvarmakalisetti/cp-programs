#include <cmath>
#include <cstdio>
#include <vector>
#include<set>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){    
        cin>>arr[i];    
    }
    int sum;
    cin>>sum;
    set<vector<int>>s;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    vector<int>temp={arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    s.insert(temp);
                }
            }
        }
    }
    
    for(auto p:s){
        for(int j=0;j<p.size();j++){
            cout<<p[j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
