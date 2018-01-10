/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}
/**
 * @file stats.c
 * @brief statistics Implementation  file
 *
 * this is the file or module file  that's relate to statistics of an array ,
 * it provide 7 function for calculate some statistics on the an array :
 * -mean   of the array
 * -median of the array
 * -maximum element in the array
 * -minimum element in the array
 * -sort the array from largest to smallest
 *
 *
 * @author Ragab Elsayed
 * @date   15/12/2017
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


}


void print_statistics(uint8  *a ,uint32 N){

}


void print_array(uint8  *a ,uint32 N){

}


uint8 find_median(uint8  *a ,uint32 N){

}



uint8 find_mean(uint8  *a ,uint32 N){

}


uint8 find_maximum(uint8  *a ,uint32 N) {

}


uint8 find_minimum(uint8  *a ,uint32 N){

}

void sort_array(uint8  *a ,uint32 N) {

}/*sort_array*/

