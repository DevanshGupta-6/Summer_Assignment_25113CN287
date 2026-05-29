#include <iostream>
using namespace std;

int main(){
    int n, a = 0, b = 1;
    int s = a + b;
    cout<<"Enter the position value to find: ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        if(i == n){
            cout << b;
            break;
        }
        a = b;
        b = s;
        s = a + b;
    }
}