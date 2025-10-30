/*
PA106/G/28737/25
Tracy Nekesa 
*/
#include<stdio.h>

#define OCCUPIED 1
#define VACANT 0

int main()
{
    int rooms[5][10]; 
    int i, j;

    printf("Enter room condition (%d = occupied, %d = vacant):\n", OCCUPIED, VACANT);

    // Input room conditions
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            printf("Floor %d, Room %d: ", i + 1, j + 1);
            scanf("%d", &rooms[i][j]);
        }
    }

    // Display room condition grid
    printf("\nRoom Occupancy Grid (1 = occupied, 0 = vacant):\n");
    for (i = 0; i < 5; i++) {
        printf("Floor %d: ", i + 1);
        for (j = 0; j < 10; j++) {
            printf("%d ", rooms[i][j]);
        }
        printf("\n");
    }

    // Calculate and display occupancy summary
    printf("\n=== OCCUPANCY SUMMARY ===\n");
    for (i = 0; i < 5; i++) {
        int occupied_count = 0;
        int vacant_count = 0;
        
        for (j = 0; j < 10; j++) {
            if (rooms[i][j] == OCCUPIED) {
                occupied_count++;
            } else {
                vacant_count++;
            }
        }
        
        printf("Floor %d: %d occupied, %d vacant\n", i + 1, occupied_count, vacant_count);
    }

    // Calculate total occupancy
    int total_occupied = 0;
    int total_vacant = 0;
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 10; j++) {
            if (rooms[i][j] == OCCUPIED) {
                total_occupied++;
            } else {
                total_vacant++;
            }
        }
    }
    
    printf("\nTotal across all floors:\n");
    printf("Occupied rooms: %d\n", total_occupied);
    printf("Vacant rooms: %d\n", total_vacant);
    printf("Occupancy rate: %.1f%%\n", (float)total_occupied / 50 * 100);

    return 0;
}
