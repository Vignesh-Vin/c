#include <stdio.h>
int main()
{
	int count = 1, hi = 11, lineNo = 0;
	for (int i = 1; i < hi; ++i)
	{
		//if(i % 2 != 0 /*|| i == 1*/) {
			//lineNo++;
			//count = ((hi - lineNo) / 2);
			//printf("% *d", count, 0);
			printf("%0*d\n", i, 0);
		//}
	}
	return 0;
}