#include<stdio.h>
#include<math.h>

//Function to find number of digits/length of number
int numlen(int n){
    
    int len=0;

    while(n!=0){
        n = n/10;
        len++;
    }
    return len;
}

//function to check if number is armstrong
int armstrong(int num,int len){
    
    int sum=0;
    int num2 = num;
    
    for(int i = 0 ; i < len ; i++){
        int temp = num2%10;
        num2 = num2 / 10;
        sum = sum + pow(temp,len);
    }
    if(sum == num){
        printf("%d is an armstrong number",num);
    }
    else{
        
        printf("%d is not an armstrong number",num);
    }
    return 0;
}

int main(){
    
    int num,len;
    
    num = 1634;
    
    len = numlen(num);
    
    armstrong(num,len);
    
}