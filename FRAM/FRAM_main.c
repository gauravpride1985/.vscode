#include <stdio.h>
#include "FRAM_task.h"
#include "../DAT/DAT_type.h"
#include "../DAT/DAT.h"
#include "../APPL/APPL.h"

int main(void)
{
SINT hour;
SINT minute;

printf("Hello GrandMa Enter the time in hour and minutes (0-24h) ");
scanf("%d : %d", &hour, &minute);

//printf("%d", hour);

// wait time of 3 seconds 

T_activity_of_day(hour,minute);

return 0;
}

