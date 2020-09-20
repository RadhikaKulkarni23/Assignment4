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

int SumOfFact(int iNo)         
{
    int iCnt = 0;                  //0 1 2 3    
    int iSum = 0;

                //  icnt < 12
    for( iCnt = 1 ; iCnt < iNo ; iCnt++ )
    {
       if((iNo % iCnt) != 0)        
       {
              iSum = iSum + iCnt;
       }
       
    }

    return iSum;
}














