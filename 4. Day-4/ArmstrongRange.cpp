#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n){
    int n1 = n, c = 0, s = 0;
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
    if(s == n1)
        return true;
    else
        return false;
}
int main(){
    int n;
    cout<<"Enter the end term: ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        if(isArmstrong(i))
            cout<<i<<" ";
    }
}