#ifndef GRADE_FUNCS_H
#define GRADE_FUNCS_H

// 평균 성적 계산 함수 선언
float calculate_average(int grades[], int size);

// 최고점과 최저점 찾기 함수 선언
void find_min_max(int grades[], int size, int* min, int* max);

// 합격/불합격 카운트 함수 선언
void count_pass_fail(int grades[], int size, int* pass, int* fail);

#endif
