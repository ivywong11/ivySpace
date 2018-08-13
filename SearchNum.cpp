bool searchNum(int numbers[][],int rows,int cols,int num)
{
	if(NULL == numbers|| rows < 1 || cols < 1)
		return false;
	int row = 0;
	int col = cols - 1;
	while(row<rows && col >= 0)
	{
		int cornor = numbers[row][col]
		if(cornor == num)
			return true;
		esle if(cornor > num)
			col--;
		else
			row++
	}
	return false;
}
