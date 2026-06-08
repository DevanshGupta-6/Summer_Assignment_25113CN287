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

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[i]>arr[j]){
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}