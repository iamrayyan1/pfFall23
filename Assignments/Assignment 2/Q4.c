/*
* Programmer: Rayyan Merchant
* Date: 31st Oct 2023
* Description: Finding a path in a maze game
* Related Files:
*/

/*
#include <stdio.h>

char maze[5][5] = 
{
    {'S', 'O', 'O', 'W', 'W'},
    {'O', 'W', 'O', 'O', 'W'},
    {'O', 'O', 'O', 'W', 'O'},
    {'W', 'W', 'O', 'W', 'O'},
    {'W', 'W', 'O', 'E', 'W'}
};

int valid(int x, int y) 
{
    return x >= 0 && x < 5 && y >= 0 && y < 5 && maze[x][y] != 'W';
}

int path(int x, int y) 
{
    if (x < 0 || x >= 5 || y < 0 || y >= 5 || maze[x][y] == 'W') 
    {
        return 0;  
    }

    if (maze[x][y] == 'E') 
    {
        printf("(%d,%d)  ", x, y);
        return 1;
    }

    if (maze[x][y] == 'O') 
    {
        printf("(%d,%d), ", x, y);
        maze[x][y] = 'V'; 

        if (path(x + 1, y) || path(x, y + 1)) 
        {
            return 1;
        }

        maze[x][y] = 'O';  
    }

    return 0; 
}

int main(void) 
{
    printf("The path must be as following: \n");
    path(0, 0);
    printf("\n");
    return 0;
}
*/




#include<stdio.h>
int main (void)
{

        char maze[5][5] = { 
                            {'S', 'O', 'O', 'W', 'W'},
                            {'O', 'W', 'O', 'O', 'W'},
                            {'O', 'O', 'O', 'W', 'O'},
                            {'W', 'W', 'O', 'W', 'O'},
                            {'W', 'W', 'O', 'E', 'W'}
                          };
                          
    int row = 0, col = 0;
    printf("The path must be as following: \n");

    
    while (  maze[row][col] != 'E' ) 
	{
            if (row+1 < 5 && maze[row+1][col] != 'W')
			{
                row++;
                printf("(%d,%d), ",row,col);
            }
			else if ( col+1 < 5 && maze[row][col+1] != 'W')
			{
                col++;
                printf("(%d,%d)  ",row,col);
            } 
			else 
			{
			printf("no path to exit exists");
			break;
            }

        }
}
 
