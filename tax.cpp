// Copyright (c) 2022 Spencer Scarlett All rights reserved.
// .
// Created by: Spencer Scarlett
// Date: Oct 3, 2022
//  A program to calculate total of a sale for Manitoba

#include <iomanip>
#include <iostream>

int main() {
    float Provtax = 0.12, subtotal, tax, total;

    // Obtain user subtotal
    std::cout << "What is the cost of the item?: $ \n>> $";

    // Calculate the tax with the subtotal
    std::cin >> subtotal;
    tax = subtotal * Provtax;
    total = subtotal + tax;

    // Prints the tax cost and the sales tax.
    std::cout << "\n";
    std::cout << "Added tax to item $";
    std::cout << std::fixed << std::setprecision(2)
              << std::setfill('0') << tax << std::endl;

    // Display end result of tax cost
    std::cout << "\n";
    std::cout << "The total cost of the order is $";
    std::cout << std::fixed << std::setprecision(2)
    << std::setfill('0') << total << std::endl;
}
