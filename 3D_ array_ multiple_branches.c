/*
Tracy Nekesa
PAG106/G/28737/25
3Darray
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;

    srand(time(0));

    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
            }
        }
    }

    for (branch = 0; branch < 3; branch++) {
        int branchOccupied = 0;
        printf("\nBranch %d\n", branch + 1);

        for (floor = 0; floor < 5; floor++) {
            int floorOccupied = 0;

            for (room = 0; room < 10; room++) {
                if (chain[branch][floor][room] == 1) {
                    floorOccupied++;
                }
            }

            printf("Floor %d: %d occupied, %d vacant\n",
                   floor + 1, floorOccupied, 10 - floorOccupied);

            branchOccupied += floorOccupied;
        }

        printf("Total occupied rooms in branch %d: %d\n", branch + 1, branchOccupied);
        totalOccupied += branchOccupied;
    }

    printf("\nTotal occupied rooms in all branches: %d\n", totalOccupied);

    return 0;
}

