#include <iostream>
using namespace std;

int main()
{
    int matrix[4][4];
    int n = 4;
    int sum[8] = {0};
    for ( int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
            //Above the second diagonal
            if (j < (n - i - 1)) {
                sum[0] += matrix[i][j];
            }
            //Above the first diagonal
            if (j > i) {
                sum[1] += matrix[i][j];
            }
            //Below the first diagonal
            if (j < i) {
                sum[2] += matrix[i][j];
            }
            //Below the second diagonal
            if (n < i + j + 1) {
                sum[3] += matrix[i][j];
            }
            //Above the first and second diagonals
            if (j < (n - i - 1) && j > i) {
                sum[4] += matrix[i][j];
            }
            // To the right of the first and second diagonals
            if (j < (n - i - 1) && j < i) {
                sum[5] += matrix[i][j];
            }
            // To the left of the first and second diagonals
            if (n < i + j + 1 && j > i) {
                sum[6] += matrix[i][j];
            }
            //Below the first and second diagonals
            if (n < i + j + 1 && j < i) {
                sum[7] += matrix[i][j];
            }
        }
    }
    cout << "Above the second diagonal : " << sum[0] << endl;
    cout << "Above the first diagonal : " << sum[1] << endl;
    cout << "Below the first diagonal : " << sum[2] << endl;
    cout << "Below the second diagonal : " << sum[3] << endl;
    cout << "Above the first and second diagonals : " << sum[4] << endl;
    cout << "To the right of the first and second diagonals : " << sum[5] << endl;
    cout << "To the left of the first and second diagonals : " << sum[6] << endl;
    cout << "Below the first and second diagonals : " << sum[7] << endl;
    return 0;
}
