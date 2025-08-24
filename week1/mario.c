#include <cs50.h>
#include <stdio.h>

void print_dots(int spaces);
void print_row(int bricks);
int main(void)
{
    // prompt user for height of pyramid int, height needs to be from 1-8 inlcusive
    int height;
    do
    {
        height = get_int("Enter the height of the pyramid: ");
    }
    while (height < 1 || height > 8);

    // print the pyramid
    for (int i = 0; i < height; i++)
    {
        print_dots(height - (i + 1));
        print_row(i + 1);
    }
}

void print_dots(int spaces)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
}

void print_row(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}
