#include <stdio.h>
#include <assert.h>
#include "functions.h"

/* CMSC 216, Spring 2023, Project #1
 * Public test 1 (public1.c)
 *
 * Tests calling ith_factor(1, 1, 1).
 *
 * (c) Larry Herman, 2023.  You are allowed to use this code yourself, but
 * not to provide it to anyone else.
 */

int main(void) {
  assert(ith_factor(1, 1, 1) == 1);
  assert(ith_factor(0, 1, 1) == -1);
  assert(ith_factor(1, 1, -1) == -1);
  assert(ith_factor(624, 48, 7) == 12);
  assert(ith_factor(-624, 48, 7) == 12);
  assert(ith_factor(624, -48, 7) == 12);
  assert(ith_factor(-624, -48, 7) == 12); 
  assert(ith_factor(6240, 288, 12) == 96);
  assert(ith_factor(6240, 288, 13) == -1);

  printf("\nThis test has passed!\n");

  return 0;
}
