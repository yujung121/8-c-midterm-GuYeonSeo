#include <stdio.h>
#include "grade_funcs.h"

#define SIZE 10

// ���� �Լ�
int main() {
    // �л� ���� �迭
    int grades[SIZE] = { 85, 70, 55, 90, 45, 60, 78, 88, 92, 49 };

    // ��� ���� ���
    float avg = calculate_average(grades, SIZE);
    printf("Average grade : %.1f\n", avg);

    // �ְ����� ������ ã��
    int min, max;
    find_min_max(grades, SIZE, &min, &max);
    printf("Highest grade : %d\nLowest grade : %d\n\n", max, min);

    // ��պ��� ���� ������ ���� ���� ���
    printf("Grades above average : ");
    for (int i = 0; i < SIZE; i++) {
        if (grades[i] > avg) {
            printf("%d ", grades[i]);
        }
    }
    printf("\n");

    printf("Grades below average : ");
    for (int i = 0; i < SIZE; i++) {
        if (grades[i] < avg) {
            printf("%d ", grades[i]);
        }
    }
    printf("\n\n");

    // �հ�/���հ� �л� �� ī��Ʈ
    int pass, fail;
    count_pass_fail(grades, SIZE, &pass, &fail);
    printf("Number of students passing : %d\nNumber of students gailing : %d\n", pass, fail);

    return 0;
}

// ��� ���� ��� �Լ�
float calculate_average(int grades[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += grades[i];
    }
    return (float)sum / size;
}

// �ְ� ������ ���� ���� ã�� �Լ�
void find_min_max(int grades[], int size, int* min, int* max) {
    *min = grades[0];
    *max = grades[0];
    for (int i = 1; i < size; i++) {
        if (grades[i] < *min) {
            *min = grades[i];
        }
        if (grades[i] > *max) {
            *max = grades[i];
        }
    }
}

// �հ�/���հ� �л� �� ī��Ʈ �Լ�
void count_pass_fail(int grades[], int size, int* pass, int* fail) {
    *pass = 0;
    *fail = 0;
    for (int i = 0; i < size; i++) {
        if (grades[i] >= 60) {
            (*pass)++;
        }
        else {
            (*fail)++;
        }
    }
}