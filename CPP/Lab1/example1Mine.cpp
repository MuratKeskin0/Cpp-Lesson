#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Clothe
{
private:
    string brand;
    string model;
    string size;
    int price;

public:
    Clothe() {}
    Clothe(string brand, string model, string size, int price)
    {
        this->brand = brand;
        this->model = model;
        this->size = size;
        this->price = price;
    }

    void setClotheDetails(string brand, string model, string size, int price)
    {
        this->brand = brand;
        this->model = model;
        this->size = size;
        this->price = price;
    }

    void displayInfo()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Size: " << size << endl;
        cout << "Price: " << price << endl;
    }

    void setBrand(string brand)
    {
        this->brand = brand;
    }
    void setModel(string model)
    {
        this->model = model;
    }
    void setSize(string size)
    {
        this->size = size;
    }
    void setPrice(int price)
    {
        this->price = price;
    }

    string getModel()
    {
        return this->model;
    }
    string getBrand()
    {
        return this->brand;
    }
    string getSize()
    {
        return this->size;
    }
    int getPrice()
    {
        return this->price;
    }
};

class Seller
{
private:
    vector<Clothe> clothes;

public:
    void addClothe(Clothe c)
    {
        clothes.push_back(c);
    }

    int totalPriceofClothes()
    {
        int total = 0;
        for (Clothe c : clothes)
        {
            total += c.getPrice();
        }
        return total;
    }
};

int main()
{
    Clothe Gucci;
    Gucci.setClotheDetails("Gucci", "Skirt", "Medium", 34000);
    Clothe Prada("Prada", "Shoes", "36", 20300);
    Gucci.displayInfo();
    Prada.displayInfo();

    Seller s;
    s.addClothe(Gucci);
    s.addClothe(Prada);
    cout << "Total Price is: " << s.totalPriceofClothes() << endl;

    return 0;
}