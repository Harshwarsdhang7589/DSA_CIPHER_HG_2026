// write a structure name avg and twice,three structurevmembers suc as [m1,m2,m3].Accept the data into structure variable & print the avg of 3 subjects;
#include <stdio.h>
int main()
{
    struct average
    {
        int m1;
        int m2;
        int m3;
    }avg;

    scanf("enter marks of m1:", &avg.m1);
     scanf("enter marks of m1:", &avg.m1);
      scanf("enter marks of m1:", &avg.m1);
       
      avg = (avg.m1+avg.m2+avg.m3)/3;
      printf("Average:%d",avg);
      




    


    return 0;
}