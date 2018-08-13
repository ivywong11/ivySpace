#include <iostream>
#include <stdlib.h>
bool findRepeatNumber(int pNumbers[],int length,int *pTargergetnum);

int main(void)
{
	bool result ;
	int numbers[]={2,3,1,0,4,5,6};
	int length = sizeof(numbers)/sizeof(int);
	int pNum;
	result = findRepeatNumber(numbers,length,&pNum);
	if(result)
		printf("exsitd,the number = %d",pNum);
	else
		printf("not exsit,pnum = %d",pNum);
	std::cin.get();
	//system("");
	return 0;
}

bool findRepeatNumber(int pNumbers[],int length,int *pTargetnum)
{
	if(NULL == pNumbers || length <= 0)
		return false;
	for(int i=0;i<length-1;i++)
	{
		if(pNumbers[i]<0 || pNumbers[i]>length-1)
			return false;
	}
	for(int i=0;i<length-1;++i)
	{
		while(pNumbers[i]!=i)
		{
			int value = pNumbers[i];
			if(value == pNumbers[value])
			{
				*pTargetnum = value;
				return true;
			}
			int temp = pNumbers[value];
			pNumbers[value] = pNumbers[i];
			pNumbers[i] = temp;
		}
	}
	return false;
}
