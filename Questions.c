
#include "Questions.h"

//test each on online compiler

int Q1_for(){
	int sum=0; //start sum at 0
	
	// calculate your sum below..this has to use for loop
	
	int num; //initiate variable "num"
	
	for (num = 30; num <= 1000; num++) { //"num" runs from 30-1000 to check for multiples of 4
		if (num % 4 == 0) { //check the remainder after dividing "num" by 4
			sum = sum + num ; //add all multiples of 4
		}
	}
	
	// here, we return the calculated sum:
	return sum;
}

int Q1_while(){
	int sum=0; //start sum at 0

	// calculate your sum below..this has to use while loop
	
	int num = 30; //initiate variable "num"

	while (num <= 1000) { //"num" runs from 30 and stops at 1000 to check for multiples of 4
		if (num % 4 == 0) { //check the remainder after dividing "num" by 4
			sum = sum + num ; //add all multiples of 4
		}
		num = num + 1 ; //add 1 to check the next "num"
	}
	
	// here, we return the calculated sum:
	return sum;
}

int Q1_do(){
	int sum=0; //start sum at 0
	
	// calculate your sum below..this has to use do-while loop
	
	int num = 30; //initiate variable "num"

	do {
		if (num % 4 == 0) { //check the remainder after dividing "num" by 4
			sum = sum + num ; //add all multiples of 4
		}
		num = num + 1 ;
	} while (num <= 1000); //"num" runs from 30-1000 to check for multiples of 4
	
	// here, we return the calculated sum:
	return sum;
}

//===============================================================================================
int Q2(int Q2_input){
	
	// this is the flag that is holding whether the input number is 5-digit or not
	int IsFiveDigit;
	
	// Do your coding below to check
	
	int Digits = 0; //variable "digits" is a placeholder for the number of digits in the input #

	while (Q2_input != 0) { //NOT! is a logical operator
		Q2_input = Q2_input/10 ; //divide the input by 10 as many times as necessary to get the number of digits
		Digits = Digits + 1 ; //add a digit for each division by 10
	}

	if (Digits == 5) { //if digits is equal to 5, confirm that the input was five digits
		IsFiveDigit = 1 ;
	}

	else {
		IsFiveDigit = 0 ;
	}
	
	//finally, we must return IsFiveDigit, which must be 1 is the number is five digits and 0 otherwise
	return IsFiveDigit;
}

//===============================================================================================
int Q3(float Q3_input){
	
	/* Question 3: 
	Write a program that takes a student's Q3_input as an input, which is a floating point value,
	and returns:
	4 if the Q3_input is in the range 90-100,
	3 if it is in the range 80-89, 
	2 if it is in the range 70-79,
	1 if it is in the range 60-69 and
	0 if the Q3_input is between 0 and 59.
	If the Q3_input is not in the range 0-100, the program should return -1
*/	
	// this is the variable that holds the out value to return
	float GPA;
	
	
	// Do your coding below to calculate the GPA variable value
	
	if (Q3_input >= 90 && Q3_input <= 100) { //range between 90-100 is GPA of 4
		GPA = 4 ;
	}
	 
	else if (Q3_input >= 80 && Q3_input < 90) { //range between 80-90 is GPA of 3
		GPA = 3 ;
	}

	else if (Q3_input >= 70 && Q3_input < 80) { //range between 70-80 is GPA of 2
		GPA = 2 ;
	}

	else if (Q3_input >= 60 && Q3_input < 70) { //range between 60-70 is GPA of 1
		GPA = 1 ;
	}

	else if (Q3_input >= 0 && Q3_input < 60) { //range between 0-60 is GPA of 0
		GPA = 0 ;
	}
	
	else { //anything outside of 0 and 100 is an invalid GPA
		GPA = -1 ;
	}
	
	// finally, we return the GPA
	return GPA;	
}

//===============================================================================================
double Q4(int Q4_input){// STILL NEED TO DO
	
	// this is the variable that holds the pi value to return
	double pi=0;
	float denom1, denom2; //denom1 and denom2 are the denominators for the terms of the infinite series
	float ToAdd, ToSubtract;
	
	// Do your coding below to calculate the pi value
	
	for (denom1=1; denom1<(2*Q4_input); denom1=denom1+4) { //every other term in the series is added; the denominator of each added term increases by 4 each time; the maximum denominator value is always one integer less that two times the term number
		ToAdd = 4.0/denom1 ; //term that will be added to the "pi" variable
		pi = pi + ToAdd ;
	}
	for (denom2=3; denom2<(2*Q4_input); denom2=denom2+4) { //every other term in the series is subtracted; the denominator of each subtracted term increases by 4 each time; the maximum denominator value is always one integer less that two times the term number
		ToSubtract = 4.0/denom2 ; //term that will be subtracted from the "pi" variable
		pi = pi - ToSubtract ;
	}
	

	// finally, we return the pi value
	return pi;	
}
//===============================================================================================
int Q5(){
	
	// this is the variable that holds and the total number of triples to return at the end of the function
	int totNumTribles=0;
	
	/* Do your coding below
		Use a triple-nested for loop that simply tries all possibilities
		and update the total number of triples if needed
	*/

	int side1, side2, hypotenuse; // initiating all side of the triangle
	for (hypotenuse=1; hypotenuse<=400; hypotenuse++) { //hypotenuse is between 1 and 400
		for (side1=1; side1<=400; side1++) { //side1 is between 1 and 400

			for (side2=side1; side2<=400; side2++) { //starting at the value of side 1 ensures that side 2 is greater than or equal to side 1; goes up to 400

				if (hypotenuse*hypotenuse == side1*side1 + side2*side2) { //checking if the variables meet pythagoreous theorem requirement
					totNumTribles = totNumTribles + 1 ; //if the variables meet the requirement, the total number of pythagorean triples increase by 1
				}
			}
		}
	}
	
	//finally you should return the total number of triples.
	return totNumTribles;
}


//===============================================================================================
int Q6(int Q6_input, int perfect[]){
	
	
	
		//counts is the variable that should hold the total number of found perfect numbers
		//you should update it within your code and return it at the end
	    int counts=0;


		/*
		*
		*perfect is an array that you need to add into it any perfect number you find
		*which means at the end of this function, the perfect[] array should hold all the found perfect numbers in the range
		*you do not need to return perfect because as stated in lectures arrays are already passed by reference. so, modifying them will 
		*automatically reflect in the main calling function.
		*/
	    
		int num;
		int PotFactor; //variable for potential factors
		int sum;
		
		for (num = 2; num <= Q6_input; num++) { // start at 2 because 1 cannot be a perfect #

			sum = 0 ; //restart sum for the next for loop

			for (PotFactor = 1; PotFactor < num; PotFactor++) { //potential factors of "num" start at 1 and go up to one less than "num"

				if (num % PotFactor == 0) { //if "PotFactor" is a factor of "num", add to variable "sum"
					sum = sum + PotFactor ;
				}
			}

			if (sum == num) { //if the sum of all factors add up to the number itself, it is a perfect number
				counts = counts + 1 ; //add one to count if "num" is a perfect number
				perfect[(counts-1)] = num ; //the index of an array starts at 0, so it must be one less than the "counts" value
			}
		}
		
		return counts;
}

//===============================================================================================
int Q7a(int Q7_input){
	
	//this is the variable that holds the reversed int.
	int reversedInt=0;
	
	
	// Do your coding logic here
	//Hint: Use the division and remainder operators to separate the number into its individual digits.
	//in this part you can assume the knowledge of the number of digits: seven-digit positive integer
	
	int remainder; //initialize "remainder" variable
	int i; //initialize "i" for number of iterations
	
	for (i=0; i<7; i++) { //"i" iterates code block that divides the input by 10, 7 times, to check if the input is 7 digits
		remainder = Q7_input % 10 ;
		reversedInt = remainder + reversedInt*10 ;
		Q7_input = Q7_input / 10 ;
	}

	return reversedInt;
	
}


int Q7b(int Q7b_input){
	
	//this is the variable that holds the reversed int.
	int reversedInt=0;
	
	// Do your coding logic here
	//Hint: Use the division and remainder operators to separate the number into its individual digits.
	//this part should be generalized for any number of allowed digits
	
	int remainder;
	
	while (Q7b_input != 0) { //compute code block while the input (which is modified) is not rounded to 0
		remainder = Q7b_input % 10 ; //compute the remainder when the input (which is modified) is divided by 10
		reversedInt = remainder + reversedInt*10 ; //creates the reverse integer; multiply "reversedInt" by 10 because it increases by one place-value each time
		Q7b_input = Q7b_input / 10 ; //divide input by 10 to iterate through each digit
	}
	
	return reversedInt;
}


