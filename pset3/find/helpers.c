/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    for(int i = 0; i < n; i++) {
        if (values[i] == value) {
            return true;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int arr[], int n)
{
    for (int i = n; i >= 0; i--) {
        
        for (int j = 0; j < i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int x = 0;
                x = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = x;
            }
        }
    }
    
    return;
}