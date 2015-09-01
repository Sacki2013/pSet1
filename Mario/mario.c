#include <stdio.h>
#include <cs50.h>

int main(void) {
  int height, rows, spaces, hashes;

  do {
    /* code */
    printf("Height (1 - 23):\n");
    scanf("%d", &height);
  } while(height < 1 || height > 23);

  for(rows = 0; rows < height; rows++) {
		for(spaces = 0; spaces < height-rows-1; spaces++) {
      printf("%s", " ");
    }
		for(hashes = 0; hashes < rows+2; hashes++) {
			printf("#");
		}
		printf("\n");
	}
}
