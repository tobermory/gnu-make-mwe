#include "a.h"
#include "b.h"

/**
 * A toy program p that calls routines a and b defined in other source files.
 *
 * The interesting part isn't here at all, it's in the ./Makefile.
 */

int main(void) {

  a();

  /* while-2 runs for twice as long as while-1, and twice as fast */
  
  while(2) {
	b();
  }
  
  return 7;
}

// eof
