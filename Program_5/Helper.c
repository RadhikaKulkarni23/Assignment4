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

int FactDiff(int iNo)         
{
   int iCnt = 0;                     
   int iAdd = 0;
   int iSum = 0;
             
    
   for( iCnt = 1 ; iCnt < iNo ; iCnt++ )
   {
      if((iNo % iCnt) == 0)        
      {
         iAdd = iAdd + iCnt;
      } 
      else
      {
         iSum = iSum + iCnt;
      }
   }  

   return(iAdd - iSum);
}














