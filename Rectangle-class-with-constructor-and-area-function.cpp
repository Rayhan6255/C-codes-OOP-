#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, width;
public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    float calculateArea() {
        return length * width;
    }
};

int main() {
    float l, w;
    cout << "Enter length and width: ";
    cin >> l >> w;

    Rectangle rect(l, w);
    cout << "Area of Rectangle: " << rect.calculateArea() << endl;

    return 0;
}
