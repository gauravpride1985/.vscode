/* 
 *------------------------------------------------------------------------------
 *        --- source file ---
 *----------------------------------------------------------------------------*/
/*!
 * \file
 * \author Gaurav Kumar 
 * \date   29.05.2023
 *
 * \brief  The Task schedular defination
 **
 */
/*====================================================================={end}==*/

/*---- Includes: system-------------------------------------------------------------*/

#include <stdio.h>

/*---- Includes: public -------------------------------------------------------------*/

#include "../DAT/DAT.h"
#include "FRAM_task.h"




void T_activity_of_day(SINT hour, SINT minute,UINT SPEED)
{

    if (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        printf("Invalid input!\n");
        return;
    }
     /*0 - 6 hour */
    if (hour < (T_SLEEP_C_TIME/SPEED) || (hour == (T_SLEEP_C_TIME/SPEED) && minute < 10)) {
        T_SLEEP(hour,minute);  
    } else if (hour < (T_BREAKFAST_C_TIME/SPEED) || (hour == (T_BREAKFAST_C_TIME/SPEED) && minute < 10)) {
        T_BREAKFAST(hour,minute);
    } else if (hour < (T_JUICE_C_TIME/SPEED) || (hour == (T_JUICE_C_TIME/SPEED) && minute < 10)) {
        T_JUICE(hour,minute);
    } else if (hour < (T_LUNCH_C_TIME/SPEED) || (hour == (T_LUNCH_C_TIME/SPEED) && minute < 10)) {
        T_LUNCH(hour,minute);
    } else if (hour < (T_WALK_C_TIME/SPEED) || (hour == (T_WALK_C_TIME/SPEED) && minute < 10)) {
        T_WALK(hour,minute);
    } else if (hour < (T_TV_C_TIME/SPEED) || (hour == (T_TV_C_TIME/SPEED) && minute < 10)) {
        T_TV(hour,minute);
    } else if (hour < (T_DINE_C_TIME/SPEED) || (hour == (T_DINE_C_TIME/SPEED) && minute < 10)) {
        T_DINE(hour,minute);
    } else if (hour < (T_READING_C_TIME/SPEED) || (hour == (T_READING_C_TIME/SPEED) && minute < 10)) {
        T_READING(hour,minute);
    } else {
        printf("Other Activities\n");  /*21 - 24 h*/
    }

}



