#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int number, copy_num, remainder, total_digit_sum = 0, num_of_digits = 0;
  cout<<"\t\tProgram to check armstrong number of n digits:\n"<<endl;
  cout<<"Enter the number here : "<<endl;
  cin>>number;
  copy_num = number;
  
  while(copy_num!=0){
  	copy_num = copy_num / 10;
    num_of_digits++;
  }
  cout<<"number of digits in number is : "<<num_of_digits<<"\n"<<endl;
  copy_num = number;
  while(copy_num!=0){
  
  	remainder = copy_num % 10;
    total_digit_sum = total_digit_sum + pow(remainder, num_of_digits);
    copy_num = copy_num/10;
  }
  if(number == total_digit_sum){
  	cout<<number<<" is an armstrong number"<<endl;
  }
  else{
  	cout<<number<<" is not an armstrong number"<<endl;
  }
}
