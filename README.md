# PC Rental Billing (C++)

A console program that computes the fee for renting a computer by the hour.
Originally a midterm lab activity (Set B) in a BS IT course.

## What it does
- Shows a menu of PC types with hourly rates:
  - Regular PC: 20 per hour
  - VIP PC: 35 per hour
  - Gaming PC: 50 per hour
- Asks for the number of hours and computes the total (rate x hours)
- Applies a 20 deduction when the customer rents for 5 hours or more
- Displays the final amount to be paid
- Asks whether to run another transaction (1 for yes, 0 for no)

## Concepts practiced
`do-while` loop, `switch`, `if`/`else`, arithmetic, and basic console input/output.

## How to run
g++ main.cpp -o pc_rental
./pc_rental
