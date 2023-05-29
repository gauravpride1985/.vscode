/* 
 *------------------------------------------------------------------------------
 *        --- public header ---
 *----------------------------------------------------------------------------*/
/*!
 * \file
 * \author Gaurav Kumar 
 * \date   29.05.2023
 *
 * \brief  File contains user defined data types
 **
 */
/*====================================================================={end}==*/

#ifndef DAT_type_H_
#define DAT_type_H_

/*---- Declaration of public types -------------------------------------------*/

typedef enum {
    T_UNDONE = 0, 
    T_DONE = !T_UNDONE
} T_Status;


#endif