#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter the end term: ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        int i1 = i, s = 0, c = 0;
        while(i1>0){
            c++;
            i1/=10;
        }
        i1 = i;
        while(i1>0){
            int d = i1%10;
            s+=pow(d, c);
            i1/=10;
        }
        if(i == s)
            cout<<i<<" ";
    }
    
}