#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<string>
#include <algorithm>
using namespace std;


int main() {

    int n;
    string text;
    string pattern;
    cin>>n;
    cin>>text;
    cin>>pattern;
    string p="";
    
    vector<string>arr;
    
    for(int i=0;i<text.size();i++){
        if(text[i]!=',')
            p+=text[i];
        else{
            arr.push_back(p);
            p="";
        }    
    }
    arr.push_back(p);
    int j=0;
    bool k=false;
    for(int i=0;i<arr.size();i++){
        j=0;
        for(int k=0;k<arr[i].size();k++){
            if(arr[i][k]==pattern[j])
                j++;
        }
        if(j==pattern.size()){
            cout<<arr[i];
            return 0;
        }
             
    }
    cout<<"No match found";
    
    
    return 0;
}
