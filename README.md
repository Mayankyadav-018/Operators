Aim: To study and implement Operators in C++
Theory:
Operators in C++
Arithmetic Operators
Operator	Description	Example
+	Adds two operands	A + B will give 30
-	Subtracts second operand from the first	A - B will give -10
*	Multiplies both operands	A * B will give 200
/	Divides numerator by de-numerator	B / A will give 2
%	Modulus Operator and remainder of after an integer division	B % A will give 0
++	Increment operator, increases integer value by one	A++ will give 11
--	Decrement operator, decreases integer value by one	A-- will give 9
Relational Operators
Operator	Description	Example
==	Checks if the values of two operands are equal or not, if yes then condition becomes true.	(A == B) is not true.
!=	Checks if the values of two operands are equal or not, if values are not equal then condition becomes true.	(A != B) is true.
>	Checks if the value of left operand is greater than the value of right operand, if yes then condition becomes true.	(A > B) is not true.
<	Checks if the value of left operand is less than the value of right operand, if yes then condition becomes true.	(A < B) is true.
>=	Checks if the value of left operand is greater than or equal to the value of right operand, if yes then condition becomes true.	(A >= B) is not true.
<=	Checks if the value of left operand is less than or equal to the value of right operand, if yes then condition becomes true.	(A <= B) is true.
Logical Operators
Operator	Description	Example
&&	Called Logical AND operator. If both the operands are non-zero, then condition becomes true.	(A && B) is false.
||	Called Logical OR Operator. If any of the two operands is non-zero, then condition becomes true.	(A || B) is true.
!	Called Logical NOT Operator. Use to reverses the logical state of its operand. If a condition is true, then Logical NOT operator will make false.	!(A && B) is true.

Algorithm: Grade Calculation Based on Average Marks
Start

Declare three integer variables: english, maths, and science.

Input marks:
3.1 Prompt the user to enter marks for English and store them in english.
3.2 Prompt the user to enter marks for Maths and store them in maths.
3.3 Prompt the user to enter marks for Science and store them in science.

Calculate average:
4.1 Use the formula: avg = (english + maths + science) / 3.

Determine and display grade:
5.1 If avg > 90, print "A+".
5.2 Else if avg >= 80, print "A".
5.3 Else if avg >= 70, print "B".
5.4 Else if avg >= 60, print "C".
5.5 Else if avg >= 50, print "D".
5.6 Else, print "The student has failed".

End

Algorithm: Determine the Position of a Point in Cartesian Plane
Start

Declare two float variables: x and y.

Input coordinates:
3.1 Prompt the user to enter the x-coordinate and store it in x.
3.2 Prompt the user to enter the y-coordinate and store it in y.

Check the position of the point using conditions:
4.1 If x > 0 and y > 0, print "The point is in I Quadrant."
4.2 Else if x < 0 and y > 0, print "The point is in II Quadrant."
4.3 Else if x < 0 and y < 0, print "The point is in III Quadrant."
4.4 Else if x > 0 and y < 0, print "The point is in IV Quadrant."
4.5 Else if x == 0 and y == 0, print "The point lies on the centre."
4.6 Else if y == 0, print "The point lies on the x axis."
4.7 Else, print "The point lies on the y axis."

End



Conclusion:
In this experiment, we explored different types of operators in C++, including arithmetic, relational, logical, assignment, and increment/decrement operators. We understood how these operators are used to perform various operations on variables. By writing and executing programs, we observed the behavior and precedence of each operator. This experiment strengthened our understanding of expression evaluation in C++.



