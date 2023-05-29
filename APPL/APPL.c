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
            printf("Chill,Gradma already have Slept \n");
        }
    else if ( (status_e==T_UNDONE) && (hour== 5) && (minute == 50))
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
            //printf(" STATE IS UNDONE \n ");
        }

}

void T_BREAKFAST(SINT hour,SINT minute)
{

    UCHAR input[MAX_LENGTH];

    if( status_e == T_DONE)
        {
            printf("Chill,Gradma already had Breakfast \n");
        }
    else if ( (status_e==T_UNDONE) && (hour== 5) && (minute == 50))
        {
                printf(" T_BREAKFAST: Scheduled Task about to finish \n");
                return;
        }

    printf("GrandMa Time to have Breakfast \n");
    printf("Breakfast Scheduled at %d:%d \n",hour,minute);
    
    // Wait for 3 sec 
    // NOTE: Using the Linux standard library as delay using for loop wasn't accurate
    sleep(3);
       
    printf("GrandMa , Are you still having Breakfast ? \n");
    printf("Please reply yes or no \n");
    scanf("%s",input);

    UINT result = compareTwoString(input,input_fixed);

        if(result == 0 )
        {
            status_e=T_DONE;  // Update the state of task
            printf(" Breakfast: Scheduled Task finish \n ");
        }
        else 
        {
            status_e=T_UNDONE;  // Update the state of task
            //printf(" STATE IS UNDONE \n "); // Only STATE update required
        }

}

void T_JUICE(SINT hour,SINT minute)
{

    UCHAR input[MAX_LENGTH];

    if( status_e == T_DONE)
        {
            printf("Chill,Gradma already have JUICE \n");
        }
    else if ( (status_e==T_UNDONE) && (hour== 5) && (minute == 50))
        {
                printf(" T_JUICE: Scheduled Task about to finish \n");
                return;
        }

    printf("GrandMa Time to have JUICE \n");
    printf("JUICE Scheduled at %d:%d \n",hour,minute);
    
    // Wait for 3 sec 
    // NOTE: Using the Linux standard library as delay using for loop wasn't accurate
    sleep(3);
       
    printf("GrandMa , Are you still having JUICE ? \n");
    printf("Please reply yes or no \n");
    scanf("%s",input);

    UINT result = compareTwoString(input,input_fixed);

        if(result == 0 )
        {
            status_e=T_DONE;  // Update the state of task
            printf(" JUICE: Scheduled Task finish \n ");
        }
        else 
        {
            status_e=T_UNDONE;  // Update the state of task
            //printf(" STATE IS UNDONE \n ");
        }

}

void T_LUNCH(SINT hour,SINT minute)
{

    UCHAR input[MAX_LENGTH];

    if( status_e == T_DONE)
        {
            printf("Chill,Gradma already had LUNCH \n");
        }
    else if ( (status_e==T_UNDONE) && (hour== 5) && (minute == 50))
        {
                printf(" T_LUNCH: Scheduled Task about to finish \n");
                return;
        }

    printf("GrandMa Time to have LUNCH \n");
    printf("LUNCH Scheduled at %d:%d \n",hour,minute);
    
    // Wait for 3 sec 
    // NOTE: Using the Linux standard library as delay using for loop wasn't accurate
    sleep(3);
       
    printf("GrandMa , Are you still having LUNCH ? \n");
    printf("Please reply yes or no \n");
    scanf("%s",input);

    UINT result = compareTwoString(input,input_fixed);

        if(result == 0 )
        {
            status_e=T_DONE;  // Update the state of task
            printf(" LUNCH: Scheduled Task finish \n ");
        }
        else 
        {
            status_e=T_UNDONE;  // Update the state of task
            //printf(" STATE IS UNDONE \n ");
        }

}

void T_TV(SINT hour,SINT minute)
{

    UCHAR input[MAX_LENGTH];

    if( status_e == T_DONE)
        {
            printf("Chill,Gradma already have seen TV \n");
        }
    else if ( (status_e==T_UNDONE) && (hour== 5) && (minute == 50))
        {
                printf(" T_TV: Scheduled Task about to finish \n");
                return;
        }

    printf("GrandMa Time to TV \n");
    printf("TV Scheduled at %d:%d \n",hour,minute);
    
    // Wait for 3 sec 
    // NOTE: Using the Linux standard library as delay using for loop wasn't accurate
    sleep(3);
       
    printf("GrandMa , Are you still wathing TV ? \n");
    printf("Please reply yes or no \n");
    scanf("%s",input);

    UINT result = compareTwoString(input,input_fixed);

        if(result == 0 )
        {
            status_e=T_DONE;  // Update the state of task
            printf(" TV: Scheduled Task finish \n ");
        }
        else 
        {
            status_e=T_UNDONE;  // Update the state of task
            //printf(" STATE IS UNDONE \n ");
        }

}

void T_WALK(SINT hour,SINT minute)
{

    UCHAR input[MAX_LENGTH];

    if( status_e == T_DONE)
        {
            printf("Chill,Gradma already had WALK \n");
        }
    else if ( (status_e==T_UNDONE) && (hour== 5) && (minute == 50))
        {
                printf(" T_WALK: Scheduled Task about to finish \n");
                return;
        }

    printf("GrandMa Time to WALK \n");
    printf("WALK Scheduled at %d:%d \n",hour,minute);
    
    // Wait for 3 sec 
    // NOTE: Using the Linux standard library as delay using for loop wasn't accurate
    sleep(3);
       
    printf("GrandMa , Are you still WALKING ? \n");
    printf("Please reply yes or no \n");
    scanf("%s",input);

    UINT result = compareTwoString(input,input_fixed);

        if(result == 0 )
        {
            status_e=T_DONE;  // Update the state of task
            printf(" WALK: Scheduled Task finish \n ");
        }
        else 
        {
            status_e=T_UNDONE;  // Update the state of task
            //printf(" STATE IS UNDONE \n ");
        }

}

void T_DINE(SINT hour,SINT minute)
{

    UCHAR input[MAX_LENGTH];

    if( status_e == T_DONE)
        {
            printf("Chill,Gradma already have DINE \n");
        }
    else if ( (status_e==T_UNDONE) && (hour== 5) && (minute == 50))
        {
                printf(" T_DINE: Scheduled Task about to finish \n");
                return;
        }

    printf("GrandMa Time to Sleep \n");
    printf("Sleep Scheduled at %d:%d \n",hour,minute);
    
    // Wait for 3 sec 
    // NOTE: Using the Linux standard library as delay using for loop wasn't accurate
    sleep(3);
       
    printf("GrandMa , Are you still having DINNER  ? \n");
    printf("Please reply yes or no \n");
    scanf("%s",input);

    UINT result = compareTwoString(input,input_fixed);

        if(result == 0 )
        {
            status_e=T_DONE;  // Update the state of task
            printf(" DINNER: Scheduled Task finish \n ");
        }
        else 
        {
            status_e=T_UNDONE;  // Update the state of task
            //printf(" STATE IS UNDONE \n ");
        }

}
void T_READING(SINT hour,SINT minute)
{

    UCHAR input[MAX_LENGTH];

    if( status_e == T_DONE)
        {
            printf("Chill,Gradma already done READING \n");
        }
    else if ( (status_e==T_UNDONE) && (hour== 5) && (minute == 50))
        {
                printf(" T_READING: Scheduled Task about to finish \n");
                return;
        }

    printf("GrandMa Time to READ \n");
    printf("READ Scheduled at %d:%d \n",hour,minute);
    
    // Wait for 3 sec 
    // NOTE: Using the Linux standard library as delay using for loop wasn't accurate
    sleep(3);
       
    printf("GrandMa , Are you still READING ? \n");
    printf("Please reply yes or no \n");
    scanf("%s",input);

    UINT result = compareTwoString(input,input_fixed);

        if(result == 0 )
        {
            status_e=T_DONE;  // Update the state of task
            printf(" READING: Scheduled Task finish \n ");
        }
        else 
        {
            status_e=T_UNDONE;  // Update the state of task
            //printf(" STATE IS UNDONE \n ");
        }

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