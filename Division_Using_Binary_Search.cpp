#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    int d;
    
    cin>>n;
    cin>>d;
    
    int left=d;
    int right=n;
    int quotient=0;
    while(left<=right){
        int mid=(left+right)/2;
        if(abs(mid*d)==abs(n)){
            cout<<mid;
            return 0;
        }
        else if(abs(mid*d)>abs(n)){
            right=mid-1;
        }
        else{
            quotient=mid;
            left=mid+1;
        }
    }
    
    cout<<quotient;
    return 0;
}
