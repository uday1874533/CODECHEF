#include <bits/stdc++.h>
using namespace std;
class Distance {
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {}

    void inputDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void outputDistance() {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    Distance addDistance(const Distance& other) {
        Distance result;
        result.feet = feet + other.feet;
        result.inches = inches + other.inches;

        if (result.inches >= 12.0) {
            result.feet += static_cast<int>(result.inches / 12.0);
            result.inches = fmod(result.inches, 12.0);
        }

        return result;
    }
};

int main() {
    Distance distance1, distance2, sumDistance;

    cout << "Enter the first distance:" << endl;
    distance1.inputDistance();

    cout << "Enter the second distance:" << endl;
    distance2.inputDistance();

    sumDistance = distance1.addDistance(distance2);

    cout << "Sum of distances:" << endl;
    sumDistance.outputDistance();

    return 0;
}

