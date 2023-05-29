#include <stdio.h>
#include <time.h>

#include "FRAM_task.h"
#include "../DAT/DAT_type.h"
#include "../DAT/DAT.h"
#include "../APPL/APPL.h"

#define TOTAL_TIME_SCHEDULE (120)  // 60*2 = 120 Assumption made the each schedule at 2 hours

int main(void)
{
SINT hour;   //  User input can be of any range
SINT minute;

while(1)
{
printf("Hello GrandMa Enter the time in hour and minutes (0-24h) \n");
scanf(" %d : %d", &hour, &minute);
//fgets(input, TOTAL_TIME_SCHEDULE, stdin);

 //printf("Welcome %s\n",input);
//printf("%d", hour);

// wait time of 3 seconds 

T_activity_of_day(hour,minute);

return 0;
}

}
