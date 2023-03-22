#include "functions.h"

/* REMOVE THIS COMMENT, then write your implementations of the functions in
 * this source file. 
 * Skeleton versions of the functions already appear below.
 */

short compare_rectangles(int l1, int w1, int l2, int w2) {
  int rect1 = l1*w1;
  int rect2 = l2*w2;
  if(l1 < 0|| w1 < 0|| l2 < 0|| w2 < 0) { /* if any of the dimensions are negative return error*/
    return -2;
  } 
  if(rect1 == rect2) {
    return 0;
  } else if(rect1 > rect2) {
    return 1;
  } else if(rect1 < rect2) {
    return -1;
  } 
  return -2;
}

int ith_factor(int a, int b, int i) {
  int smaller;
  int count = 0;
  int j;

  if (i <= 0) { /* returns error if the requested factor is not positive*/
    return -1;
  }
  
  if (a < 0) { /* makes a or b postive if either is a negative number*/
    a = -a;
  }
  if (b < 0) { 
    b = -b;
  }

  if(a <= b) { /* finds smaller of the two inputs*/
    smaller = a;
  } else {
    smaller = b;
  } 

  for(j = 1; j <= smaller; j++) { 
    if(a % j == 0 && b % j == 0) {
      count++;
    } 
    if(count == i) {
      return j;
    }
  }
  return -1;
}

long pell(short n) {
  if(n < 0){ 
    return -1;
  }
  if(n <= 2) {
    return n;
  }
  return 2 * pell(n-1) + pell(n-2);
  
}