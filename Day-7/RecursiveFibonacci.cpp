#include <iostream>
using namespace std;
int fibonacci(int n){
   int a = 0, b = 1, c = 1;
   if(c == 0)
     return 0;
   else if(c == 1)
     return 1;
   else{
     return fibonacci(n - 2) + fibonacci(n -    1);
   }
}
int main(){
   int n;
   cout<<"Enter a number: ";
   cin>>n;
   for(int i = 1; i<=n; i++){
      cout<<fibonacci(i);
   }
}