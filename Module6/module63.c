#include <iostream>
using namespace std;

class Interest {
private:
    int principal;
    int year;
    float rate;

public:
    // Constructor with default rate
    Interest(int p, int y, float r = 2.5) {
        principal = p;
        year = y;
        rate = r;
    }

    // Function to calculate simple interest
    float calculateInterest() {
        return (principal * year * rate) / 100;
    }
};

int main() {
    int p, y;
    float r;
    
    cout << "Enter principal amount: ";
    cin >> p;
    cout << "Enter number of years: ";
    cin >> y;
    cout << "Enter rate of interest (default is 2.5%): ";
    cin >> r;

    // Create an object of Interest with dynamic initialization
    Interest obj(p, y, r);

    // Calculate and display simple interest
    cout << "Simple Interest: " << obj.calculateInterest() << endl;

    return 0;
}

