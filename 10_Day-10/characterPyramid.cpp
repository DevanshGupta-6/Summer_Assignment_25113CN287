#include <iostream>
using namespace std;

string rowGenerator(int n){
   string firstHalf = "", result;
   char middleTerm = (char)(n + 64);
   for(char i = 'A'; i<=middleTerm; i++){
      firstHalf+=i;
   }
   result = firstHalf;
   for(int j = n-2; j>=0; j--){
      result += firstHalf[j];
   }
   return result;
}
int main(){
   for(int i = 1; i<=5; i++){
      for(int k = i; k<=4; k++){
         cout<<" ";
      }
      cout<<rowGenerator(i)<<endl;
   }
}