#include <iostream>
using namespace std;

    /*
     *  struct = a structure groups related variables under one name
     *           structs can contain many different data types ( string, int, double, bool, etc...)
     *           variables in a struct are known as "members"
     *           member variables are accessed using the class member access operator (.)
     */

    struct Employee{
        string name;
        int shift;
        double rate;
        bool overTime = false;
		double grossPay;
    };

void calcGrossPay(Employee &E) ;

int main() {
    Employee employeeA;
    employeeA.name = "Don Duck";
    employeeA.shift = 3;
    employeeA.rate = 25.25;
    employeeA.overTime = true;

    calcGrossPay(employeeA);
    cout << employeeA.name << "'s gross pay is $" << employeeA.grossPay << endl;

    Employee employeeB;
    employeeB.name = "Mick Mouse";
    employeeB.shift = 1;
    employeeB.rate = 22.75;

    calcGrossPay(employeeB);
    cout << employeeB.name << "'s gross pay is $" << employeeB.grossPay << endl;

    return 0;
}

void calcGrossPay(Employee &E) {
    int hours;
    cout << "Enter hours worked for " << E.name << ": ";
    cin >> hours;
    E.grossPay = hours * E.rate;

}
