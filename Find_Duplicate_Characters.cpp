#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    string s;
    cin>>s;
    vector<char>result;
    int mask=0;
    int duplicate=0;
    bool found=true;
    
    for(int i=0;i<s.size();i++){
        int bit=1<<(s[i]-'a');
        if(bit & mask){
            duplicate=duplicate |bit;
            found=false;
        }
        else{
            mask = mask|bit;
        }
    }
    int printed=0;
    for(int i=0;i<s.size();i++){
        int bit=1<<(s[i]-'a');
        if((bit & duplicate ) && !(printed & bit)){
            cout<<s[i]<<" ";
            printed=printed | bit;
        }
        
        
    }
    if(found){
        cout<<"No duplicates";
    }
    
    return 0;
}
