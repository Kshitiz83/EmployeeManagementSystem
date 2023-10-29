#include <iostream>

using namespace std;


class Employee{
int id;
int sal;
public:
string name;
char dep;
int att;
int parkingLot;
Employee(int id1,int sal1,string name1,char dep1,int att1,int par1){
  id=id1;
  sal=sal1;
  name=name1;
  dep=dep1;
  att=att1;
  parkingLot=par1;
}
void increaseatt(){
    att++;
}
void increasesal(int inc){
    sal=sal+inc;
}
void Showdata(){
    cout<<id<<endl<<sal<<endl<<name<<endl<<dep<<endl<<att<<endl<<parkingLot;
}
addemployee(int id2,int sal2,string name2,char dep2,int att2,int par2){
}
};
int main() {
    Employee E1;

    while (true) {
        cout << "\nEmployee Management System\n";
        cout << "1. Add Salary\n";
        cout << "2. Display Employee Information\n";
        cout << "3. Check Out Attendance\n";
        cout << "4. Exit\n";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                int sal;
                cout<<"Enter the Value by which to increment the salary"<<endl;
                cin>>sal;
                E1.increasesal(sal);
                break;
            }
            case 2:
                E1.Showdata();
                break;
            case 3: {
                cout<<E1.att<<endl;
                break;
            }
            case 4: {
                exit(0);
                break;
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
