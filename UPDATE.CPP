#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

const int MAX_PRODUCTS = 100;
int productIDs[MAX_PRODUCTS];
string productNames[MAX_PRODUCTS];
string productCategories[MAX_PRODUCTS];
double productPrices[MAX_PRODUCTS];
int productQuantities[MAX_PRODUCTS];
int productCount = 0;



// function to update a product
void updateProduct(int id, string name, string category, double price, int quantity) {
    for (int i = 0; i < productCount; i++) {
        if (productIDs[i] == id) {
            productNames[i] = name;
            productCategories[i] = category;
            productPrices[i] = price;
            productQuantities[i] = quantity;
            cout << "Product updated successfully." << endl;
            return;
        }
    }
    cout << "ID does not exist." << endl;
}
int main() {
 char choice;
 do{
  cout << "4. Update a product" << endl;
   cin >> choice;

  switch (choice) {

   case '4': {
            int id, quantity;
            string name, category;
            double price;
            cout << "Enter ID to update: ";
            cin >> id;
            cout << "Enter new Name: ";
            cin >> name;
            cout << "Enter new Category: ";
            cin >> category;
            cout << "Enter new Price: ";
            cin >> price;
            cout << "Enter new Quantity: ";
            cin >> quantity;
            updateProduct(id, name, category, price, quantity);
            break;
        }
}}
}
