#include <iostream>
#include "lib/matrix.h"

using namespace std;
int main() {
	int height = 5;
	int width = 5;
	int**  matrix = new int*[height];
	input_matrix(matrix, width, height);
	cout << endl;
	sort_matrix(matrix, width, height);
	print_matrix(matrix, width, height);
	return 0;

}
