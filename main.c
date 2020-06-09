#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>



int main() {
	printf("Input  size of password \n");
	int size;
	scanf_s("%d", &size);
	char* mass;
	mass = (char*)malloc(sizeof(char) * (size + 1));


	int i = 0;
	while (mass[i] != 13) { // 13 is the code of enter
		mass[i] = getch();
		if ((mass[i] == 8) && (i > 0)) { //8 is the code of backspace
			i--;
			printf("\b \b");
		}
		else {
			if ((mass[i] != 8) && (mass[i] != 13)) {
				printf("*");
				i++;
			}
		}
	}

	mass[size] = 0;

	printf("\n  password: ");
	for (int i = 0; i < size; i++) {
		printf_s("%c", mass[i]);
	}
	free(mass);
	system("pause");
	return 0;

}