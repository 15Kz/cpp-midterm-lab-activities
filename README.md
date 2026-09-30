# C++ Midterm Lab Activities

Three console programs written in C++ for my midterm lab activity in a
BS IT course. Each set simulates a small business transaction: the user picks
an item from a menu, the program computes the cost, handles payment, and
offers to process another customer.

## Sets

| Set | Program | Summary |
|-----|---------|---------|
| A | Fast-Food POS | Choose an item, enter quantity, pay cash, and get change or a cancelled transaction |
| B | PC Rental Billing | Choose a PC type, enter hours, and get a discount for long sessions |
| C | Gym Membership Billing | Choose a pass, optionally add a personal trainer, pay, and get change or be denied access |

### Set A: Fast-Food POS
- Items: Burger (100), Chicken (150), Spaghetti (120)
- Total = price x quantity
- Enough payment: shows change and confirms the transaction
- Not enough: transaction cancelled

### Set B: PC Rental Billing
- PC types: Regular (20/hr), VIP (35/hr), Gaming (50/hr)
- Total = rate x hours
- 20 deduction for rentals of 5 hours or more
- Shows the final amount to be paid

### Set C: Gym Membership Billing
- Memberships: Day Pass (100), Weekly Pass (400), Monthly Pass (1200)
- Optional Personal Trainer add-on (500)
- Shows the total cost, then asks for payment
- Enough payment: shows change and welcomes the customer
- Not enough: access denied

## Concepts practiced
- `do-while` loops for repeating transactions
- `switch` statements for menu selection
- `if`/`else` for conditions such as discounts and payment checks
- Arithmetic and compound assignment
- Basic console input/output with `std::cin` and `std::cout`

## How to run
Compile any set with g++ and run it:

g++ set-a/main.cpp -o set_a
./set_a

## Folder structure
cpp-midterm-lab-activities/
├── README.md
├── set-a/main.cpp   (Fast-Food POS)
├── set-b/main.cpp   (PC Rental Billing)
└── set-c/main.cpp   (Gym Membership Billing)

## Notes
These are beginner programs, written to practice the fundamentals.
Input validation and error handling are kept simple on purpose.
