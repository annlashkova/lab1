#include <iostream>
using namespace std;

int main() {
    double order, weight, delivery, total;

    cout << "Enter order cost: ";
    cin >> order;

    cout << "Enter weight: ";
    cin >> weight;

    if (order >= 100) {
        delivery = 0;
    }
    else {
        delivery = 10;
        if (weight > 10) {
            delivery = delivery + 8;
        }
    }

    total = order + delivery;

    cout << "Delivery: " << delivery << endl;
    cout << "Total: " << total << endl;

    return 0;
}
