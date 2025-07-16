#include <iostream>
using namespace std;

class Vehicle {
protected:
    string type;
public:
    void setType(string t) {
        type = t;
    }
    void displayType() {
        cout << "Type: " << type << endl;
    }
};

class Car : public Vehicle {
private:
    string model;
    float price;
public:
    void input() {
        cout << "Enter Car Type: ";
        cin >> type;
        cout << "Enter Car Model: ";
        cin >> model;
        cout << "Enter Car Price: ";
        cin >> price;
    }
    void display() {
        displayType();
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
    }
};

class Bike : public Vehicle {
private:
    string model;
    int engineCapacity;
public:
    void input() {
        cout << "Enter Bike Type: ";
        cin >> type;
        cout << "Enter Bike Model: ";
        cin >> model;
        cout << "Enter Engine Capacity (in cc): ";
        cin >> engineCapacity;
    }
    void display() {
        displayType();
        cout << "Model: " << model << endl;
        cout << "Engine Capacity: " << engineCapacity << "cc" << endl;
    }
};

int main() {
    Car c;
    Bike b;

    cout << "--- Enter Car Details ---" << endl;
    c.input();
    cout << "\n--- Car Information ---" << endl;
    c.display();

    cout << "\n--- Enter Bike Details ---" << endl;
    b.input();
    cout << "\n--- Bike Information ---" << endl;
    b.display();

    return 0;
}
