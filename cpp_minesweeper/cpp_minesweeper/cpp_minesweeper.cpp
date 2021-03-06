// cpp_minesweeper.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include <stdio.h>
#include <iostream>

using namespace std;



int** create_grid(unsigned height, unsigned width)
{
	int** board = 0;
	board = new int*[height];

	for (int h = 0; h < height; h++)
	{
		board[h] = new int[width];

		for (int w = 0; w < width; w++)
		{
			board[h][w] = 0;
		}
	}
	return board;
}


int main()
{
	int height;
	int width;
	
	printf("plz input height: ");
	cin >> height;
	printf("plz input width: ");
	cin >> width;
	

	int** newboard = create_grid(height, width);
	printf("newboard with size [%i,%i] created.\n\n", height, width);

	for (int h = 0; h < height; h++)
	{
		for (int w = 0; w < width; w++)
		{
			printf("%i,", newboard[h][w]);
		}
		printf("\n");
	}



	//delete after to save space
	for (int h = 0; h < height; h++)
	{
		delete[] newboard[h];
	}
	delete[] newboard;
	newboard = 0;
	printf("Deleted.\n");

	return 0;
    
}

