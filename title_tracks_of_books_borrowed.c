#include <stdio.h>
#include<string.h>

int main() {
	FILE *file;
	char title[100];
	
	file =fopen("borrowed_books.txt","a");
	if (file==NULL) {
		printf("Error in opening file\n");
		return 1;
	}
	
	printf("Enter the book tittle");
	fgets(title, sizeof (title), stdin);
	
	title [strcspn(title, "\n")] = '\0';
	
	fprintf (file , "%s\n" , title);
	fclose(file);
	
	printf("Book title successfully stored\n");
	
	return 0;
}