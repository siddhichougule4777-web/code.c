#include<iostream>
#include<string>
using namespace std;
class Product
{
private:
    int productId;
    string productName;
    int quantity;
    float unitPrice;
    float totalCost;

public:
    void inputDetails()
    {
        cout << "Enter Product ID: ";
        cin >> productId;

        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, productName);

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Unit Price: ";
        cin >> unitPrice;
    }

    void calculateTotalCost()
    {
        totalCost = quantity * unitPrice;
    }

    void displayDetails()
    {
        cout << "\nProduct Details";
        cout << "\nProduct ID: " << productId;
        cout << "\nProduct Name: " << productName;
        cout << "\nQuantity: " << quantity;
        cout << "\nUnit Price: " << unitPrice;
        cout << "\nTotal Cost: " << totalCost << endl;
    }
};

int main()
{
    Product p;

    p.inputDetails();
    p.calculateTotalCost();
    p.displayDetails();

    return 0;
}