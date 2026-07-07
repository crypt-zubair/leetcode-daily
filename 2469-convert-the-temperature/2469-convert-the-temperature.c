/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
double*a=(double*)malloc(2*sizeof(double));
a[0]= celsius+273.15;
a[1]= celsius * 1.80 + 32.00;
*returnSize=2;
return a;
}