#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* ����� ���� Ű�� �������� �Է¹޾� Ű�� �ִ񰪰� �ּڰ�, ��, ����� ���ϴ� ���α׷� */

const char* name[10] = { "��ö��", "�ڹμ�", "������", "������", "�迵��", "��ö��", "��浿", "������", "���⸮", "�ɱ浿" };

int max_height(const int height[], int people) {
	int max = height[0];

	for (int i = 0; i < people; i++) {
		if (height[i] > max) {
			max = height[i];
		}
	}

	return max;
}

int min_height(const int height[], int people) {
	int min = height[0];

	for (int i = 0; i < people; i++) {
		if (height[i] < min) {
			min = height[i];
		}
	}

	return min;
}

int sum_height(const int height[], int people) {
	int sum = 0;

	for (int i = 0; i < people; i++) {
		sum += height[i];
	}

	return sum;
}

double avg_height(int sum, int people) {
	double avg = (double)sum / people;
	printf("%.2f\n", avg);

	return avg;
}

int main(void) {
	unsigned people;

	srand((unsigned)time(NULL));

	people = rand() % 10 + 1;
	
	int* height = calloc(people, sizeof(int));

	const char* use_name[10];

	for (int i = 0; i < people; i++) {
		int rand_height = rand() % 41 + 150;

		printf("%s : %d\n", name[i], rand_height);
		height[i] = rand_height;
	}

	printf("%d���� ��� �� ���� ū Ű�� %dcm �Դϴ�.\n", people, max_height(height, people));
	printf("%d���� ��� �� ���� ���� Ű�� %dcm �Դϴ�.\n", people, min_height(height, people));
	
	int sum = sum_height(height, people);
	printf("%d���� Ű ���� %dcm �Դϴ�.\n", people, sum);
	printf("%d���� Ű ����� %.2fcm �Դϴ�.\n", people, avg_height(sum, people));
}