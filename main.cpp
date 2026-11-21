
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice, quantity;
    double price = 0, subtotal, discount = 0, total;

    cout << "===== FOOD MENU =====" << endl;
    cout << "1. Burger   - P80" << endl;
    cout << "2. Pizza    - P120" << endl;
    cout << "3. Fries    - P50" << endl;
    cout << "4. Milk Tea - P70" << endl;

    cout << "\nEnter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            price = 80;
            break;
        case 2:
            price = 120;
            break;
        case 3:
            price = 50;
            break;
        case 4:
            price = 70;
            break;
        default:
            cout << "Invalid menu selection!" << endl;
            return 0;
    }

    cout << "Enter quantity: ";
    cin >> quantity;

    if (quantity > 0) {
        subtotal = price * quantity;

        if (subtotal >= 300) {
            discount = subtotal * 0.10;
            cout << "You received a 10% discount!"
                 << endl;
        } else {
            discount = 0;
            cout << "No discount applied." << endl;
        }

        total = subtotal - discount;

        cout << fixed << setprecision(2);
        cout << "\n===== RECEIPT =====" << endl;
        cout << "Subtotal: P" << subtotal << endl;
        cout << "Discount: P" << discount << endl;
        cout << "Total Amount: P" << total << endl;

    } else {
        cout << "Invalid quantity!" << endl;
    }

    return 0;
}
