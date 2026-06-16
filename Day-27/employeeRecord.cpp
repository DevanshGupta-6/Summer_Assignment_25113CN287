#include <iostream>
#include <string>
using namespace std;
class Employee{
    public:
        string name;
        int empNo;
        long salary;
        int marks[5];

        void enterRecords(){
            cout<<"Enter name of Employee: ";
            getline(cin, name);
            cout<<"Enter Employee no.";
            cin>>empNo;
            cout<<"Enter salary: ";
            cin>>salary;
            cout<<"Enter ratings in order, (Physics, Graphics, Maths, EVS, PPS)";
            for(int i = 0; i<5; i++){
                cin>>marks[i];
            }
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Employee Number: "<<empNo<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<"Physics: "<<marks[0]<<endl;
            cout<<"Graphics: "<<marks[1]<<endl;
            cout<<"Maths: "<<marks[2]<<endl;
            cout<<"EVS: "<<marks[3]<<endl;
            cout<<"PPS: "<<marks[4]<<endl;
        }
};

int main(){
    Employee ob;
    ob.enterRecords();
    ob.display();
}