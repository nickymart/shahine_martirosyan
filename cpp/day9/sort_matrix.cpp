#include <iostream>
#include "lib/matrix.h"

using namespace std;
int main() {
	int height = 5;
	int width = 5;
	int**  matrix = new int*[height];
	cout << "INPUT:" << endl;
	input_matrix(matrix, width, height);
	cout << "OUTPUT:" << endl;
	sort_matrix(matrix, width, height);
	print_matrix(matrix, width, height);
	return 0;

}
