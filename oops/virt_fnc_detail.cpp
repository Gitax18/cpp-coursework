#include <iostream>
#include <vector>
using namespace std;

class Employee {
protected:
    string name;
    double salary;

public:
    Employee() {}
    Employee(string name, double sal) : name(name), salary(sal) {}
    
    virtual void raiseSalary(int per) {
        salary = salary + (per * salary / 100);
    }

    virtual void display() {
        cout << "Emp Type: Employee" << '\n'
             << "Emp Name: " << name << '\n'
             << "Emp Salary: " << salary << endl;
    }
};

class Engineer : public Employee {
private:
    string post;

public:
    Engineer() : Employee() {}
    Engineer(string name, double sal, string post) : Employee(name, sal), post(post) {}

    void raiseSalary(int per) override {
        salary = salary + (per * salary / 100) + (per / 2 * 5);
    }

    void display() override {
        cout << "Emp Type: Engineer" << '\n'
             << "Emp Name: " << name << '\n'
             << "Emp Salary: " << salary << '\n'
             << "Emp Post: " << post << endl;
    }
};

class Manager : public Employee {
private:
    string post;

public:
    Manager() : Employee() {}
    Manager(string name, double sal, string post) : Employee(name, sal), post(post) {}

    void raiseSalary(int per) override {
        salary = salary + (per * salary / 100) + 1000;
    }

    void display() override {
        cout << "Emp Type: Manager" << '\n'
             << "Emp Name: " << name << '\n'
             << "Emp Salary: " << salary << '\n'
             << "Emp Post: " << post << endl;
    }
};

int main() {
    int n;
    cin >> n;
    vector<Employee*> emps;

    for (int i = 0; i < n; i++) {
        char choice;
        string name;
        double salary;
        string post;

        cin >> choice;

        cin >> name;
        cin >> salary;
        cin >> post;

        switch (choice) {
        case 'E': {
            Engineer* emp = new Engineer(name, salary, post);
            emps.push_back(emp);
            break;
        }
        case 'M': {
            Manager* emp = new Manager(name, salary, post);
            emps.push_back(emp);
            break;
        }
        default:
            cout << "Invalid choice" << endl;
        }
    }

    for (int i = 0; i < n; i++) {
        emps[i]->display();
        cout << "*************************" << endl;
    }

    // Freeing dynamically allocated memory
    for (auto emp : emps) {
        delete emp;
    }

    return 0;
}
