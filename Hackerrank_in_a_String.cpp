#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  
    string s;
    cin>>s;
    string p="hackerrank";
    int j=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==p[j])
             j++;
    }
    if(j==10){
       cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}
