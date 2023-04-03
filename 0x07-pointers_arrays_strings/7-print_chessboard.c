/**
 * print_chessboard - takes a 2D array of characters as input
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
	int i;

	int j;

	for (i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
