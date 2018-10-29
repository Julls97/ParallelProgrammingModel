#include <omp.h>
#include <stdio.h>

//int main() {
//	printf("Number of threads: ");
//	int n;
//	scanf_s("%d", &n);
//
//#pragma omp parallel num_threads(n) 
//{
//	if (omp_get_thread_num() % 2 == 0) 
//		printf("I am %d thread from %d threads!\n", omp_get_thread_num(), omp_get_num_threads());
//}
//}