#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of items in the inventory: ";
    cin>>n;
    string items[n];
    int quantity[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the name of item "<<i+1<<": ";
        cin>>items[i];
        cout<<"Enter the quantity of item "<<i+1<<": ";
        cin>>quantity[i];
    }
    cout<<"Inventory List:\n";
    for(int i=0;i<n;i++){
        cout<<"Item: "<<items[i]<<" | Quantity: "<<quantity[i]<<endl;
    }
    return 0;
}