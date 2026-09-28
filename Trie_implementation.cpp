#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

struct trieNode{
    trieNode* child[26];
    bool isend;
    
    trieNode(){
        isend=false;
        for(int i=0;i<26;i++){
            child[i]=nullptr;
        }
    }
};

int main() {
 
    trieNode* root=new trieNode();
    int n;
    cin>>n;
    vector<string>ele(n);
    
    
    
    
    string line;
    cin >> line;
    
    stringstream ss(line);
    string word;
    
    int i = 0;
    
    while (getline(ss, word, ',')) {
        ele[i] = word;
            i++;
     }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    string search;
    cin>>search;
    for(int i=0;i<n;i++){
        trieNode* curr=root;
        for(char ch:ele[i]){
            int index=ch-'a';
            if(curr->child[index]==nullptr){
                curr->child[index]=new trieNode();
                
            }
            curr=curr->child[index];
        }
        
        curr->isend=true;
        
        }
    trieNode* curr=root;
    for(char i: search){
        int index=i-'a';
        if(curr->child[index]==nullptr){
            cout<<0;
            return 0;
        }
        curr=curr->child[index];
    }
    /*int in=search[search.size()-1]-'a';*/
    
    if(curr->isend){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}
