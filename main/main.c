#include <stdio.h>

void debug_of_logging(void);
char * announce_student(void);


int main(void)
{
#ifdef CONFIG_FOO
	printf("CONFIG_FOO is defined\n");
#else
	printf("CONFIG_FOO is not defined\n");
#endif

#ifdef CONFIG_BAR
	printf("CONFIG_BAR is defined\n");
#else
	printf("CONFIG_BAR is not defined\n");
#endif

printf("Not empty put whatever here\n");

	debug_of_logging();

	#ifdef CONFIG_LNX500_TEST
		printf(announce_student());
		printf("\n");
    #endif

	return 0;
}

