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
   cout<<"Final array: ";
   for(int i = 0; i<n; i++){
      cout<<arr[i]<<", ";
   }
}