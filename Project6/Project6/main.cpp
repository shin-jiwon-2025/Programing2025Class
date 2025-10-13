#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	char chName[50] = " ";
	int nstudentID = 99.0;
	float fHeight = 999.0f;
	float fWeight = 999.0f;
	double dBMI = 999.0;

	printf("이름, 학번, 키(m),몸무게(kg)를 입력하세요: \n");
	int nResscanf = scanf("%s%d%f%f", Name, &StudentID, &Height, &Weight);
	dBMI = fHeight*fWeight;
	printf("\")


	
	return 0;
}