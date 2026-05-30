#include <iostream>
using namespace std;

int main(){
    int n, a = 0, b = 1;
    int s = a + b;
    cout<<"Enter number of terms: ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        cout<<b<<" ";
        a = b;
        b = s;
        s = a + b;
    }
}