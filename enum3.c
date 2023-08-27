#include <stdio.h>

enum deck
{
    club = 0,
    diamonds = 5,
    hearts = 10,
    spades = 20
} card;

int main()
{
    card = spades;
    printf("Size of var %d", sizeof(card));
    return 0;
}