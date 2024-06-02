#include <stdio.h>
#include <conio.h> // for getch() function

#define BOARD_SIZE 10

// Function to draw the game board
void drawBoard(int pacmanX, int pacmanY) {
    system("cls"); // clear screen
    
    // Draw the game board
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (i == pacmanY && j == pacmanX) // Draw Pac-Man at its current position
                printf("C ");
            else
                printf(". ");
        }
        printf("\n");
    }
}

int main() {
    int pacmanX = BOARD_SIZE / 2; // Initial X position of Pac-Man
    int pacmanY = BOARD_SIZE / 2; // Initial Y position of Pac-Man
    char move; // Variable to store user input
    
    // Main game loop
    while (1) {
        drawBoard(pacmanX, pacmanY); // Draw the game board with Pac-Man
        
        // Get user input
        printf("\nUse WASD keys to move Pac-Man. Press 'q' to quit.\n");
        move = getch(); // Get a character without waiting for Enter key
        
        // Move Pac-Man based on user input
        switch (move) {
            case 'w': // Up
                pacmanY = (pacmanY - 1 + BOARD_SIZE) % BOARD_SIZE; // wrap around the top
                break;
            case 's': // Down
                pacmanY = (pacmanY + 1) % BOARD_SIZE; // wrap around the bottom
                break;
            case 'a': // Left
                pacmanX = (pacmanX - 1 + BOARD_SIZE) % BOARD_SIZE; // wrap around the left
                break;
            case 'd': // Right
                pacmanX = (pacmanX + 1) % BOARD_SIZE; // wrap around the right
                break;
            case 'q': // Quit the game
                printf("\nGoodbye!\n");
                return 0; // Exit the program
            default:
                printf("\nInvalid input!\n");
        }
    }

    return 0;
}

