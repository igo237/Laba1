void shift_arr(char* A, int& n, int i, int cell) {

	int j = 0;
	n += cell;
	j = n;
	while (j != i + cell) {
		A[j] = A[j - cell];
		j--;
	}

}
void Transformation_NEO_mix(int& n, char* STR) {
	for (int i = 0; i < n; i++) {
		int NUM = (int)STR[i] - 48;
		if (NUM < 10) {
			if (NUM % 2 != 0) {
				NUM = NUM * 2;
				if (NUM >= 10) {
					shift_arr(STR, n, i, 2);
					STR[i] = '#';
					STR[i + 1] = (char)(NUM / 10) + 48;
					STR[i + 2] = (char)(NUM % 10) + 48;
					i += 2;
				}
				else {
					shift_arr(STR, n, i, 1);
					STR[i] = '#';
					STR[i + 1] = (char)(NUM)+48;
					i++;
				}
			}
			else {
				if (NUM == 0) {
					shift_arr(STR, n, i, 3);
					STR[i] = 'Z';
					STR[i + 1] = 'E';
					STR[i + 2] = 'R';
					STR[i + 3] = 'O';
					i += 3;
				}
				if (NUM == 2) {
					shift_arr(STR, n, i, 2);
					STR[i] = 'T';
					STR[i + 1] = 'W';
					STR[i + 2] = 'O';
					i += 2;
				}
				if (NUM == 4) {
					shift_arr(STR, n, i, 3);
					STR[i] = 'F';
					STR[i + 1] = 'O';
					STR[i + 2] = 'U';
					STR[i + 3] = 'R';
					i += 3;
				}
				if (NUM == 6) {
					shift_arr(STR, n, i, 2);
					STR[i] = 'S';
					STR[i + 1] = 'I';
					STR[i + 2] = 'X';
					i += 2;
				}
				if (NUM == 8) {
					shift_arr(STR, n, i, 4);
					STR[i] = 'E';
					STR[i + 1] = 'I';
					STR[i + 2] = 'G';
					STR[i + 3] = 'H';
					STR[i + 4] = 'T';
					i += 4;
				}
			}
		}

	}
}