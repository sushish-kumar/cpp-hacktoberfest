#include<stdio.h>

int add(int a, int b){

    int sum = a + b;

    return sum;
}

int sub(int a, int b){
    
    int subtract = a - b;

    return subtract;

}

int mul(int a, int b){

    int product = a * b;

    return product;

}

float div(float a, float b){

    float divide = a / b;

    return divide;
}

int main(){

    int a = 32;
    int b = 17;

    int sum = add(a,b);
    int diff = sub(a,b);
    float frac = div(a,b);
    int prod = mul(a,b);

    printf(" %d is the sum of the two numbers\n %d is the difference of the two numbers\n %d is the product of the two numbers\n %.2f is the product of division of the two numbers",sum,diff,prod,frac);
}