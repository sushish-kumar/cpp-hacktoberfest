//printf returns the number of characters that print on screen
//("%*s") this specifier print the value of the variable, the value of variable times.
#include <iostream>
using namespace std;

int sum(int a, int b)
{
  return printf("%*s%*s", a, "", b, "");  
}

int main()
{
    int A , B ;
    cout<<"enter two numers:"<<endl;
    cin>>A>>B;
    cout<<"sum = "<<sum(A, B)<<endl;
    return 0;
}
