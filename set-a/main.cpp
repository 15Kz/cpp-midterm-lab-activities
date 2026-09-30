#include <iostream>


int main() {

    int choice, quantity, payment;

    do {

        std::cout << "*** FAST-FOOD POS ***" << std::endl;
        std::cout << "[1] Burger (Price: 100)\n[2] Chicken (Price: 150)\n[3] Spaghetti (Price: 120)" << std::endl;
        std::cout << "Select item (1-3): ";
        std::cin >> choice;



        switch  (choice) {
            case 1:
             choice = 100;
                break;
            case 2:
             choice = 150;
                break;
            case 3:
             choice = 120;
                break;
        }

        std::cout << "Enter Quantity: ";
        std::cin >> quantity;

        int total = choice * quantity;

        std::cout << "Total: " << total << std::endl;
        std::cout << "Enter cash payment: ";
        std::cin >> payment;

        if (payment < total) {
            std::cout << "Insufficient funds.";
            std::cout << "Transaction Cancelled";
            return 0;
        }
        else {
            std::cout << "Change: " << payment - total << std::endl;
            std::cout << "Transaction Successful.";
        }

        std::cout << "Do you want to try again? (1 for yes, 0 for no): ";
        std::cin >> choice;
    }
    while (choice == 1);

    return 0;


}
