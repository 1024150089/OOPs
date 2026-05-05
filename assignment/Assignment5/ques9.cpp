#include <iostream>
#include <string>
using namespace std;

class VehicleInfo {
protected:
    string brand;
    string type;
    int manufactureYear;

public:
    VehicleInfo(string b, string t, int y)
        : brand(b), type(t), manufactureYear(y) {}
};

class HeavyVehicle : public VehicleInfo {
protected:
    int capacity;

public:
    HeavyVehicle(string b, string t, int y, int c)
        : VehicleInfo(b, t, y), capacity(c) {}
};

class ColdStorageTruck : public HeavyVehicle {
    int tempLimit;

public:
    ColdStorageTruck(string b, string t, int y, int c, int temp)
        : HeavyVehicle(b, t, y, c), tempLimit(temp) {}

    void showData() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << type << endl;
        cout << "Year: " << manufactureYear << endl;
        cout << "Capacity: " << capacity << " kg" << endl;
        cout << "Temperature: " << tempLimit << " C" << endl;
    }
};

int main() {
    ColdStorageTruck truck1("Tata", "X1", 2024, 1000, -5);

    truck1.showData();

    cout << "\ndaivik 1024150089" << endl;

    return 0;
}
