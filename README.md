# EXPERIMENT - 03

* Aim: To study and implement Operators in C++
  
* Tools Used - IDE, Arithmetic operators, assignment operators, relational operators, logical operators.

* Theory:

In C++, operators are special symbols that perform specific operations on variables and values. They are essential for executing arithmetic calculations, comparing values, assigning data, and manipulating bits or logical conditions. Operators help define the logic and flow of a program by enabling developers to interact with data in meaningful ways. Understanding the various types of operators is crucial for writing efficient and functional C++ programs. They are categorized based on the type of operation they perform, such as arithmetic, relational, logical, assignment, and more.

🔹 Types of Operators in C++:

1. *Arithmetic Operators*:
   Used to perform basic mathematical operations:

 +(Addition), - (Subtraction), * (Multiplication), / (Division), % (Modulus)
🔸 Example: int sum = a + b;

2. *Relational (Comparison) Operators*:
   Used to compare two values:

 ==, !=, >, <, >=, <=
🔸 Example: if (a > b)

3. *Logical Operators*:
Used to combine multiple conditions:

 && (AND), || (OR), ! (NOT)
🔸 Example: if (a > 0 && b > 0)

4. *Assignment Operators*:
Used to assign values to variables:

 =, +=, -=, *=, /=, %=
🔸 Example: a += 5;


# Grade Calculation Based on Average Marks

This C++ program calculates the average marks of a student in three subjects—English, Maths, and Science—and assigns a grade based on the average. It uses input/output statements, arithmetic operations, and conditional (if-else) logic to determine the performance category of the student.

*ALGORITHM:*

1> Start

2> Declare three integer variables: english, maths, science

3> Take input for all three subjects using cin

4> Calculate average: avg = (english + maths + science) / 3

5>Use if-else to check the average and display the grade:

   * If avg > 90, print "A+"

   * Else if avg >= 80, print "A"

   * Else if avg >= 70, print "B"

   * Else if avg >= 60, print "C"

   * Else if avg >= 50, print "D"

   * Else, print "The student has failed"

6> End

# Find the quadrant of a point

This C++ program determines the position of a point in the Cartesian plane based on its x and y coordinates. By using conditional statements (if-else), the program checks whether the point lies in a particular quadrant, on the axes, or at the origin. This helps reinforce concepts of coordinate geometry and logical branching in programming.

*ALGORITHM:*

1> Start

2> Declare two variables: x, y

3> Take input for x and y coordinates using cin

4> Use if-else conditions to check and display the point’s location:

  * If x > 0 && y > 0, print "The point is in I Quadrant."

  * Else if x < 0 && y > 0, print "The point is in II Quadrant."

  * Else if x < 0 && y < 0, print "The point is in III Quadrant."

  * Else if x > 0 && y < 0, print "The point is in IV Quadrant."

  * Else if x == 0 && y == 0, print "The point lies on the centre."

  * Else if y == 0, print "The point lies on the x axis."

  * Else, print "The point lies on the y axis."

5> End




* Conclusion:

In this experiment, we explored different types of operators in C++, including arithmetic, relational and logical, assignment. We understood how these operators are used to perform various operations on variables. By writing and executing programs, we observed the behavior and precedence of each operator. This experiment strengthened our understanding of expression evaluation in C++.



