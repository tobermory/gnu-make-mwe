#include <stdio.h>

#include "a.h"

void a(void) {
  printf( "I'm '%s'\n", __FUNCTION__ );
}

// eof
