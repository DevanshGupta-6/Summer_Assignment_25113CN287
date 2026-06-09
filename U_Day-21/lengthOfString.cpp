#include <iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter text: ";
    getline(cin, s);

    int sum = 0;
    for(int i = 0; i<s.length(); i++){
        sum++;
    }
    cout<<sum<<" is th length of the string";
}