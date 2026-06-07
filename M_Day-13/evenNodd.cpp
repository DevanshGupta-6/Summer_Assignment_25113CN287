#include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter number of terms: ";
   cin>>n;
   int arr[n];
   cout<<"Enter numbers: ";
   for(int i = 0; i<n; i++){
      cin>>arr[i];
   }
   int even = 0, odd = 0;
   for(int i = 0; i<n; i++){
      if(arr[i]%2 == 0)
       even++;
      else
       odd++;
   }
   cout<<"There are "<<even<<" even elements and "<<odd<<" odd elements";
}