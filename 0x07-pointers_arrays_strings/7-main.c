#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for ALX School students
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{

  char board[8][8] ={
		     {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
		     {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		     {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		     {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		     {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		     {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		     {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		     {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
  };

  print_chessboard(board);

return (0);

}
