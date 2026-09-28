#include <cmath>
#include <cstdio>
#include <vector>
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
    vector<int>counter(100,0);
    for(int i=0;i<n;i++){
        counter[arr[i]]++;
    }
    for(int i=0;i<100;i++){
        while(counter[i]!=0){
            cout<<i<<" ";
            counter[i]--;
        }
    }
    return 0;
}
