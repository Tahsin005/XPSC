#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define SIZE 8

// Function to print the current state of the grid
void printGrid(int playerX, int playerY, int grid[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i == playerX && j == playerY) {
                printf("P "); // Player's position
            } else if (grid[i][j] == 1) {
                printf("B "); // Bomb
            } else {
                printf(". "); // Empty cell
            }
        }
        printf("\n");
    }
}

int main() {
    // Seed the random number generator
    srand(time(NULL));

    int playerX = 0;
    int playerY = 0;
    int bombX, bombY;

    // Initialize the grid with bombs at random positions (excluding 7, 7)
    int grid[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            grid[i][j] = 0; // Initialize as empty
        }
    }

    // Place some random bombs (you can modify this)
    int numBombs = 10;
    for (int i = 0; i < numBombs; i++) {
        bombX = rand() % SIZE;
        bombY = rand() % SIZE;

        // Ensure there are no bombs in (7, 7)
        while (bombX == 7 && bombY == 7) {
            bombX = rand() % SIZE;
            bombY = rand() % SIZE;
        }

        grid[bombX][bombY] = 1; // 1 represents a bomb
    }

    printf("Welcome to the game! Your goal is to reach (7, 7) while avoiding bombs.\n");

    while (playerX != SIZE - 1 || playerY != SIZE - 1) {
        printGrid(playerX, playerY, grid);

        char move;
        printf("Enter your move (u/d/l/r): ");
        scanf(" %c", &move);

        // Calculate the new position based on the move
        int newX = playerX;
        int newY = playerY;

        switch (move) {
            case 'u':
                newX--;
                break;
            case 'd':
                newX++;
                break;
            case 'l':
                newY--;
                break;
            case 'r':
                newY++;
                break;
            default:
                printf("Invalid move. Try again.\n");
                continue;
        }

        // Check if the new position is valid
        if (newX < 0 || newX >= SIZE || newY < 0 || newY >= SIZE) {
            printf("Invalid move. You can't go outside the grid.\n");
            continue;
        }

        // Update the player's position
        playerX = newX;
        playerY = newY;

        // Check if the player hit a bomb
        if (grid[playerX][playerY] == 1) {
            printf("Oops! You hit a bomb. Game over!\n");
            break;
        }
    }

    if (playerX == SIZE - 1 && playerY == SIZE - 1) {
        printf("Congratulations! You reached (7, 7) and won the game!\n");
    }

    return 0;
}
