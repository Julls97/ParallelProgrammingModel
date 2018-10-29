#include <omp.h>
#include <stdio.h>

//int main() {
//	printf("Number of threads: ");
//	int n, rank;
//	scanf_s("%d", &n);
//
//#pragma omp parallel num_threads(n) private(rank)
//{
//	rank = omp_get_thread_num();
//	printf("I am %d thread.\n", rank);	
//}
//}