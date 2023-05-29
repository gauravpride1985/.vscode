/* 
 *------------------------------------------------------------------------------
 *        --- public header ---
 *----------------------------------------------------------------------------*/
/*!
 * \file
 * \author Gaurav Kumar 
 * \date   29.05.2023
 *
 * \brief  User application activities declaration 
 **
 */
/*====================================================================={end}==*/

#ifndef APPL_H_
#define APPL_H_

#include "../DAT/DAT.h"

void  T_SLEEP(SINT,SINT);
void  T_BREAKFAST(SINT,SINT);
void  T_JUICE(SINT,SINT);
void  T_LUNCH(SINT,SINT);
void  T_WALK(SINT,SINT);
void  T_TV(SINT,SINT);
void  T_DINE(SINT,SINT);
void  T_READING(SINT,SINT);

int compareTwoString(UCHAR a[],UCHAR b[]); 

#endif