#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    void setName(string n) {
        name = n;
    }
    void setRoll(int r) {
        rollNumber = r;
    }
    string getName() {
        return name;
    }
    int getRoll() {
        return rollNumber;
    }
};

int main() {
    Student s;
    string name;
    int roll;

    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter Roll Number: ";
    cin >> roll;

    s.setName(name);
    s.setRoll(roll);

    cout << "\n--- Student Info ---" << endl;
    cout << "Name: " << s.getName() << endl;
    cout << "Roll Number: " << s.getRoll() << endl;

    return 0;
}
