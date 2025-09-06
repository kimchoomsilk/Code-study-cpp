#include <iostream>  
#include <string>  
#include <vector>  
using namespace std;  

struct Item {  
   string name;  
   int amount;  
   double price;  
};  

vector<Item> inventory;  

void AddProduct(const string& name, int amount, double price) {  
   Item newItem = {name, amount, price};  
   inventory.push_back(newItem);  
   cout << "Product added successfully!" << endl;  
}  
void ChangeStock() {

}
int main() {  
   int option;  
   string name;  
   int amount;  
   double price;  
   while (true) {
       cout << "1. Add product\n2. Edit stock\n3. Search product\n4. Total value\n5. See all stock\n0. quit\n";
       cout << "select an option: ";
       cin >> option;

       switch (option) {
       case 0:
           return 0;
       case 1:
           cout << "Enter product name: ";
           cin >> name;
           cout << "Enter product amount: ";
           cin >> amount;
           cout << "Enter product price: ";
           cin >> price;
           AddProduct(name, amount, price);
           break;
       case 2:
		   ChangeStock();
       default:
           cout << "Invalid option!" << endl;
       }
   }
   return 0;  
}