#include <stdio.h>
#include "direction.h"

int main() {
    printf("Welcome to BattleShip 2.0!\n");

    direction dir = getDirection(0);
    printf("%d and %d", dir.x, dir.y);

    return 0;
}
