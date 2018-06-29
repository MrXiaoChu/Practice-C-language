#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 20

struct part
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
};

typedef struct
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} Part;

void print_part(struct part p);
void print_Part(Part p);

void print_part(struct part p)
{
    printf("Part number: %d\n", p.number);
    printf("part name: %s\n", p.name);
    printf("Quantity on hand: %d\n", p.on_hand);
}

void print_Part(Part p)
{
    printf("Part number: %d\n", p.number);
    printf("part name: %s\n", p.name);
    printf("Quantity on hand: %d\n", p.on_hand);
}

int main()
{

    print_part((struct part)
    {
        528, "Disk Drive", 10
    });

    printf("\n");

    print_Part((Part)
    {
        512, "Memory", 256
    });

    printf("\n");
    system("pause");

    return 0;
}
