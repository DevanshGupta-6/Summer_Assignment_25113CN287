#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int s = 0;
    for(int i = 1; i<n; i++){
        if(n%i == 0)
            s+=i;
    }
    if(s == n)
        cout<<"It is a Perfect number";
    else
        cout<<"It is not a Perfect number";
}