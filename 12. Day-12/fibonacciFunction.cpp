#include <iostream>
using namespace std;
void fibonacci(int n){
    int a = 0, b = 1;
    int s = a + b;
    for(int i = 1; i<=n; i++){
        cout<<b<<" ";
        a = b;
        b = s;
        s = a + b;
    }
}
int main(){
  int n;
  cout<<"Enter number of terms: ";
  cin>>n;
  fibonacci(n);
}