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

void FactRev(int iNo)         
{
    int iCnt = 0;
                    
    //Filter
    if(iNo == 0)
    {
        printf("It has no factors.");
    }
        //iCnt = 11
    for( iCnt = iNo-1 ; iCnt > 0; iCnt--)
    {
       if((iNo % iCnt) == 0)        
       {
            printf("\n%d", iCnt);
       }
    }
}














