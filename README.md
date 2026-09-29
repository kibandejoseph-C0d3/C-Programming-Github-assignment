# C-Programming-Github-assignment
A series of C programs applying key concepts such as user input, calculation, loops and decisions.
## Exercise 1 – Basic Output

Source: Deitel & Deitel, C How to Program, 9th Edition,Chapter 2, Exercise 2.9a  

What the program does: The program simply displays "Have a nice day."

Concept used: printf() 

How it works: The program calls printf() once with a string ending in \n to print the message and move the cursor to a new line.

## Exercise 2 – Input-Process-Output
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.16 (Arithmetic) 

What the program does: The program takes two whole numbers from the user and shows the results of adding, subtracting, multiplying, and dividing them, including the leftover remainder. 

Concept used: variables, scanf(), arithmetic 

How it works: The program reads two integers with scanf(), then uses arithmetic operators to compute and printf() the sum, product, difference, quotient, and remainder.

## Exercise 3 – Decision

Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.18 (Comparing Values) 

What the program does: The program compares a country's current-year rainfall to its highest recorded rainfall and reports whether a new record was set. 

Concept used: if statement 

How it works: The program reads the current rainfall, uses a single if to check whether it exceeds the stored highest rainfall, and updates and prints a message when it does.

## Exercise 4 – Basic Loop

Source:  Deitel & Deitel, C How to Program, 9th Edition,Chapter 4, Exercise 4.7a 

What the program does: The program prints several sequences of numbers (e.g., 1, 3, 5, 7, 9, 11, 13).

Concept used: for loop 

How it works: A for loop initializes a control variable, tests a condition on each pass, and increments or decrements the variable to print each value in the sequence.

## Exercise 5 – Loop with Calculation

Source:  Deitel & Deitel, C How to Program, 9th Edition,Chapter 3, Exercise 3.24 (Tabular Output)

What the program does: The program prints a table of N, N², N³, and N⁴ for N from 1 to 10. 

Concept used: loop + arithmetic

How it works: A for loop counts N from 1 to 10 and on each iteration computes and prints N, N², N³, and N⁴ using multiplication.

## Exercise 6 – Loop with User Input

Source:  Deitel & Deitel, C How to Program, 9th Edition,Chapter 4, Exercise 4.9 (Sum and Average of Integers) 

What the program does: The program reads a count value followed by that many integers, then displays their sum and average. 

Concept used: loop + scanf() 

How it works: The program reads a count value, then loops that many times reading a number with scanf() each time, adding it to a running total, and finally dividing by the count to print the average.

##  Exercise 7 – Loop with Decision

Source: Deitel & Deitel, C How to Program, 9th Edition,Chapter 3, Exercise 3.26 (Find the Two Largest Numbers) 

What the program does: The program reads 10 numbers from the user and determines the two largest values among them. 

Concept used: loop + if/else + counters 

How it works: The program loops through 10 input numbers, using if comparisons each iteration to keep track of the largest and second-largest values seen so far.

## Exercise 8 – Interactive Console Program

Source:  Deitel & Deitel, C How to Program, 9th Edition,Chapter 3, Exercise 3.20 (Salary Calculator) 

What the program does: The program repeatedly asks for hours worked and hourly rate, calculating each employee's pay (with overtime), until the user enters -1 to stop. 

Concept used: sentinel-controlled loop + if/else + scanf() 

How it works: A while loop keeps prompting for hours worked and rate until the sentinel value -1 is entered, using an if statement each iteration to calculate regular pay or overtime pay.












