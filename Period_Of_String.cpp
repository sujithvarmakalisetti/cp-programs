#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 
    string s;
    cin>>s;
    int count=0;
    for(int p=1;p<s.size();p++){
        count=0;
        for(int i=p;i<s.size();i++){
            if(s[i]==s[i-p]){
                count++;
            }
            if(count==p){
                cout<<p;
                return 0;
            }
        }
        
    }
    cout<<-1;
    return 0;
}
