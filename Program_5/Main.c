/*
Problem statement :
 Accept number from user and display factors of that number.
 
 Input : 12         Output :   1    2   3   4   6
*/

#include "Header.h"

int main()          // Entry point function
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = FactDiff(iValue);      // Function call    Dukanat ja	

    printf("Difference is: %d",iRet);

    return 0;
}















