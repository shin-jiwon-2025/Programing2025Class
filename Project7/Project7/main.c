#define _CRT_SECURE_NO_WARNINGS
#pragma warning (disable:4996)
#include <stdio.h>

int main(void)
{

	//1: ���� ���� (�̸�, �й�, Ű, ������, BMI)
	char chName[50] = " ";
	int nStudentID = 99.0;
	float fheight = 999.0;
	float fweight = 999.0;
	double dBMI = 999.0;

	//2: SCANF �� ���� �Է� �ޱ�
	printf("Input your information (Name, StudentID, Height(m), Weight(kg)) : \n");
	int nResScanf = scanf("% s % d % lf % lf", chName, &nStudentID, &fheight, &fweight);

	//3: BMI ���
	dBMI = fweight * fheight;

	//4: ��� ���
	printf("Output nResScanf : %d\n" , nResScanf);

	printf("\n[Result]\n");
	printf("Name: %s\n", chName);
	printf("StudentID: %d\n", nStudentID);
	printf("Height: %.2lf m\n", fheight);
	printf("Weight: %.2lf kg\n", fweight);
	printf("BMI: %.2lf \n", dBMI);

	return 0;
}