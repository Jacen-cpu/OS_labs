#include<stdio.h>
int search(char* path, int depth);

int main (int argc, int *argv[]) {
	search("/proc/", 0);
	return 0;
}