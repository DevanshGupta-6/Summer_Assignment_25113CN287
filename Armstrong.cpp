#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, s = 0, c = 0;
    cout<<"Enter a number to check: ";
    cin>>n;
    int n1 = n;
    while(n>0){
        c++;
        n/=10;
    }
    n = n1;
    while(n>0){
        int d = n%10;
        s+=pow(d, c);
        n/=10;
    }
    if(n1 == s)
        cout<<"The number is Armstrong";
    else
        cout<<"The number is not Armstrong";
}