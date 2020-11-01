#include<stdio.h>
#include<windows.h>
#include<time.h>
void shuffle(int *array) {
	for (int i = 0; i < 5; i++) {
		int j = rand() % (i + 1);
		int t = array[i];
		array[i] = array[j];
		array[j] = t;
	}
}
int main() {
	srand(time(nullptr));
	int a[6];
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &a[i]);
	}
	//size_t len = sizeof(a) / sizeof(a[0]);
	if (*a > 0 && *a != NULL)
	{
		shuffle(a);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ",a[i]);
	}
	return 0;
}