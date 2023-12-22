#include <iostream>
#include <string>

using namespace std;

class Building {
private:
    int price;
public:
    string address;
    inline static int buildingCount;
    
    Building() : price(1000000) { 
        buildingCount++;
    };

    Building(int price) {
        this->price = price;
        buildingCount++;
    };

    int getPrice() {
        return price;
    }
};

int main() {
    Building b1; 
    b1.address = "123 Main St";
    cout << "Building 1 Price: $" << b1.getPrice() << endl;

    Building b2 = Building(2000000); 
    b2.address = "456 Elm St";
    cout << "Building 2 Price: $" << b2.getPrice() << endl;

    Building b3; 
    cout << "Total Buildings: " << Building::buildingCount << endl;

    Building *b4 = new Building(3000000); 
    b4->address = "789 Oak St";
    cout << "Building 4 Address: " << b4->address << endl;
    cout << "Building 4 Price: $" << b4->getPrice() << endl;

   
    delete b4;

    return 0;
}
