#include <iostream>
using namespace std;

// Salary management system: computes net salary with allowances and deductions
struct SalaryRecord {
    string employeeName;
    double basicSalary;
    double allowances;
    double deductions;
};

double calculateNetSalary(const SalaryRecord &record) {
    return record.basicSalary + record.allowances - record.deductions;
}

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    cin.ignore();

    SalaryRecord records[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for employee " << i + 1 << ":\n";
        cout << "Name: ";
        getline(cin, records[i].employeeName);
        cout << "Basic Salary: ";
        cin >> records[i].basicSalary;
        cout << "Allowances: ";
        cin >> records[i].allowances;
        cout << "Deductions: ";
        cin >> records[i].deductions;
        cin.ignore();
    }

    cout << "\n----- Salary Slip -----\n";
    for (int i = 0; i < n; i++) {
        double netSalary = calculateNetSalary(records[i]);
        cout << "Name: " << records[i].employeeName
             << " | Net Salary: " << netSalary << endl;
    }
    return 0;
}
