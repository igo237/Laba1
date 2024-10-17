#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Transformation.h"
#include <stdio.h>
#include <string.h>

void part1() {

	char char_arr[100] = {0};
	char ltr = 0;
	int n = 0;

	std::cout << " Enter string: ";

	while (ltr != '\n') {
		ltr = getchar();
		char_arr[n] += ltr;
		n++;
	}

	Transformation_NEO_mix(n, char_arr);
	
	for (int i = 0; i < n; i++) {
		std::cout << char_arr[i];
	}
}

void part2() {
	char line[100];
	int n = 0;

	std::cout << " Enter string: ";

	fgets(line, 100, stdin);
	n = strlen(line);

	Transformation_NEO_mix(n, line);

	for (int i = 0; i < n; i++) {
		std::cout << line[i];
	}
}

void part3() {
	char file_line[100];
	int n = 0;
	FILE* file;

	file = fopen("part3.txt", "r");
	fgets(file_line, 100, file);
	n = strlen(file_line);
	Transformation_NEO_mix(n, file_line);
	fclose(file);

	file = fopen("part3.txt", "w");
	fputs(file_line, file);
	fclose(file);
}

int main()
{
	part1();
	part2();
	part3();
}