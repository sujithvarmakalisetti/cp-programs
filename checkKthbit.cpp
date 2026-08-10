#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    int k;
    cin>>n;
    cin>>k;
    if(((n>>k)&1) ==0)
        cout<<0;
    else
        cout<<1;
    return 0;
}
