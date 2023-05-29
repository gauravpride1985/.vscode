#include <stdio.h>
#include "APPL.h"
#include "../DAT/DAT_type.h"
#include "../DAT/DAT.h"

#define MAX_LENGTH 100

UCHAR input_fixed[]="yes";    
T_Status status_e = T_UNDONE;  //Any task updates the STATE

void T_SLEEP(SINT hour,SINT minute)
{
UCHAR input[MAX_LENGTH];

if( status_e == T_DONE)
printf("Chill,Gradma alreay having Breakfast");

printf("GrandMa Time to Sleep \n");
printf("Sleep Scheduled at %d:%d \n",hour,minute);
// Wait for 3 sec 
delay();

printf("GrandMa are you still Sleeping \n");


printf("Please answer yes or no \n");
scanf("%s",input);
//fgets(input, MAX_LENGTH, stdin);

UINT result = compareTwoString(input,input_fixed);

if(result == 0 )
{
    status_e=T_DONE;  // Update the state of task
    printf(" SLEEPING: Scheduled Task finish \n ");
}
else
{
    status_e=T_UNDONE;  // Update the state of task
    
    // wait till 10 mins before total time
    delay();
    status_e=T_DONE;
    printf(" T_SLEEP: Scheduled Task finish ");

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

void delay()
{
    UINT delay_UNIT;
    for(delay_UNIT =0; delay_UNIT < 10000 ; delay_UNIT ++);

}