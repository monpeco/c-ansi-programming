#include <stdio.h>

#define IN 1	/* inside of a word */
#define OUT 0 	/* outside of a word */

/* Counts the amount of words, lines and characteres in imput */

main()
{
	int c, nl, nw, nc state;

	state = OUT;
	nl = nw = nc = 0;
	while((c = getchar()) != EOF ){
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT){
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d", nl, nw, nc);
}

