#include <iostream>
#include <cmath>
using namespace std;
bool isArmstrong(int n){
    int n1 = n, s = 0, c = 0;
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
     return true;
    else
     return false;
}
int main(){
   int n;
   cout<<"Enter a number: ";
   cin>>n;
   if(isArmstrong(n))
    cout<<"It is an Armstrong number";
   else
    cout<<"It is not an Armstrong number";
}