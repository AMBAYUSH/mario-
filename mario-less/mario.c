// #include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, row, column, space;
    do
    {
				printf("Enter Height: ");
				scanf("%d", &height);
				if (height > 8) {
					printf("Please enter height less than 8.\n");
				} else if (height < 1) {
					printf("Please enter height more than 1.\n");
				}
    }
    while (height < 1 || height > 8);

    for (row = 0; row < height; row++)
    {
        for (space = 0; space < height - row-1; space++)
        {
            printf(" ");
        }
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");

    }
}
