#include <stdio.h> 
//function prototypes
double add(double a, double b);

//main function
int main(){
    printf("basic calculator main functions\n");
    printf("Addition of 5.5 and 4.5 is: %.1f\n", add(10.5, 4.5));
    return 0;
}
//addition fumction
double add(double x, double y){
    return x + y;
}