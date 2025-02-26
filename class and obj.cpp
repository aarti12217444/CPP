#include <iostream>
using namespace std;

// 🏗️ Class Definition
class Car {
    // 🔑 Attributes (Data Members)
    string color;
    string model;
    int speed;

public:
    // 🎨 Methods (Member Functions)

    // 🚗 Set Car Details
    void setDetails(string c, string m, int s) {
        color = c;
        model = m;
        speed = s;
    }

    // 🔍 Display Car Details
    void displayDetails() {
        cout << "Car Model: " << model << endl;
        cout << "Car Color: " << color << endl;
        cout << "Car Speed: " << speed << " km/h" << endl;
    }

    // 🏁 Start the Car
    void start() {
        cout << model << " is starting..." << endl;
    }

    // 🛑 Stop the Car
    void stop() {
        cout << model << " is stopping..." << endl;
    }
};

int main() {
    // 🚗 Object 1: BMW Car
    Car bmw;
    bmw.setDetails("Black", "BMW X5", 240);
    bmw.displayDetails();
    bmw.start();
    bmw.stop();

    cout << endl;

    // 🚗 Object 2: Audi Car
    Car audi;
    audi.setDetails("White", "Audi Q7", 220);
    audi.displayDetails();
    audi.start();
    audi.stop();

    return 0;
}
