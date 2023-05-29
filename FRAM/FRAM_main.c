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
#define MAX_LENGTH   (100)

UCHAR input_gradma[MAX_LENGTH];
UCHAR input_gradma_now[]="now";

int main(void)
{
    
SINT hour=0;     //  User input can be of any range
SINT minute=0;   //  User input can be of any range
SINT Enter_input;

time_t s;
struct tm* current_time;

// time in seconds
s = time(NULL);

// to get current time
current_time = localtime(&s);
printf("%02d:%02d \n", current_time->tm_hour, current_time->tm_min);

  while(1)
  {

    printf("Press 1 to enter hour and minutes \n");
    printf("Press 2 to text \n");

    scanf("%d",&Enter_input );

      switch(Enter_input)
      {
            case 1:
                  printf("Hello GrandMa !! Enter the time in hour and minute  \n");
                  scanf(" %d %d", &hour,&minute);
                  T_activity_of_day(hour,minute);
                  break;

            case 2:
                  printf("Hello GrandMa !! Enter any text \n");
                  scanf(" %s \n", input_gradma);
              
                  printf("result \n");
                  UINT result = compareTwoString(input_gradma,input_gradma_now);
                
                    if(result == 0 )
                      {
                        hour=current_time->tm_hour;
                        minute=current_time->tm_min;
                        printf("%d %d \n", hour,minute);
                        T_activity_of_day(hour,minute);
                      }
                      else{
                        printf("Please Enter text now \n");
                      }

                break;

            default:
                break;
}
return 0;
}

}