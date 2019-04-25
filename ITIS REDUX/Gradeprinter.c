#include<stdio.h>
#include"menu.h"
void gradeprinter( int number)
{
    float g;
    if(number>=80)
    {
        g=4.00;
        printf("\t\t\tLetter Grade        : A+\n");
        printf("\t\t\tNumeric Grade       :%.2f\n",g);
    }
    else if(number>=75&&number<80)
    {
        g=3.75;
       printf("\t\t\tLetter Grade        : A\n");
       printf("\t\t\tNumeric Grade       :%.2f\n",g);
    }
    else if(number>=70&&number<75)
    {
        g=3.50;
        printf("\t\t\tLetter Grade       : A-\n");
        printf("\t\t\tNumeric Grade      :%.2f\n",g);
    }
    else if(number>=65&&number<70)
    {
        g=3.25;
        printf("\t\t\tLetter Grade       : B+\n");
        printf("\t\t\tNumeric Grade      :%.2f\n",g);
    }
    else if(number>=60&&number<65)
    {
        g=3.00;
        printf("\t\t\tLetter Grade       : B\n");
        printf("\t\t\tNumeric Grade      :%.2f\n",g);
    }
    else if(number>=55&&number<60)
    {
        g=2.75;
        printf("\t\t\tLetter Grade       : B-\n");
        printf("\t\t\tNumeric Grade      :%.2f\n",g);
    }
    else if(number>=50&&number<55)
    {
        g=2.50;
        printf("\t\t\tLetter Grade       : C+\n");
        printf("\t\t\tNumeric Grade      :%.2f\n",g);
    }
    else if(number>=45&&number<50)
    {
        g=2.25;
        printf("\t\t\tLetter Grade       : C\n");
        printf("\t\t\tNumeric Grade      :%.2f\n",g);
    }
    else if(number>=40&&number<45)
    {
        g=2.00;
        printf("\t\t\tLetter Grade       : D\n");
        printf("\t\t\tNumeric Grade      :%.2f\n",g);
    }
    else if(number<40)
    {
        g=0.00;
        printf("\t\t\tLetter Grade       : F\n");
        printf("\t\t\tNumeric Grade      :%.2f\n",g);
    }





}

