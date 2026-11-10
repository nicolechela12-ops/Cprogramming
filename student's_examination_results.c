#include <stdio.h>

struct student {
	char name [50];
	char regNumber[20];
	float totalMarks;
};

int main () {
	FILE *fp;
	struct student student;
	
	fp = fopen("results.dat","rb");
	if (fp==NULL){
		printf("Error in opening result.dat\n");
		return 1;
	}
	
	printf("STUDENT EXAMINATION RESULTS\n");
	printf("-------‐---‐---------------------------\n");
	
	while(fread(&student, sizeof (student),1, fp)==1) 
	{
	printf("srudent name %s\n",student.name);
	printf("total marks %.2f \n",student.totalMarks);
	printf("------------‐----------------------------\n");
	}
	
	fclose(fp);
	
	return 0;
	
}
	