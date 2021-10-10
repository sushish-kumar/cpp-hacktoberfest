//Armstrong number program in C++ of any digit
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int num, temp, rem;
   int sum = 0, n = 0;

   cout << "Enter positive number: ";
   cin >> num;

   temp = num;

   //logic to find the number of digits in a given number
   while (temp != 0)
   {
      temp = temp / 10;
      n++;
   }

   temp = num;

   while (temp != 0)
   {
      rem = temp % 10; //storing individual digit of original number in rem
      sum = sum + pow(rem, n); //computing power of digits of original number
      temp = temp / 10;
   }

   //checking whether sum is equal to original number
   if (num == sum)
      cout << num << " is an Armstrong number" << endl;
   else
      cout << num << " is not an Armstrong number" << endl;
   return 0;
}