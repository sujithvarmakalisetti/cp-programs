#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 
    int i,j;
    cin>>i>>j;
    if(i>j){
        int temp=i;
        i=j;
        j=temp;
    }
    int result=0;
    for(int k=i;k<=j;k++){
        int n=k;
        int count=1;
        while(n!=1){
            if(n%2==0){
                n=n/2;
            }
            else{
                n=3*n+1;
            }
            count++;
        }
        if(count>result){
            result=count;
        }
    }
    cout<<i<<" "<<j<<" "<<result;
    return 0;
}
