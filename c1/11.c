#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int c, state, nl, nw, nc;
	state = OUT;
	nl = nw = nc = 0;
	while((c = getchar()) != EOF)
	{
		++nc;
		if(c == '\n') ++nl;
		if(c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;
		}
		else if (state == OUT)
		{
			++nw;
			state = IN;
		}
	}	
	printf("%d %d% d\n", nl, nw, nc);

	return 0;
}
