#include <iostream>
#include <stdio.h>
#include <stdlib.h>
void printPoint(int *p);
int main()
{
	int value = 5;
        int* intPoint = &value;
	printPoint(intPoint);
        printf("vlaue = %d",value);
	std::cin.get();
	return 0;
}

void printPoint(int *pValue)
{
        *pValue=7;
	printf("the value = %d",*pValue);
}
