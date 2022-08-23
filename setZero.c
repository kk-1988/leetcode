/*

输入：
[
  [1,1,1],
  [1,0,1],
  [1,1,1]
]
输出：
[
  [1,0,1],
  [0,0,0],
  [1,0,1]
]

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//编写一种算法，若M × N矩阵中某个元素为0，则将其所在的行与列清零
void setZeroes(int** matrix, int matrixSize, int* matrixColSize)
{


}

int main(int argc, char *argv[])
{
    int matrix[3][3];
    memset(matrix, 0, sizeof(matrix));
    matrix[0][0] = 1;
    matrix[0][1] = 1;
    matrix[0][2] = 1;
    matrix[1][0] = 1;
    matrix[1][1] = 0;
    matrix[1][2] = 1;
    matrix[2][0] = 1;
    matrix[2][1] = 1;
    matrix[2][2] = 1;

    setZeroes(matrix, );
    return 0;
}