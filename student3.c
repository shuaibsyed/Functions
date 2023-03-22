#include <stdio.h>
#include <assert.h>
#include "functions.h"

/* CMSC 216, Spring 2023, Project #1
 * Public test 3 (public3.c)
 *
 * Tests calling pell(0).
 *
 * (c) Larry Herman, 2023.  You are allowed to use this code yourself, but
 * not to provide it to anyone else.
 */

int main(void) {
  assert(pell(0) == 0);
  assert(pell(1) == 1);
  assert(pell(2) == 2);
  assert(pell(3) == 5);
  assert(pell(4) == 12);
  assert(pell(5) == 29);
  assert(pell(-1) == -1);
  assert(pell(20) == 15994428);

  printf("\nThis test has passed!\n");

  return 0;
}
