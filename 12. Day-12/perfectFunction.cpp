#include <iostream>
using namespace std;
bool isPerfect(int n){
    int s = 0;
    for(int i = 1; i<n; i++){
        if(n%i == 0)
            s+=i;
    }
    if(s == n)
        return true;
    else
        return false;
}
int main(){
   int n;
   cout<<"Enter a number to check: ";
   cin>>n;
   if(isPerfect(n))
    cout<<"It is a Perfect Number";
   else
    cout<<"It is not a Perfect Number";
}