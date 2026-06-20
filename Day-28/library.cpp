#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    class Borrower{
        private:
            string name;
            string book;
            int num;
            string date;
            string issueDate;
            int fine;
        
        public:
            Borrower(){
                name = "";
                book = "";
                num = 0;
                date = "";
                issueDate = "";
                fine = 0;
            }

            void enterBorrowerDetails(){
                cout << "Enter Book number: ";
                cin >> num;
                cin.ignore();
                cout << "Enter Borrower Name: ";
                getline(cin, name);
                cout << "Enter Book borrowed: ";
                getline(cin, book);
                cout << "Enter Issue Date(DD-MM-YYYY): ";
                getline(cin, issueDate);
                cout << "Enter Return Date(DD-MM-YYYY): ";
                getline(cin, date);
            }

            void displayBorrowerDetails(){
                cout << "Name: " << name << endl;
                cout << "Book: " << book << endl;
                cout << "Book number: " << num << endl;
                cout << "Issue Date: " << issueDate << endl;
                cout << "Return Date: " << date << endl;
                cout << "Fine: " << fine << endl;
            }
            int calculateDays(){
                //Days since Jan 1st 2025
                int issueDay = stoi(issueDate.substr(0, 2));
                int issueMonth = stoi(issueDate.substr(3, 2));
                int issueYear = stoi(issueDate.substr(6, 4));

                int returnDay = stoi(date.substr(0, 2));
                int returnMonth = stoi(date.substr(3, 2));
                int returnYear = stoi(date.substr(6, 4));
                
                int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
                if((returnYear%4==0&&returnYear%100!=0)||returnYear%400==0){
                    daysInMonth[1] = 29;
                }
                
                //366+365+365+365+366

                int returnDateInDays = returnDay;
                for(int i = 0; i < returnMonth - 1; i++){
                    returnDateInDays += daysInMonth[i];
                }

                //int days = (returnYear - issueYear) * 365 + (returnMonth - issueMonth) * 30 + (returnDay - issueDay);

                int days = 0;
                
                return days;
            }
            int fineCalculate(int days){
                if(days > 15){
                    fine = (days - 15) * 5;
                } else {
                    fine = 0;
                }
                return fine;
            }
    };

    vector<Borrower> Borrowers;
    int numBorrowers;

    cout << "Enter the number of Borrowers: ";
    cin >> numBorrowers;

    for(int i = 0; i < numBorrowers; i++){
        Borrower emp;
        emp.enterBorrowerDetails();
        Borrowers.push_back(emp);
    }

    cout << "\nDetails of borrowers:\n";
    for(auto& emp : Borrowers){
        emp.displayBorrowerDetails();
        cout << "--------------------------\n";
    }

    return 0;
}