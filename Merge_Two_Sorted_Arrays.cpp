#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    
    vector<int>a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    int m;
    cin>>m;
    vector<int>b(m);
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    vector<int>c;
    for(int i=0;i<n;i++){
        c.push_back(a[i]);
    }
    for(int i=0;i<m;i++){
        c.push_back(b[i]);
    }
    sort(c.begin(),c.end());
for (int i = 0; i < (int)c.size(); i++) {
    cout << c[i] << " ";
}
    return 0;
}
