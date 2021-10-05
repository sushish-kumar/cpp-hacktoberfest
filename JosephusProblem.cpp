#include<stdio.h>

//This recursive function will keep looping till only one person is left i.e Total_people-1 times.
int josephus(int Total_People, int skip)
{
    //If only one person takes part, he is sure to be the last one standing
    if (Total_People == 1)
        return 1;
    else
    //Makes sure to keep looping as people are standing in a circle
        return (josephus(Total_People - 1, skip) + skip - 1) % Total_People + 1;
}

int main()
{
    int n = 14;
    int k = 2;
    int safe = josephus(n,k);
    printf("The 'Safe' postion will be %d",safe);
    return 0;
}
