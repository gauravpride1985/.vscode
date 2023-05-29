/* 
 *------------------------------------------------------------------------------
 *        --- source file ---
 *----------------------------------------------------------------------------*/
/*!
 * \file
 * \author Gaurav Kumar 
 * \date   29.05.2023
 *
 * \brief  The user application, all day activity defination
 **
 */
/*====================================================================={end}==*/

/*---- Includes: system-------------------------------------------------------------*/
#include <stdio.h>
#include <unistd.h>   // Using the Linux standard library as delay using for loop wasn't accurate 

/*---- Includes: public -------------------------------------------------------------*/

#include "APPL.h"
#include "../DAT/DAT_type.h"
#include "../DAT/DAT.h"

/*---- Definition of user varaible and macros: -----------------------------*/
#define MAX_LENGTH 100

UCHAR input_fixed[]="yes";    
T_Status status_e = T_UNDONE;  //Any application task can updates the status

void T_SLEEP(SINT hour,SINT minute)
{
    UCHAR input[MAX_LENGTH];

    if( status_e == T_DONE)
        {
            printf("Chill,Gradma alreay having Breakfast \n");
        }
    else if ( (status_e==T_UNDONE) && (hour== 6) && (minute == 50))
        {
                printf(" T_SLEEP: Scheduled Task about to finish \n");
                return;
        }

    printf("GrandMa Time to Sleep \n");
    printf("Sleep Scheduled at %d:%d \n",hour,minute);
    
    // Wait for 3 sec 
    // NOTE: Using the Linux standard library as delay using for loop wasn't accurate
    sleep(3);
       
    printf("GrandMa , Are you still Sleeping ? \n");
    printf("Please reply yes or no \n");
    scanf("%s",input);

    UINT result = compareTwoString(input,input_fixed);

        if(result == 0 )
        {
            status_e=T_DONE;  // Update the state of task
            printf(" SLEEPING: Scheduled Task finish \n ");
        }
        else 
        {
            status_e=T_UNDONE;  // Update the state of task
             printf(" STATE IS UNDONE \n ");
        }

}

void T_BREAKFAST(SINT hour,SINT minute)
{
printf("GrandMa Time to Breakfast ");
}

void T_JUICE(SINT hour,SINT minute)
{
printf("GrandMa Time to Have Juice ");
}

void T_LUNCH(SINT hour,SINT minute)
{
printf("GrandMa Time to Have Lunch ");
}

void T_TV(SINT hour,SINT minute)
{
printf("GrandMa Time to Watch TV ");
}

void T_WALK(SINT hour,SINT minute)
{
printf("GrandMa Time to to Walk ");
}

void T_DINE(SINT hour,SINT minute)
{
printf("GrandMa Time to have dinner ");
}
void T_READING(SINT hour,SINT minute)
{
printf("GrandMa Time to read some books ");
}


int compareTwoString(UCHAR a[],UCHAR b[])  
{  
    SINT flag=0,i=0;  // integer variables declaration  
    while(a[i]!='\0' &&b[i]!='\0')  // while loop  
    {  
       if(a[i]!=b[i])  
       {  
           flag=1;  
           break;  
       }  
       i++;  
    } 
    if(a[i]!='\0'||b[i]!='\0')
       return 1;
    if(flag==0)  
    return 0;  
    else  
    return 1;  
} 

/*Not accurate time delay so using linux sleep() */
/*
void delay()
{
    double delay_UNIT;
    for(delay_UNIT =0; delay_UNIT < 100000 ; delay_UNIT++)
        for(delay_UNIT =0; delay_UNIT < 100000 ; delay_UNIT++);

}
*/