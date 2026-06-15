#include <iostream>
using namespace std;

int gcd(int n1, int n2){
    while(n1>0&&n2>0){
        if(n1>n2)
            n1 = n1%n2;
        else if(n2>n1)
            n2 = n2%n1;
    }
    if(n1 == 0)
        return n2;
    else
        return n1;
}
int main(){
    int n1, n2;
    int n = min(n1, n2);
    cout<<"Enter 2 numbers: ";
    cin>>n1>>n2;
    cout << (n1/gcd(n1, n2)) * n2;
}