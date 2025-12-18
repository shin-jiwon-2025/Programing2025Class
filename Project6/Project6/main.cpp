#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	char chName[50] = " ";
	int nstudentID = 0;
	float fHeight = 0.0f;
	float fWeight = 0.0f;
	double dBMI = 0.0;

	printf("Input your information (Name, StudentID, Height(m), Weight(kg)): \n");
	int nResScanf = scanf("%s%d%f%f", chName, &nstudentID, &fHeight, &fWeight);
	dBMI = fWeight / (fHeight*fHeight);
	printf("Output nResScanf: %d\n", nResScanf);

	printf("\n=== Result===\n");
	printf("Name: %s\n", chName);
	printf("studentID: %d\n", nstudentID);
	printf("Height: % .2f m\n", fHeight);
	printf("Weight: % .2f kg\n", fWeight);
	printf("Bmi: % .2f\n", dBMI);
	
	return 0;
}