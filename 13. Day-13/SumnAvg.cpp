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
   int sum = 0;
   float avg;
   for(int i = 0; i<n; i++){
      sum+=arr[i];
   }
   avg = (float)sum/n;
   cout<<"The sum of values is "<<sum<<" and the average is "<<avg;
}