#include <iostream>

using namespace std;

class Clothes {
private:
    

public:
    Clothes();  // Constructor
    ~Clothes(); // Destructor
};

Clothes::Clothes() {
    cout << "Clothes object is created" << endl;
}

Clothes::~Clothes() {
    cout << "Clothes object is destroyed" << endl;
}

enum ClothType { TShirt, Shirt, Jeans, Dress };

int main() {
    ClothType myCloth = Jeans; 

    cout << "ClothType value: " << myCloth << endl;
    int clothInt = myCloth; // Converting enum to int
    cout << "ClothType as integer: " << clothInt << endl;

    
    Clothes myClothes;

    return 0;
}
