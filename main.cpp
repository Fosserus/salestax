// literally a coding shitpost because i'm too lazy to calculate sales tax and shit
// fuck american price tags


#include <iostream>
using namespace std;

double calculateTotal(double amount) {
    return amount * 0.0825;
}

int main()
{
    double price = 0;
    std::cout << "Enter the price of the item: ";
    cin >> price;
    cout << "\nTotal with tax is: $" << (calculateTotal(price) + price) << endl;
    system("PAUSE");
    return 0;
}

