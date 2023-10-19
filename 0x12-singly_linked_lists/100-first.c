#include<stdio.h>

/**
 * myStartupFun - Apply the constructor attribute to myStartupFun() so that it
 *   is executed before main()
 */
void myStartupFun(void) __attribute__ ((constructor));

/**
 * myStartupFun - implementation of myStartupFun
 */
void myStartupFun(void)
{
	printf("You're brave! but smarter, so dont give up,\n");
	printf("I very much comfortable in this coding world!\n");
}

