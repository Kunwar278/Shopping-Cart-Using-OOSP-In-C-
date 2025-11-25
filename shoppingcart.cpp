#include <iostream>
using namespace std;

class Cart {
public:
    float arr[50];
    int n;

    Cart() {
        n = 0;
    }

    void addItem(float price) {
        arr[n] = price;
        n++;
        cout << "Item added\n";
    }

    void removeItem() {
        if(n > 0) {
            n--;
            cout << "Last item removed\n";
        } else {
            cout << "Cart empty\n";
        }
    }

    void show() {
        if(n == 0) {
            cout << "Cart is empty\n";
        } else {
            float total = 0;
            cout << "Items:\n";
            for(int i = 0; i < n; i++) {
                cout << arr[i] << endl;
                total = total + arr[i];
            }
            cout << "Total = " << total << endl;
        }
    }
};

int main() {
    Cart c;
    int ch;
    float p;

    do {
        cout << "\n1. Add Item\n";
        cout << "2. Remove Item\n";
        cout << "3. Show Cart\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> ch;

        if(ch == 1) {
            cout << "Enter price: ";
            cin >> p;
            c.addItem(p);
        }
        else if(ch == 2) {
            c.removeItem();
        }
        else if(ch == 3) {
            c.show();
        }
        else if(ch == 4) {
            cout << "Bye\n";
        }
        else {
            cout << "Wrong choice\n";
        }

    } while(ch != 4);

    return 0;
}
