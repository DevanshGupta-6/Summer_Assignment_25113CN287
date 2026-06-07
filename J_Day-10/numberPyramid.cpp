#include <iostream>
using namespace std;
int main(){
   int base = 0;
   for(int i = 1; i<=5; i++){
      base = base*10 + 1;
      for(int k = i; k<=4; k++){
         cout<<" ";
      }
      cout<<base*base;
      cout<<endl;
   }
}