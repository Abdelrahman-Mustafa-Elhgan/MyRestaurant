#include <iostream>
#include <iomanip>
using namespace std;


int main()
{

    int choice, qty;
    float subtotal = 0;
    float total = 0;
    char more;
    string paymentMethod;
    char deliveryChoice;
    bool delivery = false;

    float burgerPrice = 50.0, pizzaPrice = 80.0, friesPrice = 25.0, drinkPrice = 15.0;

    int burgerQty = 0, pizzaQty = 0, friesQty = 0, drinkQty = 0;
    float burgerTotal = 0, pizzaTotal = 0, friesTotal = 0, drinkTotal = 0;

    do {
        cout << "\n========== 🧾 MENU ==========\n";
        cout << "1.Burger .......... " << burgerPrice << " EGP\n";
        cout << "2.Pizza ........... " << pizzaPrice << " EGP\n";
        cout << "3.Fries ........... " << friesPrice << " EGP\n";
        cout << "4.Drink ........... " << drinkPrice << " EGP\n";
        cout << "=============================\n";

        cout << "Enter item number: ";
        cin >> choice;

        cout << "Enter quantity: ";
        cin >> qty;

        switch (choice) {
            case 1:
                burgerQty += qty;
                burgerTotal += burgerPrice * qty;
                break;
            case 2:
                pizzaQty += qty;
                pizzaTotal += pizzaPrice * qty;
                break;
            case 3:
                friesQty += qty;
                friesTotal += friesPrice * qty;
                break;
            case 4:
                drinkQty += qty;
                drinkTotal += drinkPrice * qty;
                break;
            default:
                cout << "Invalid choice!\n";
        }

        cout << "Do you want to order more? (y/n): ";
        cin >> more;

    } while (more == 'y' || more == 'Y');

    if (burgerQty > 3) burgerTotal *= 0.90;
    if (pizzaQty > 3) pizzaTotal *= 0.90;
    if (friesQty > 3) friesTotal *= 0.90;
    if (drinkQty > 3) drinkTotal *= 0.90;

    
    subtotal = burgerTotal + pizzaTotal + friesTotal + drinkTotal;
    float tax = subtotal * 0.14;
    float deliveryFee = 0;

    
    cout << "\nDo you want delivery? (y/n): ";
    cin >> deliveryChoice;
    if (deliveryChoice == 'y' || deliveryChoice == 'Y') {
        delivery = true;
        deliveryFee = 20.0;
    }

    total = subtotal + tax + deliveryFee;

    cout << "Choose payment method (cash/card): ";
    cin >> paymentMethod;

    cout << "\n========== 🧾 BILL ==========\n";
    cout << fixed << setprecision(2);

    if (burgerQty > 0)
        cout << "Burger x" << burgerQty << " ......... " << burgerTotal << " EGP\n";
    if (pizzaQty > 0)
        cout << "Pizza x" << pizzaQty << " .......... " << pizzaTotal << " EGP\n";
    if (friesQty > 0)
        cout << "Fries x" << friesQty << " .......... " << friesTotal << " EGP\n";
    if (drinkQty > 0)
        cout << "Drink x" << drinkQty << " .......... " << drinkTotal << " EGP\n";

    cout << "-----------------------------\n";
    cout << "Subtotal: ............. " << subtotal << " EGP\n";
    cout << "Tax (14%): ............ " << tax << " EGP\n";

    if (delivery)
        cout << "Delivery Fee: ......... " << deliveryFee << " EGP\n";

    cout << "-----------------------------\n";
    cout << "Total: ................ " << total << " EGP\n";
    cout << "Payment Method: ....... " << paymentMethod << endl;
    cout << "=============================\n";
    cout << "Thank you! Enjoy your meal \n";

    return 0;




}




	
	