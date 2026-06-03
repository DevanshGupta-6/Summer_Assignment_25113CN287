#include <iostream>
using namespace std;
int main(){
   for(char i = 'A'; i<='E'; i++){
      for(int j = 'A'; j<=i; j++){
         cout<<j;
      }
      cout<<endl;
   }
}