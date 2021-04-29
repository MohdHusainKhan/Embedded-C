/**
 * @file Activity4.h
 * @author Husain Khan
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED

/**
 * @brief Function for intializing of USART
 * 
 */
void USARTInit(uint16_t);

/**
 * @brief Function for reading purpose
 * 
 * @return char 
 */
char USARTReadChar();

/**
 * @brief Function for writing purpose
 * 
 */
void USARTWriteChar(char);

/**
 * @brief Function for Activity4
 * 
 */
void activity4(uint16_t);

#endif // ACTIVITY4_H_INCLUDED
