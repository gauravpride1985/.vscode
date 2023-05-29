#include <stdio.h>
//#include "string.h"

#include "APPL.h"
#include "../DAT/DAT_type.h"
#include "../DAT/DAT.h"

#define MAX_LENGTH 100
char input_fixed[]="yes";

T_Status status_e = T_UNDONE;  //Any task updates the STATE

void T_SLEEP()
{
char input[MAX_LENGTH];

printf("Welcome %s\n",input);
printf("GrandMa Time to Sleep \n");
// Wait for 3 sec 
printf("GrandMa are you still Sleeping \n");

printf("Please answer yes or no \n");

scanf("%s",input);
//fgets(input, MAX_LENGTH, stdin);


//input[strcspn(input,"\n")] = '\0';
UINT result = compareTwoString(input,input_fixed);

if(result == 0 )
status_e=T_DONE;
else
status_e=T_UNDONE;

printf("%d \n",status_e);

}

void T_BREAKFAST()
{
printf("GrandMa Time to Breakfast ");
}

void T_JUICE()
{
printf("GrandMa Time to Have Juice ");
}

void T_LUNCH()
{
printf("GrandMa Time to Have Lunch ");
}

void T_TV()
{
printf("GrandMa Time to Watch TV ");
}

void T_WALK()
{
printf("GrandMa Time to to Walk ");
}

void T_DINE()
{
printf("GrandMa Time to have dinner ");
}
void T_READING()
{
printf("GrandMa Time to read some books ");
}


int compareTwoString(char a[],char b[])  
{  
    int flag=0,i=0;  // integer variables declaration  
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