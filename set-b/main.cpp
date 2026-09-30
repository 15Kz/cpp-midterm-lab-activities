#include <iostream>

int main() {

    int choice;
    int hours = 0;
    int rate = 0;
    int basePrice = 0;

    do {
        std::cout << "[1] Regular PC (Rate: 20)" << std::endl;
        std::cout << "[2] VIP PC (rate: 35)" << std::endl;
        std::cout << "[3] Gaming PC (Rate: 50)" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch(choice) {

            case 1:
                rate = 20;
                break;
            case 2:
                rate = 35;
                break;
            case 3:
                rate = 50;
                
        }

        std::cout << "How many hours?: ";
        std::cin >> hours;

        basePrice = rate * hours;

        if(hours >= 5) {
            basePrice -= 20;
            std::cout << "Discount Deduction (20 deduction)" << std::endl;
            std::cout << "Total: "<< basePrice << std::endl;
        }

        else {
            std::cout << "Final Amount to be paid: "<< basePrice << std::endl;
        }

        std::cout << "Do you want to try again?: (1 for Yes, 0 for No: )";
        std::cin >> choice;
    
    } while (choice == 1);

}
