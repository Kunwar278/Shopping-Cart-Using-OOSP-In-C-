Name: Kunwar Rudra 
Roll number: 241030291
Batch: 24i13
 🛒 Shopping Cart System in C++ (OOP)
📌 Overview

This project is a simple Shopping Cart application implemented in C++ using Object-Oriented Programming concepts.
It allows users to:

Add item prices to a cart

Remove the last added item

View all items and the total cost

Exit the program

The project demonstrates class creation, data encapsulation, arrays, constructors, and menu-driven programming.

🧩 Features

Add Item: Accepts a float price and stores it in the cart

Remove Item: Removes the most recently added item

Show Cart: Displays all stored prices and calculates the total

Fixed-size Cart: Stores up to 50 items in an array

Interactive Menu: User-friendly text-based interface

🏗️ Class Structure
Class: Cart
Member	Type	Description
float arr[50]	Array	Stores item prices
int n	Integer	Tracks number of items
Cart()	Constructor	Initializes cart with n = 0
addItem(float price)	Method	Adds item price to cart
removeItem()	Method	Removes last item (LIFO style)
show()	Method	Displays all items and total
📜 How It Works

The program repeatedly shows a menu using a do–while loop.

User chooses an option (Add / Remove / Show / Exit).


The appropriate method of the Cart object is executed.

Program ends when the user selects 4. Exit.

🧠 Concepts Used

Classes & Objects

Data Members & Member Functions

Constructors

Arrays

Loops & Conditional Statements

Menu-driven console interfaces

📌 Limitations (Optional)

Maximum of 50 items (fixed array size)

No validation for negative prices

Items cannot be removed from specific positions (only last item)

🚀 Future Enhancements (Optional)

Use dynamic arrays or vector<float>

Add item names instead of only prices

Allow removing items by index

Add file saving/loading support
