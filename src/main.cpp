#include <iostream>
#include "Employee.h"
#include "CircularArrayLinkedList.h"
using namespace std;


int main() {
    Employee employee;
    emplo emploo;
    int x;
    float y;
    string value;
    string menu = "____ Employee Recording System ____\n"
                  "Please select for the following Menu Operation:\n"
                  "1) Appointment of a new employee\n"
                  "2) Appointment of a transferred employee"
                  "3) Updating the title and salary coefficent of an employee\n"
                  "4) Deletion of employee\n"
                  "5) Listing the information of an employee\n"
                  "6) Listing employees order by employee number\n"
                  "7) Listing employees order by appointment date\n"
                  "8) Listing employees appointed after a certain date\n"
                  "9) Listing employees assigned in given year\n"
                  "10) Listing employees born before a certain date\n"
                  "11) Listing employees born in particular month\n"
                  "12) Listing the information of the last assigned employee with a given title\n";

    cout << menu;
    for(int i=1;i>0;i++){
        cin >> x;
        if(x==1){
            cout << "Please type the employee number";
            cin >> x;
            emploo.employeeNumber = x;
            cout << "Please type the employee type";
            cin >> x;
            emploo.employeeType = x;
            cout << "Type the name";
            cin >> value;
            emploo.name = value;
            cout << "Type the surname";
            cin >> value;
            emploo.surname = value;
            cout << "Type title";
            cin >> value;
            emploo.title;
            cout << "Type salary coefficent ";
            cin >> y;
            emploo.salryCoefficient = y;
            cout << "Type birth date";
            cin >> value;
            emploo.dateOfbirth = value;
            cout << "Type appointment date";
            cin >> value;
            emploo.dateOfappointment = value;
        }

        if(x==2){
            cout << "Please type the employee number";
            cin >> x;
            cout << "Please type the employee type";
            cin >> x;
            cout << "Type the name";
            cin >> value;
            cout << "Type title";
            cin >> value;
            cout << "Type salary coefficent";
            cin >> y;
            cout << "Type birth date";
            cin >> value;
            cout << "Type appointment date";
            cin >> value;
            cout << "Type length of service days";
            cin >> x;
        }
        if(x==3){
            cout << "Please type the employee number";
            cin >> x;
        }
        if(x==4){
            cout << "Please type the employee number";
            cin >> x;
        }
        if(x==5){
            cout << "Please type the employee number";
            cin >> x;
        }
        if(x==6){

        }
        if(x==7){

        }
        if(x==8){

        }
        if(x==9){

        }
        if(x==10){

        }
        if(x==11){

        }
        if(x==12){

        }
    }

    return 0;
}
