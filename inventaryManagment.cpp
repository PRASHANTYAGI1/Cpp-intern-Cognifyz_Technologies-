#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;
class Item {
public:
    int id;
    string name;
    int quantity;

    Item(int id, std::string name, int quantity)
        : id(id), name(name), quantity(quantity) {}
};

class Inventory {
private:
    vector<Item> items;

public: 
    void addItem(int id,string name, int quantity) {
        items.push_back(Item(id, name, quantity));
        cout << "Item added successfully." << endl;
    }

    void displayItems() {
        if (items.empty()) {
            cout << "No items in inventory." << endl;
            return;
        }

       cout << "Inventory List:" << endl;
        for (const auto& item : items) {
            cout << "ID: " << item.id << ", Name: " << item.name << ", Quantity: " << item.quantity <<endl;
        }
    }

    void searchItemById(int id) {
        auto it = find_if(items.begin(), items.end(), [id](const Item& item) {
            return item.id == id;
        });

        if (it != items.end()) {
            cout << "Item found: ID: " << it->id << ", Name: " << it->name << ", Quantity: " << it->quantity << endl;
        } else {
            cout << "Item with ID " << id << " not found." << endl;
        }
    }

    void searchItemByName(string name) {
        auto it = find_if(items.begin(), items.end(), [name](const Item& item) {
            return item.name == name;
        });

        if (it != items.end()) {
            cout << "Item found: ID: " << it->id << ", Name: " << it->name << ", Quantity: " << it->quantity << std::endl;
        } else {
            cout << "Item with name " << name << " not found." << endl;
        }
    }
};

int main() {
    Inventory inventory;
    int choice, id, quantity;
    string name;

    while (true) {
        cout << "1. Add Item\n2. Display Items\n3. Search Item by ID\n4. Search Item by Name\n5. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter item ID: ";
            cin >> id;
            cout << "Enter item name: ";
            cin >> name;
            cout << "Enter item quantity: ";
            cin >> quantity;
            inventory.addItem(id, name, quantity);
            break;
        case 2:
            inventory.displayItems();
            break;
        case 3:
            cout << "Enter item ID: ";
            cin >> id;
            inventory.searchItemById(id);
            break;
        case 4:
            cout << "Enter item name: ";
            cin >> name;
            inventory.searchItemByName(name);
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
