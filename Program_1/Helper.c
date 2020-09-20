#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : DisplayFactor
//  Input : Interger
//  Output :    None
//  Description :   It is used to display the factors
//  Autor : Piyush Manohar Khairnar
//  Date :  28th July 2020
//
//////////////////////////////////////////////////////////////

int MultFact(int iNo)         
{
    int iCnt = 0;
    int iSum = 1;                 //0 1 2 3    
    
    //Filter
    if(iNo == 0)
    {
        return 0;
    }

    for( iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
       if((iNo % iCnt) == 0)        
       {
            printf("%d\n", iCnt);
            iSum = iSum * iCnt;
       }
    }
    return iSum;
}














