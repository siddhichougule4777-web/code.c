#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
    int empId;
    string empName;
    string department;
    float basicSalary;

public:
    void inputDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, empName);

        cout << "Enter Department: ";
        getline(cin, department);

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void displayDetails()
    {
        cout << "\nEmployee Details";
        cout << "\nEmployee ID: " << empId;
        cout << "\nEmployee Name: " << empName;
        cout << "\nDepartment: " << department;
        cout << "\nBasic Salary: " << basicSalary;
    }

    void calculateAnnualSalary()
    {
        float annualSalary = basicSalary * 12;
        cout << "\nAnnual Salary: " << annualSalary << endl;
    }
};

int main()
{
    Employee emp;

    emp.inputDetails();
    emp.displayDetails();
    emp.calculateAnnualSalary();
    return 0;
}