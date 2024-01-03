
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthread.h>
#include <pthreadUtils.h>
#include <Pipes.h>
#include <pipeHandler.h>
#ifndef SW
#include "vhdlCStubs.h"
#endif

int main(int argc, char* argv[])
{
	uint8_t a,b,quotient;

	quotient = shift_and_subtract_div(12,6);
	fprintf(stdout, "shift_and_subtract_div(12,6) = %d\n",quotient);
	return(0);
}
