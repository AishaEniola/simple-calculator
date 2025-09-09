#include <stdio.h> 
//functions prototypes
double addition(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double division(double a, double b);

//main function
int main(){
    printf("basic calculator main functions\n");         //main function print

    double add= addition(10.5,4.5);                     //addition function call
    printf("Addition of 4.5 and 10.5 is: %.1f\n", add);   // addition print function

    double sub= subtract(10.5,4.5);                  //subtraction function call
    printf("subtraction of 4.5 from 10.5 is: %.1f\n", sub); //subtraction print function

    double mul= multiply(10.5,4.5);                  //multiplication function call
    printf("multiplication of 4.5 and 10.5 is: %.1f\n", mul); //multiplication print function

    double div= division(10.5,4.5);                  //division function call
    printf("division of 10.5 by 4.5 is: %.3f\n", div); //division print function

    return 0;
}
//addition fumction
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
        printf("Error: Division by zero!\n");
        return 0; // Return 0 
    }
}