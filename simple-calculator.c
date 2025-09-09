#include <stdio.h> 
//functions prototypes
double addition(double a, double b);
double subtract(double a, double b);

//main function
int main(){
    printf("basic calculator main functions\n");         //main function print

    double add= addition(10.5,4.5);                     //addition function call
    printf("Addition of 4.5 and 10.5 is: %.1f\n", add);   // addition print function

    double sub= subtract(10.5,4.5);                  //subtraction function call
    printf("subtraction of 4.5 from 10.5 is: %.1f\n", sub); //subtraction print function

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