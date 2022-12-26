#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int h = 1; h != (height + 1); h++)
    {
        //print x repeatedly until i reach height
        for (int i = 0; i != (height - h); i++)
        {
            printf(" ");
        }
        //print # h number of times
        for (int j = 0; j != h; j++)
        {
            printf("#");
        }
        //print 2 space
        printf("  ");
        //print same pattern in reverse
        for (int r = 0; r != h; r++)
        {
            printf("#");
        }
        printf("\n");
    }
}