/**
 * @file Activity2.h
 * @author Husain Khan
 * @brief  Header File for defining InitADC() , ReadaADC() , Activity2() functions
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED

/**
 * @brief Initializing ADC
 * 
 */
void InitADC();

/**
 * @brief Function to Read Adc value
 * 
 * @param ch Channel destination
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t ch);

/**
 * @brief Function for Activity2
 * 
 * @return int 
 */
int activity2();

/**
 * @brief Defining a 16 bit variable ADCregister
 * 
 */
uint16_t volatile ADCregister;
#define ADCregister ADCL + (ADCH * 256)

#endif // ACTIVITY2_H_INCLUDED
