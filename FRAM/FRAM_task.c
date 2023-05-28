#include <stdio.h>
#include "../DAT/DAT.h"
#include "FRAM_task.h"

void T_activity_of_day(SINT hour, SINT minute )
{

    if (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        printf("Invalid input!\n");
        return;
    }

    if (hour < 7 || (hour == 6 && minute < 59)) {
        T_SLEEP();
    } else if (hour < 9 || (hour == 9 && minute < 59)) {
        T_BREAKFAST();
    } else if (hour < 11 || (hour == 11 && minute < 59)) {
        T_JUICE();
    } else if (hour < 13 || (hour == 13 && minute < 59)) {
        T_LUNCH();
    } else if (hour < 15 || (hour == 15 && minute < 59)) {
        T_WALK();
    } else if (hour < 17 || (hour == 17 && minute < 59)) {
        T_TV();
    } else if (hour < 19 || (hour == 19 && minute < 59)) {
        T_DINE();
    } else if (hour < 21 || (hour == 21 && minute < 59)) {
        T_READING();
    } else {
        printf("Other Activities\n");
    }

}


