#include <iostream>
#include <stdlib.h>
#include <cstdlib>
char FindOnceLetter(char *pstring);

int main(void)
{
	//printf("hello world");
	char pstring[] = "dfdsfusu";
	printf("%c",FindOnceLetter(pstring));
	std::cin.get();
	return 0;
}

char FindOnceLetter(char *pstring)
{
	if(!pstring)
	{
		return '\0';
	}
	const int tablesize=256;
	unsigned int hashTable[tablesize];
	for(int i = 0;i < tablesize;++i)
	{
		hashTable[i] = 0;
	}
	char *phashKey=pstring;
	while(*phashKey != '\0' )
	{
		hashTable[*(phashKey++)]++;
	}
	phashKey = pstring;
	while(*phashKey != '\0')
	{
		if(hashTable[*phashKey]==1)
			return *phashKey;
		phashKey++;
	}
	return '\0';
}
