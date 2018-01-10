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
 * @file  stats.h
 * @brief statistics header file
 *
 * this is the file or module file  that's relate to statistics of an array ,
 * it provide 7 function for calculate some statistics on the an array :
 * -mean   of the array
 * -median of the array
 * -maximum element in the array
 * -minimum element in the array
 * -sort the array from largest to smallest
 *
 * @author Ragab Elsayed
 * @date 15/12/2017
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/*User Define  Datatype*/
typedef unsigned char uint8 ;
typedef unsigned int  uint32 ;




/**
 * @brief prints the statistics of an array including minimum,maximum, mean, and median.
 *
 * this function take as input two argument prints , one unsigned 8-bit char pointer,
 * other unsigned 32-bit integer.
 * it will print all the statistics of any array that passed pointer to it as input, then
 * invokes all the this function .
 * 		find_median()function to return median , find_mean()function to return mean,
 * 		find_maximum() function to return maximum value in the array,
 * 		find_minimum() function to return minimun value in the array.
 * and print all this infromation
 *
 * @param	 A  8-bit unsigned char pointer
 * @param	 N	32-bit unsigned integer
 * @return void doesn't return value
 */
void print_statistics(uint8  *a ,uint32 N);

/**
 * @brief print all the elements of the array
 *
 * this function take as input two argument prints , one unsigned 8-bit char pointer,
 * other unsigned 32-bit integer. this will loop on the all element of the array and print it on screen
 *
 * @param	 A  8-bit unsigned char pointer
 * @param	 N	32-bit unsigned integer
 * @return void doesn't return value
 */
void print_array(uint8  *a ,uint32 N);

/*
 *@brief  find the median of array
 *
 * this function take as input two argument prints , one unsigned 8-bit char pointer,
 * other unsigned 32-bit integer.this will return the mid element in the array
 *
 * @param	 A  8-bit unsigned char pointer
 * @param	 N	32-bit unsigned integer
 * @return   the mid element
 */
uint8 find_median(uint8  *a ,uint32 N);

/**
 *@brief  find the mean of array
 *
 * this function take as input two argument prints , one unsigned 8-bit char pointer,
 * other unsigned 32-bit integer.this will return the average element of  the array .
 *
 * @param	 A  8-bit unsigned char pointer
 * @param	 N	32-bit unsigned integer
 * @return   the median value
 */
uint8 find_mean(uint8  *a ,uint32 N);

/**
 * @brief find the maximum element in array
 * this function take as input two argument prints , one unsigned 8-bit char pointer,
 * other unsigned 32-bit integer.this will return the maximum element in the array.
 *
 * @param	 A  8-bit unsigned char pointer
 * @param	 N	32-bit unsigned integer
 * @return   the maximum element in the array
 */

uint8 find_maximum(uint8  *a ,uint32 N);
/**
 * @brief find the maximum element in array
 * this function take as input two argument prints , one unsigned 8-bit char pointer,
 * other unsigned 32-bit integer.this will return the minimum element in the array.
 *
 * @param	 A  8-bit unsigned char pointer
 * @param	 N	32-bit unsigned integer
 * @return   the minimum element in the array
 */
uint8 find_minimum(uint8  *a ,uint32 N);

/**
 * @brief  sort the array from largest to smallest
 * this function take as input two argument prints , one unsigned 8-bit char pointer,
 * other unsigned 32-bit integer.this will sort the array from largest to smallest,
 * and it will use the bubble sort algorithm.so complicity will be O(n*n).
 *
 * @param	 A  8-bit unsigned char pointer
 * @param	 N	32-bit unsigned integer
 * @return   the minimum element in the array
 */
void sort_array(uint8  *a ,uint32 N);

#endif /* __STATS_H__ */
