# CS 100 Programming Project
# Coding Language: C++
# Platform: Linux
# Group Member:
Cuong Thi - cthi001@ucr.edu
Raymond Booth - rboot005@ucr.edu
Vivian Tsai - vtsai006@ucr.edu
# Application: Calculator

# Why we are doing it:
  Calculation using software and terminal command is fine when we are the developer.
  It is important to have proper presentation for all user so everyone can use the application
to its full potential.
  Also, we think about adding more feature that would work better for other job field, such as list operations.Also, we think about adding more feature that would work better for discrete-structure focuses, such as list operations and inclusion-exclusion.
# Language:
  We will use C++ to write our program
  If UI is required. we will use wxWidget to help us create our UI(if allowed)
# Input/Output
  Input/Output will be pretty much similar to a normal calculator.
  It could be different if we are to add the discrete-math operation.

# PATTERN DIAGRAM
![alt tex](https://github.com/cs100/final-project-honda-crv/blob/master/Scan_May_15_2020-1.png)
![a;t text](https://github.com/cs100/final-project-honda-crv/blob/master/Scan_May_15_2020-2.png)

# GOAL
  The goal of this project is to design a UI calculator that would express our understanding in the design patterns: composition, strategy, and factory pattern. 

# Design Patterns
  The three design patterns are composition, strategy, and factory.

  Composition is used for our operator such as add, subtract, minus, sin , cos, absolute,...etc in a way that they are subclasses of our base class. 

  Strategy is used for the Construct class, which handles the construction of the composition class. The purpose of this strategy is to switch between the construction of operator required 3 inputs(+, -, /, ..) and operator required 1 inputs (sin, cos, tan, absolute,square root,...).

  Factory pattern is used to enable changes toward the platform of the calculator. The users can choose which calculator they want to use and are able to switch between them. In this case would be a standard calculator and a scientific calculator.

# UI
  The UI provided by the program displays all inputs from the user.
![alt tex](https://github.com/cs100/final-project-honda-crv/blob/master/UI.jpg)
# Final Input/Output
  The calculator will take a single input at a time each input ends with a valid operator boolean defined for each type of calculator. 

  For example, an input sequence for a number would be  “1”, “2”, “.”, “3”, “+”, “2”, “=/...” This would yield the result for “12.3 + 2” which is 14.3. 

![alt tex](https://github.com/cs100/final-project-honda-crv/blob/master/111.jpg)

  However the last input can replace with any other triple input operator to continue the chain of calculation such as: “1”, “2”, “.”, “3”, “+”, “2”, “-”, “5”, “/”, “2”. On the input of “-”, the calculator will evaluate the input of the previous 3 input sequence and then take the next number input to the next sequence, in this case it would be “14.3  -  2 +  . . .”

![alt tex](https://github.com/cs100/final-project-honda-crv/blob/master/222.png)

  The user will have the option to “BACKSPACE”  and remove a digit in the number sequence. Or “CLEAR” to completely delete the sequence and return to the initial input state.

They will also have the option to switch between the mode of the calculator from “RADIAN” to “DEGREE” if the calculator is set on “SCIENTIFIC/STF”.

![alt tex](https://github.com/cs100/final-project-honda-crv/blob/master/333.png)

  Any inputs that are not defined in the boolean of the calculators will be ignored. Any inputs of calculation that yield an invalid result such as  “2 / 0” will return “MATH ERROR”.

  Number with more than 15 digits, excluding decimal points, will be omitted and the calculator will output "CALCULATION ERROR" or "0".

# Google Testing
  Due to round-off errors, it is very unlikely that two floating-points will match exactly and EXPECT_EQ usually doesn't work. It's better to compare by a fixed relative error bound. Therefore, We used the following googletest for floating-point comparison.

EXPECT_FLOAT_EQ(val1, val2);	
EXPECT_DOUBLE_EQ(val1, val2);

![alt tex](https://github.com/cs100/final-project-honda-crv/blob/master/444.png)


  We have tested all the implemented functions and we have various combination tests. 

![alt tex](https://github.com/cs100/final-project-honda-crv/blob/master/33.png)
