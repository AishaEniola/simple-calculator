#include <stdio.h> 
//functions prototypes
double addition(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double division(double a, double b);

//main function
int main(){

    char choice;        //initializing variable for choice of operation of char type 
    double num1, num2, result; // initializing variables of 2 numbers and result

    printf("basic calculator main functions\n");         //main function print
    printf("enter an operator (+, -, *, /): ");    //list of operations
    scanf(" %c", &choice);
    printf("Enter two numbers: ");          //prompt user to enter two numbers  
    scanf("%lf %lf", &num1, &num2);

    switch(choice) {
        case '+': printf("Result = %.1lf\n", addition(num1, num2)); break;   //addition operation and addition function call
        case '-': printf("Result = %.1lf\n", subtract(num1, num2)); break;   //subtraction operation and subtraction function call
        case '*': printf("Result = %.1lf\n", multiply(num1, num2)); break;   //multiplication operation and multiplication function call
        case '/': printf("Result = %.2lf\n", division(num1, num2)); break;   //division operation and division function call
        default: printf("Invalid choice.\n");   break; //default case if no valid operation is chosen
    }
    return 0;
}
//Operations Functions

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
    if(y !=0){          //check if y is not zero
        return x/y;
    } else {
        printf("Error: division by zero can not occur!\n");
        return 0; // Return 0 
    }
}