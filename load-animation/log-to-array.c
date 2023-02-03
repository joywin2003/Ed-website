#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv){
	FILE *ar = fopen(*(argv + 1), "r");
	FILE *op = fopen(*(argv + 2), "w+");
	if (op == NULL || ar == NULL){
		printf("Unable to open file(s)\n");
		return 1;
	}
	char *line = malloc(200 * sizeof(char));
	while ((fscanf(ar, "%[^\n]%*c", line)) != EOF){
		fputc('"', op);
		fprintf(op, "%s", line);
		fprintf(op, "\",");
	}
	free(line);
	return 0;
}