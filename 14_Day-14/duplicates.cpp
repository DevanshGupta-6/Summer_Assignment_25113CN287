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
    for(int i = 0; i<n; i++){
        if(arr[i] == -1){
            cout<<"That's invalid: i = "<<i<<" ";
            continue;
        }
        newarr[i] = arr[i];
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                cout<<"Found a duplicate: i = "<<i<<" j = "<<j<<"// ";
                arr[j] = -1;
            }
        }
    }
    for(int i = 0; i<n; i++){
        cout<<newarr[i]<<" ";
    }
}