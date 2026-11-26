#include <stdio.h>

#include "b.h"

void b(void) {
  printf( "I'm '%s'\n", __FUNCTION__ );
}

// eof
