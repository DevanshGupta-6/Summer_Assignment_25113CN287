#include <iostream>
using namespace std;

//Code incomplete
int main(){
    int n;
    cout<<"Enter number of names: ";
    cin>>n;
    string names[n];
    cout<<"Enter names: ";
    for(int i = 0; i<n; i++){
        getline(cin, names[i]);
    }
}