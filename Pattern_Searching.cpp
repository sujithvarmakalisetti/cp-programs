#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {

    
    string s;
    cin>>s;
    string p;
    cin>>p;
    for(int i=0;i<=s.size()-p.size();i++){
        if(s.substr(i,p.size())==p){
            cout<<i<<endl;
        }
    }
      
    return 0;
}
