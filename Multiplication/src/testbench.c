
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
	uint8_t a,b,product;

	product = shift_and_add_mul(12,12);
	fprintf(stdout, "shift_and_add_mul(12,12) = %d\n", product);

	return(0);
}
