#include<iostream.h>
#include<conio.h>
class employee
{
	public:
	int eid,salary;
	char ename[10],dept[10];
	{
		eid=id;
		ename=name;
		dept=dep;
		salary=sal;
	}
// method to print employee details
	void printemp()
	{
		cout<<"enter id :"<<eid;
		cout<<"enter name :"<<ename;
		cout<<"enter department :"<<dept;
		cout<<"enter salary:"<<salary;
	}
//getter method for employee name
	string getname()
	{
		return ename;
	}
};
int main() {
    // Input 5 employee data using constructor
    for (int i = 0; i < 5; i++) {
	int id;
	char name, department;
	double salary;
	cout << "Enter employee " << i + 1 << " details:" << endl;
	cout << "ID: ";
	cin >> id;
	cout << "Name: ";
	cin >> name;
	cout << "Department: ";
	cin >> department;
	cout << "Salary: ";
	cin >> salary;

    }

    // Print employee data using constructor
    for (int a= 0; a < 5; a++) {
	cout << "Employee " << i + 1 << " details:" << endl;
	employees[i].printEmployee();
	cout << endl;
    }

    // Implement searching employee record based on employee name
    char search;
    cout << "Enter employee name to search: ";
    cin >> search;
    for (int l = 0; l < 5; l++) {
	if (employees[i].getName() = search) {
	    cout << "Employee found:" << endl;
	    employees[i].printEmployee();
	    break;
	}
    }

    return 0;
}
