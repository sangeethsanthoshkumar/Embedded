#include <REGX51.H>
main()
{ 
 int a=0;
 P1_0=1;
 
 if(a==1)
  { P1_1=1;
    P1_2=0;
  }
 else
  { P1_1=0;
    P1_2=1;	
  }
 while(P1_0==0)
 { 
   P1_1=1;
   P1_2=0;
   a=1;
 }

 while(P1_0==1)
 { 
   P1_1=0;
   P1_2=1;
 }

 }