#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int x;
    int y;
} scss;

int main() {
    while (1) {
        char line[1000];
        fgets(line, sizeof(line), stdin);
        if (strlen(line) == 0 || strcmp(line, "\n") == 0) {
            break;
        }
        char *token;
        token = strtok(line, " ");
        scss board;
        board.x = atoi(token);
        token = strtok(NULL, " ");
        board.y = atoi(token);
        token = strtok(NULL, " ");
        int m = atoi(token);

        for (int i = 0; i < m; i++) {
            fgets(line, sizeof(line), stdin);
            token = strtok(line, " ");
            int xi = atoi(token);
            token = strtok(NULL, " ");
            int yi = atoi(token);

            if ((xi <= board.x && yi <= board.y) || (xi <= board.y && yi <= board.x)) {
                printf("Sim\n");
            } else {
                printf("Nao\n");
            }
        }
    }
    return 0;
}
