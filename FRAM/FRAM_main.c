/* 
 *------------------------------------------------------------------------------
 *        --- source file ---
 *----------------------------------------------------------------------------*/
/*!
 * \file
 * \author Gaurav Kumar 
 * \date   29.05.2023
 *
 * \brief  User input Framework and task schedular
 **
 */
/*====================================================================={end}==*/



/*---- Includes: system-------------------------------------------------------------*/

#include <stdio.h>
#include <time.h>   // Need to monitor to statement "now"

/*---- Includes: private -------------------------------------------------------------*/

#include "FRAM_task.h"
#include "../DAT/DAT_type.h"
#include "../DAT/DAT.h"
#include "../APPL/APPL.h"

/*---- Definition of Global varaible and macros: -----------------------------*/
#define MAX_LENGTH   (10)

UCHAR input_gradma[MAX_LENGTH];
UCHAR input_gradma_now[]="now";

UINT SPEED =1;

int main(void)
{
    
SINT hour=0;     //  User input can be of any range
SINT minute=0;   //  User input can be of any range
SINT Enter_input,L_SPEED=0,result=0;

time_t s;
struct tm* current_time;

// time in seconds
s = time(NULL);

// to get current time
current_time = localtime(&s);
//printf("%02d:%02d \n", current_time->tm_hour, current_time->tm_min);

  while(1)
  {

    printf("Press 1 to enter hour and minutes \n");
    printf("Press 2 to text \n");
    printf("Press 3 Execution with speed factor \n");

    scanf("%d",&Enter_input );

      switch(Enter_input)
      {
            case 1:
                  printf("Hello GrandMa !! Enter the time in hour and minute  \n");
                  scanf(" %d %d", &hour,&minute);
                  T_activity_of_day(hour,minute,SPEED);
                  break;

            case 2:
                  printf("Hello GrandMa !! Enter any text \n");
                  scanf(" %s", input_gradma);
                               
                  result = compareTwoString(input_gradma,input_gradma_now);
                
                    if(result == 0 )
                      {
                        hour=current_time->tm_hour;
                        minute=current_time->tm_min;
                        printf("%d %d \n", hour,minute);
                        T_activity_of_day(hour,minute,SPEED);
                      }
                      else{
                        printf("Please Enter text now \n");
                      }
                  break;
            case 3:
                  printf("Hello GrandMa !! Enter speed factor 1=NORMAL and 2=DOUBLE SPEED \n");
                  scanf("%d", &L_SPEED);
                  SPEED=L_SPEED;
                  hour=current_time->tm_hour;
                  minute=current_time->tm_min;
                  T_activity_of_day(hour,minute,SPEED);
                  break;

            default:
                  break;
               
}

SPEED=1; 

return 0;
}

}