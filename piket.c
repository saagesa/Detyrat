#include <stdio.h>

int main() {

    int piket;

    printf("Ju lutem vendosni numrin e pikeve!\n");
    printf("Piket: ");

    scanf("%d", &piket);

    printf("\n");
    switch ((piket/10))  {
        case 10:
            printf("Nota A");
            break;
        case 9:
            printf("Nota A");
            break;
        case 8:
            printf("Nota B");
            break;
        case 7:
            printf("Nota C");
            break;
        case 6:
            printf("Nota D");
            break;
        default:
            printf("Nota F");
            break;
    }

    return 0;
}

