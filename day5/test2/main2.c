#include <stdio.h>

int main(int argv,char* argc[])
{
	// printf("argc %c\n",char[0]);
	for(int a=0;a<argv;a++){
		printf("argc[%d] is %s\n",a,argc[a]);
	}
	return 0;
}
