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
    int count=0;
    while(n!=0){
        if((n&1)==1)
            count++;
        n>>=1;
    } 
    cout<<count;
    return 0;
}
