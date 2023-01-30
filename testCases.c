#include <assert.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "CuTest.h"
#include "Questions.h"
    

    
//=========Question 1==================================
    void TestQ1_for(CuTest *tc) {

        int actual = Q1_for();
        int expected = 125388;
        CuAssertIntEquals(tc, expected, actual);
    }
    void TestQ1_while(CuTest *tc) {

        int actual = Q1_while();
        int expected = 125388;
        CuAssertIntEquals(tc, expected, actual);
    }
    void TestQ1_do(CuTest *tc) {

        int actual = Q1_do();
        int expected = 125388;
        CuAssertIntEquals(tc, expected, actual);
    }
//===========================================================
//=================Question 2================================
    void TestQ2_true(CuTest *tc) {

	int input = 23452;
        int actual = Q2(input);
        int expected = 1;
        CuAssertIntEquals(tc, expected, actual);
    }
    void TestQ2_false(CuTest *tc) {

	int input = 234;
        int actual = Q2(input);
        int expected = 0;
        CuAssertIntEquals(tc, expected, actual);
    }  
    void TestQ2_true_neg(CuTest *tc) {

	int input = -14672;
        int actual = Q2(input);
        int expected = 1;
        CuAssertIntEquals(tc, expected, actual);
    }  
    void TestQ2_false_neg(CuTest *tc) {

	int input = -144672;
        int actual = Q2(input);
        int expected = 0;
        CuAssertIntEquals(tc, expected, actual);
    } 
    void TestQ2_zero(CuTest *tc) {

	int input = 0;
        int actual = Q2(input);
        int expected = 0;
        CuAssertIntEquals(tc, expected, actual);
    } 

    void TestQ2_true_pos(CuTest *tc) { //I added

	int input = 12345; //# is 5 digits
        int actual = Q2(input);
        int expected = 1; //expect to return 1 because input is 5 digits
        CuAssertIntEquals(tc, expected, actual);
    }


//===========================================================
//=================Question 3================================  
/*
Write a program that takes a student's average as an input, which is a floating point value, and prints
4 if the average is in the range 90-100,
3 if it is in the range 80-89,
2 if it is in the range 70-79,
1 if it is in the range 60-69 and
0 if the average is between 0 and 59. 
If the average is not in the range 0-100, the program should return -1 for invalid inputs that are not within 0-100
*/
    void TestQ3_4(CuTest *tc) {

	float input = 95.5;
        int actual = Q3(input);
        int expected = 4;
        CuAssertIntEquals(tc, expected, actual);
    } 
    void TestQ3_3(CuTest *tc) {

	float input = 85.5;
        int actual = Q3(input);
        int expected = 3;
        CuAssertIntEquals(tc, expected, actual);
    } 
    void TestQ3_2(CuTest *tc) {

	float input = 73.5;
        int actual = Q3(input);
        int expected = 2;
        CuAssertIntEquals(tc, expected, actual);
    } 
    void TestQ3_1(CuTest *tc) {

	float input = 61.5;
        int actual = Q3(input);
        int expected = 1;
        CuAssertIntEquals(tc, expected, actual);
    } 
    void TestQ3_0(CuTest *tc) {

	// this also checks for edge point
	float input = 59;
        int actual = Q3(input);
        int expected = 0;
        CuAssertIntEquals(tc, expected, actual);
    } 
    void TestQ3_invalid_1(CuTest *tc) {

				float input = 101;
        int actual = Q3(input);
        int expected = -1;
        CuAssertIntEquals(tc, expected, actual);
    } 
    void TestQ3_invalid_2(CuTest *tc) {

				float input = -4;
        int actual = Q3(input);
        int expected = -1;
        CuAssertIntEquals(tc, expected, actual);
    } 

    void TestQ3_invalid_3(CuTest *tc) { //I added

				float input = -55; //this input is not a real mark
        int actual = Q3(input);
        int expected = -1; //should return -1 because input is not between 0 and 100
        CuAssertIntEquals(tc, expected, actual);
    }

//===========================================================
//=================Question 4================================ 
    void TestQ4_1(CuTest *tc) {

		int input = 1;
        double actual = Q4(input);
        double expected = 4;
        CuAssertDblEquals(tc, expected, actual,0);
    } 

    void TestQ4_2(CuTest *tc) {

				int input = 2;
        double actual = Q4(input);
        double expected = 2.666667;
        CuAssertDblEquals(tc, expected, actual,0.000001);
    } 
    void TestQ4_20(CuTest *tc) {

				int input = 20;
        double actual = Q4(input);
        double expected = 3.091624;
        CuAssertDblEquals(tc, expected, actual,0.0000009);
    } 
    void TestQ4_M(CuTest *tc) {

				int input = 1000000;
        double actual = Q4(input);
        double expected = 3.141592;
        CuAssertDblEquals(tc, expected, actual,0.0000009);
    } 

    void TestQ4_3(CuTest *tc) { //I added

				int input = 3; //input of 3 means 3 terms of the pi infinite series will be calculated
        double actual = Q4(input);
        double expected = 3.466667;
        CuAssertDblEquals(tc, expected, actual,0.000001);
    }

//===========================================================
//=================Question 5================================ 

    void TestQ5(CuTest *tc) {

				
        int actual = Q5();
        int expected = 294;
        CuAssertIntEquals(tc, expected, actual);
    } 


//===========================================================
//=================Question 6================================   
    void TestQ6_none(CuTest *tc) {
        int input = 5;
        int expected[100]={0};
        int actual[100];
        int expectedCount = 0;
        int actualCount = Q6(input,actual);
        CuAssertIntEquals(tc, expectedCount, actualCount);
	int i;
         for (i=0;i<100;i++)
          	CuAssertIntEquals(tc, expected[i], actual[i]);
    }

    void TestQ6_10(CuTest *tc) {
        int input = 10;
        int expected[100]={0},actual[100]={0};
        expected[0]= 6;
        int expectedCount=1;
        int actualCount = Q6(input,actual);
        CuAssertIntEquals(tc, expectedCount, actualCount);
	int i;
         for (i=0;i<100;i++)
          	CuAssertIntEquals(tc, expected[i], actual[i]);
    }
    void TestQ6_1000(CuTest *tc) {
        int input = 1000;
        int expected[100]={0};
        int actual[100]={0};
        expected[0]=6;
        expected[1]=28;
        expected[2]=496;
        int expectedCount=3;
        int actualCount = Q6(input,actual);
        CuAssertIntEquals(tc, expectedCount, actualCount);
	int i;
         for (i=0;i<100;i++)

        	 CuAssertIntEquals(tc, expected[i], actual[i]);

        

    }
      
    void TestQ6_10000(CuTest *tc) {
        int input = 10000;
        int expected[100]={0},actual[100]={0};
        expected[0]=6;
        expected[1]=28;
        expected[2]=496;
        expected[3]=8128;
        int expectedCount=4;
        int actualCount = Q6(input,actual);
        CuAssertIntEquals(tc, expectedCount, actualCount);
	int i;
         for (i=0;i<100;i++)
          	CuAssertIntEquals(tc, expected[i], actual[i]);


    }
    void TestQ6_neg(CuTest *tc) {
        int input = -1000;
        int expected[100]={0},actual[100]={0};
        int expectedCount=0;
        int actualCount = Q6(input,actual);
        CuAssertIntEquals(tc, expectedCount, actualCount);
	int i;
         for (i=0;i<100;i++)
          	CuAssertIntEquals(tc, expected[i], actual[i]);

    }

    void TestQ6_6(CuTest *tc) { //I added
        int input = 6;
        int expected[100]={0},actual[100]={0};
        expected[0]= 6; //at index 0 in the array, 6 is placed because it is the first perfect number
        int expectedCount=1; //there is only one perfect number below (including) 6, so the expected count of perfect #'s is 1
        int actualCount = Q6(input,actual);
        CuAssertIntEquals(tc, expectedCount, actualCount);
	int i;
         for (i=0;i<100;i++)
          	CuAssertIntEquals(tc, expected[i], actual[i]);
    }

//===========================================================
//=================Question 7================================  
    void TestQ7a_1(CuTest *tc) {
        int input = 4567891;
        int actual = Q7a(input);
        int expected = 1987654;
        CuAssertIntEquals(tc, expected, actual);
    }
    void TestQ7a_2(CuTest *tc) {
        int input = 4567800;
        int actual = Q7a(input);
        int expected = 87654;
        CuAssertIntEquals(tc, expected, actual);
    }
    
    void TestQ7a_3(CuTest *tc) { //I added
        int input = 1234567; //7-digit input # to be reversed
        int actual = Q7a(input);
        int expected = 7654321;//expected reversed #
        CuAssertIntEquals(tc, expected, actual);
    }

    void TestQ7b_1(CuTest *tc) {
        int input = 4;
        int actual = Q7b(input);
        int expected = 4;
        CuAssertIntEquals(tc, expected, actual);
    }
    void TestQ7b_2(CuTest *tc) {
        int input = 123456789;
        int actual = Q7b(input);
        int expected = 987654321;
        CuAssertIntEquals(tc, expected, actual);
    }

    void TestQ7b_3(CuTest *tc) { //I added
        int input = 12345; //5-digit input # to be reversed
        int actual = Q7b(input);
        int expected = 54321; //expected reversed #
        CuAssertIntEquals(tc, expected, actual);
    }




    CuSuite* Lab1GetSuite() {
        CuSuite* suite = CuSuiteNew();
        SUITE_ADD_TEST(suite, TestQ1_for); //No additional test cases because no input
        SUITE_ADD_TEST(suite, TestQ1_while); //No additional test cases because no input
        SUITE_ADD_TEST(suite, TestQ1_do); //No additional test cases because no input
        

        SUITE_ADD_TEST(suite, TestQ2_true);
        SUITE_ADD_TEST(suite, TestQ2_false);
        SUITE_ADD_TEST(suite, TestQ2_true_neg);
        SUITE_ADD_TEST(suite, TestQ2_false_neg);
        SUITE_ADD_TEST(suite, TestQ2_zero);
        SUITE_ADD_TEST(suite, TestQ2_true_pos); //I added
        

        SUITE_ADD_TEST(suite, TestQ3_4);
        SUITE_ADD_TEST(suite, TestQ3_3);
        SUITE_ADD_TEST(suite, TestQ3_2);
        SUITE_ADD_TEST(suite, TestQ3_1);
        SUITE_ADD_TEST(suite, TestQ3_0);
        SUITE_ADD_TEST(suite, TestQ3_invalid_1);
        SUITE_ADD_TEST(suite, TestQ3_invalid_2);
        SUITE_ADD_TEST(suite, TestQ3_invalid_3); //I added
        

        SUITE_ADD_TEST(suite, TestQ4_1);
        SUITE_ADD_TEST(suite, TestQ4_2);
        SUITE_ADD_TEST(suite, TestQ4_20);
        SUITE_ADD_TEST(suite, TestQ4_M);
        SUITE_ADD_TEST(suite, TestQ4_3); //I added
        

        SUITE_ADD_TEST(suite, TestQ5); //No additional test cases because no input
        

        SUITE_ADD_TEST(suite, TestQ6_10);
        SUITE_ADD_TEST(suite, TestQ6_1000);
        SUITE_ADD_TEST(suite, TestQ6_10000);
        SUITE_ADD_TEST(suite, TestQ6_neg);
        SUITE_ADD_TEST(suite, TestQ6_6); //I added
        

        SUITE_ADD_TEST(suite, TestQ7a_1);
        SUITE_ADD_TEST(suite, TestQ7a_2);
        SUITE_ADD_TEST(suite, TestQ7a_3); //I added
        SUITE_ADD_TEST(suite, TestQ7b_1);
        SUITE_ADD_TEST(suite, TestQ7b_2);
        SUITE_ADD_TEST(suite, TestQ7b_3); //I added



        return suite;
    }
    
