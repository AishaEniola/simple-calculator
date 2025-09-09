/*
Aisha Muftau
ECE 321 Lab 2
*/
#include <stdio.h> 
//functions prototypes declaration
double addition(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double division(double a, double b);

//main function
int main(){

    char choice;        //initializing variable for choice of operation of char type 
    double num1, num2, result; // initializing variables of 2 numbers and result
    
    printf("basic calculator main functions\n");         //main function print

//prompting users to enter their desired arithmetic operator   
    printf("enter an operator (+, -, *, /): ");    
    if (scanf(" %c", &choice) != 1) {   // Check if a valid character was entered
        printf("Invalid input! Please enter a valid operator.\n");
        return 1; 
    }
//check if the choice is valid
    if (choice != '+' && choice != '-' && choice != '*' && choice != '/'){ 
        printf("Invalid operator!\n");
        return 1; // Exit the program with an error code
    }

//prompt user to enter two numbers and validate the numeric input
    printf("Enter two numbers: ");          
    if (scanf("%lf %lf", &num1, &num2) != 2) {                  //check
        printf("Invalid input! Please enter numeric values.\n");
        return 1; 
    }
    

//Perform calculation
    switch(choice) {
        case '+': printf("Result = %.1lf\n", addition(num1, num2)); break;   //addition operation and addition function call
        case '-': printf("Result = %.1lf\n", subtract(num1, num2)); break;   //subtraction operation and subtraction function call
        case '*': printf("Result = %.1lf\n", multiply(num1, num2)); break;   //multiplication operation and multiplication function call
        case '/': printf("Result = %.2lf\n", division(num1, num2)); break;   //division operation and division function call
        default: printf("Invalid choice.\n");   break; //default case if no valid operation is chosen
    }
    return 0;
}

//Calculator Functions

//addition function
double addition(double x, double y){
    return x + y;
}
//subtraction function
double subtract(double x, double y){
    return x-y;
}
//multiplication function
double multiply(double x, double y){
    return x*y;
}
//division function
double division(double x, double y){
    if(y !=0){          //check if denominator is not zero
        return x/y;
    } else {
        printf("Error: division by zero can not occur!\n");
        return 0; // Return 0 if divided by 0
    }
}