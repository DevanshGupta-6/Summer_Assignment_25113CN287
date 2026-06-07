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
   int newarr[n];
   for(int j = 0; j<n; j++){
      newarr[j] = arr[n - 1 - j];
   }
   for(int k = 0; k<n; k++){
    cout<<newarr[k]<<" ";
   }
}