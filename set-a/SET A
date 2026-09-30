#include <iostream>

int main() {

    int choice;
    int price = 0;
    int totalCost = 0;
    int payment = 0;

    do {
        std::cout << "[1] Day Pass (Price: 100)" << std::endl;
        std::cout << "[2] Weekly Pass (Price: 400)" << std::endl;
        std::cout << "[3] Monthly Pass (Price: 1200)" << std::endl;
        std::cout << "Select Membership (1-3): ";
        std::cin >> choice;

        switch(choice) {

            case 1:
                price = 100;
                break;
            case 2:
                price = 400;
                break;
            case 3:
                price = 1200;
                break;

        }

        std::cout << "Add a Personal Trainer for 500? (1 for Yes, 0 for No): ";
        std::cin >> choice;

        if (choice == 1) {  
            std::cout << "Total Cost: " << (price += Trainer) << std::endl;
        }
        else {
            std::cout << "Total Cost: " << price << std::endl;
        }

        std::cout << "Enter Payment: ";
        std::cin >> payment;

        if (payment < price) {
            std::cout << "Error: Not enough cash. Access Denied." << std::endl;
        }
        else {
            std::cout << "Change: " << payment - price << std::endl;
            std::cout << "Welcome to the Gym!" << std::endl;
        }

        std::cout << "Process another customer? (1 for Yes, 0 for No): ";
        std:: cin >> choice;

    }
    while (choice == 1);
    

}
