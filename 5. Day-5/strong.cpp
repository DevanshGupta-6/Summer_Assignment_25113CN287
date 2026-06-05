#include <iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i = 2; i<=n; i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n, s = 0;
    cout<<"Enter a number: ";
    cin>>n;
    int n1 = n;
    while(n1>0){
        int d = n1%10;
        s+= factorial(d);
        n1/=10;
    }
    if(n == s)
        cout<<"This is a Strong number";
    else
        cout<<"This is not a Strong number";
}