#include <stdio.h>

#define LIMIT_DIGIT_10 8 // 10진법의 경우 최대 8자리 수까지 표현 가능
#define LENGTH_BIT_ARRAY 32 // 비트 배열의 길이
#define LENGTH_RADIX_ARRAY 10 // 진법 변환 배열의 길이
#define LENGTH_NxN 3 // NxN 행렬의 크기
#define LENGTH_2x2 2 // 2x2 행렬의 크기

void print_1d_array(int array[], int length) 
{
  int i;
  for (i = 0; i < length; i++) {
      printf("%d ", array[i]);
  }
  printf("\n");
}

void print_2d_array(int array[][LENGTH_NxN], int rows, int cols) 
{
  int i, j;
  for (i = 0; i < rows; i++) {
      for (j = 0; j < cols; j++) {
          printf("%d ", array[i][j]);
      }
      printf("\n");
  }
}

/******************************** exam 1 ********************************/
void digit10_to_array_reverse(int number, int digits[], int length) 
{
  int i;
  int b;
  int a=1;
  
  for(i=0; i<10; i++){ //최대 10자릿수만 출력
      b=a*10;
      if(a<=x && x<b){ //10의 i승보다 크고 10의i+1승보다 작을때
          return (i+1); //자릿수 리턴(i+1)
          break;      //리턴 후 break(안써도 됨됨)
      }
      else{
          a=a*10;     //거짓일때 10의 계수 올림
      }
}

void digit10_to_array_forward(int number, int digits[], int length) 
{
  int sum = 0;
  int i;
  int q=1;

  for(i=0; i<4; i++){ 
      q=10*q;
  }

  for(i=0; i<4; i++){
      sum=number/q; //10000 나누기 10000의 몫 1이 sum에 저장
      number=number%q;                 //나머지 저장
      q=q/10;
      sum+=sum;                
  }
return sum;
}
void exam1(void) 
{
    int number = 34198245; 
    int digits_A[LIMIT_DIGIT_10]={0,}; 
    int digits_B[LIMIT_DIGIT_10]={0,}; 
    int size = 0;

    // 1-A 결과 확인
    digit10_to_array_reverse(number, digits_A, LIMIT_DIGIT_10);
    print_1d_array(digits_A, LIMIT_DIGIT_10);

    // 1-B 결과 확인
    digit10_to_array_forward(number, digits_B, LIMIT_DIGIT_10);
    print_1d_array(digits_B, LIMIT_DIGIT_10);
}

/******************************** exam 2 ********************************/
int sum_of_digits(int number) 
{
    int sum = 0;
    int i;
    int q=1;

    for(i=0; i<4; i++){ 
        q=10*q;
    }

    for(i=0; i<4; i++){
        sum=number/q; //10000 나누기 10000의 몫 1이 sum에 저장
        number=number%q;                 //나머지 저장
        q=q/10;
        sum+=sum;                
    }
  return sum;
}

void exam2(void) 
{  
  const int N=10000;
  int i;
  int sum;
  for (i=1; i<=N; i++) {
    sum=sum_of_digits(N);

    if(N%sum==0){
      printf("%d\n",N);
    }
    // sum 값이 약수인지 확인
    // 약수인 경우 출력
  }
}


/******************************** exam 3 ********************************/
void convert_10_to_2bit_array(int number, int bit_array[], int length) 
{
  int main(void){

    int a=10;

    if((a/8)==1){ //8로 나누었을 때 몫이 1인지
        printf("1");
    }
    else{
        printf("0");
    }
    
    if((a%8)/4==1){ //8로 나눈 나머지를 4로 나누었을때 몫이 1인지
        printf("1");
    }
    else{
        printf("0");
    }
    
    if((a%4)/2==1){ //4로 나눈 나머지를 2로 나누었을때 몫이 1인지
        printf("1");
    }
    else{
        printf("0");
    }
    
    if((a%2)/1==1){ //2로 나눈 나머지를 1로 나누었을때 몫이 1인지
        printf("1");
    }
    else{
        printf("0");
    }

    return 0;
}
void calc_and(int bit_array1[], int bit_array2[], int result[], int length) 
{

}

void calc_or(int bit_array1[], int bit_array2[], int result[], int length) 
{

}

void calc_not(int bit_array[], int result[], int length) 
{

}

void calc_xor(int bit_array1[], int bit_array2[], int result[], int length) 
{

}

void exam3(void) 
{
  int number = 1234567890;
  int bit_array1[LENGTH_BIT_ARRAY];
  int bit_array2[LENGTH_BIT_ARRAY];

  int result_and[LENGTH_BIT_ARRAY];
  int result_or[LENGTH_BIT_ARRAY];
  int result_not[LENGTH_BIT_ARRAY];
  int result_xor[LENGTH_BIT_ARRAY];

  convert_10_to_2bit_array(number, bit_array1, LENGTH_BIT_ARRAY);
  calc_and(bit_array1, bit_array2, result_and, LENGTH_BIT_ARRAY);
  calc_or(bit_array1, bit_array2, result_or, LENGTH_BIT_ARRAY);
  calc_not(bit_array1, result_not, LENGTH_BIT_ARRAY);
  calc_xor(bit_array1, bit_array2, result_xor, LENGTH_BIT_ARRAY);

  print_1d_array(bit_array1, LENGTH_BIT_ARRAY); // Print first bit array
  print_1d_array(result_and, LENGTH_BIT_ARRAY); // Print AND result
  print_1d_array(result_or, LENGTH_BIT_ARRAY); // Print OR result
  print_1d_array(result_not, LENGTH_BIT_ARRAY); // Print NOT result
  print_1d_array(result_xor, LENGTH_BIT_ARRAY); // Print XOR result
  printf("\n");
}

/******************************** exam 4 ********************************/
void convert_radix_M_to_N(int source[], int current_radix, int dest[], int target_radix, int length) 
{
  
}

void exam4(void) 
{
  int current_radix = 2; // Current radix (base)
  int target_radix = 10; // Target radix (base)

  int source[LENGTH_BIT_ARRAY] = {1, 0, 1, 0}; // Example binary number
  int dest[LENGTH_BIT_ARRAY] = {0}; // Array to store the converted number
  convert_radix_M_to_N(source, current_radix, dest, target_radix, LENGTH_BIT_ARRAY);
  print_1d_array(dest, LENGTH_BIT_ARRAY); // Print the converted number
}

/******************************** exam 5 ********************************/
void print_common_divisor_odd(int number1, int number2) 
{
  int i;
  for(i=1; i<=number1; i++){
    if(number1%i==0 && number2%i==0){
      if(i%2!=0){
        printf("%d\n", i);
      }
    }
  }
}
void print_common_divisor_even(int number1, int number2) 
{
  int i;
  for(i=1; i<=number1; i++){
    if(number1%i==0 && number2%i==0){
      if(i%2==0){
        printf("%d\n", i);
      }
    }
  }
}
void exam5(void) 
{
  int number1 = 12; // Example number 1
  int number2 = 18; // Example number 2

  printf("Common divisors of %d and %d (even): ", number1, number2);
  print_common_divisor_even(number1, number2); // Print common divisors for even numbers
  printf("\n");

  printf("Common divisors of %d and %d (odd): ", number1, number2);
  print_common_divisor_odd(number1, number2); // Print common divisors for odd numbers
  printf("\n");
  printf("Common divisors of %d and %d (all): ", number1, number2);
  
  return 0;
}

/******************************** exam 6 ********************************/
void multiply_2x2(int mat1[][LENGTH_2x2], int mat2[][LENGTH_2x2], int result[][LENGTH_2x2]) 
{
  result[0][0] = mat1[0][0] * mat2[0][0];
  result[0][1] = mat2[0][1] * mat1[0][1];
  result[1][0] = mat1[1][0] * mat2[1][0];
  result[1][1] = mat1[1][1] * mat2[1][1];
}

void multiply_NxN_2d(int matA[][LENGTH_NxN], int matB[][LENGTH_NxN], int result[][LENGTH_NxN]) 
{
  void sum_mat2x2(int mat1[][COLS_2x2], int mat2[][COLS_2x2], int mat_result[][COLS_2x2], int rows, int cols)
{                                                               //22행령 덧셈 함수..
    int i, j;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            mat_result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
}

void convert_2d_to_1d(int mat[][LENGTH_NxN], int result[]) 
{
    result[0] = mat1[0][0] * mat2[0][0] + mat1[0][1] * mat2[1][0]; //22를 곱하여 1차원 저장
    result[1] = mat1[0][0] * mat2[0][1] + mat1[0][1] * mat2[1][1];
    result[2] = mat1[1][0] * mat2[0][0] + mat1[1][1] * mat2[1][0];
    result[3] = mat1[1][0] * mat2[0][1] + mat1[1][1] * mat2[1][1];
}

void multiply_NxN_to_1d(int matA[][LENGTH_NxN], int matB[][LENGTH_NxN], int result[], int N) 
{
  int temp[LENGTH_NxN][LENGTH_NxN] = {0};

  // temp에 2d 배열의 곱 계산

  // 결과를 1d 배열에 저장 (result)
}

void multiply_NxN_1d(int matA[][LENGTH_NxN], int matB[][LENGTH_NxN], int result[]) 
{  
  int matA_1d[LENGTH_NxN * LENGTH_NxN] = {0};
  int matB_1d[LENGTH_NxN * LENGTH_NxN] = {0};
 
  result[0] = (double)mat1[0][0] / mat2[0][0]; //22행령 나눗셈 계산..
  result[1] = (double)mat1[0][1] / mat2[0][1];
  result[2] = (double)mat1[1][0] / mat2[1][0];
  result[3] = (double)mat1[1][1] / mat2[1][1];
}
void exam6(void) 
{
  int mat1[2][2] = { {1, 2}, {3, 4} };
  int mat2[2][2] = { {5, 6}, {7, 8} };
  int mat3[LENGTH_NxN][LENGTH_NxN] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
  int mat4[LENGTH_NxN][LENGTH_NxN] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
  int resultA[2][2] = { {0, 0}, {0, 0} };
  int resultB[LENGTH_NxN * LENGTH_NxN] = {0};

  // A 문제
  multiply_2x2(mat1, mat2, resultA);
  print_2d_array(resultA, LENGTH_2x2, LENGTH_2x2); // Print mul 2x2 result
  
  // B 문제
  multiply_NxN_2d(mat1, mat2, resultB); // Example for NxN multiplication
  print_2d_array(resultB, LENGTH_NxN, LENGTH_NxN); // Print the result

  // C 문제
  convert_2d_to_1d(mat3, resultB); // Convert 2D to 1D
  print_1d_array(resultB, LENGTH_NxN * LENGTH_NxN); // Print the result
  convert_2d_to_1d(mat4, resultB); // Convert 2D to 1D
  print_1d_array(resultB, LENGTH_NxN * LENGTH_NxN); // Print the result

  // D 문제
  multiply_NxN_to_1d(mat3, mat4, resultB, LENGTH_NxN); // Multiply NxN to 1D
  print_1d_array(resultB, LENGTH_NxN * LENGTH_NxN); // Print the result

  // E 문제
  multiply_NxN_1d(mat3, mat4, resultB); // Multiply NxN to 1D
  print_1d_array(resultB, LENGTH_NxN * LENGTH_NxN); // Print the result
}


/******************************** exam 7 ********************************/
void print_start_A(int length) 
{
  int i = 0, j = 0;
 
  for ( i = 0; i < 4; i++ )
  {
      for ( j = 0; j < 4-i; j++ )
          printf("*");
      printf("\n");
  }
}

void print_start_B(int length) 
{
  int i = 0, j = 0;
 
  for ( i = 4; i >= 0; i-- )
  {
      for ( j = 3; j >=0; j-- )
          printf("*");
      printf("\n");
  }
}
void print_start_C(int length) 
{
  int i = 0, j = 0, k = 0, l = 0, m = 0;
 
  for (i = 0; i < 5; i ++)
  {
      for (j = 0; j <= i; j ++)
           printf("*");
      for (k = 1; k < 5 - i; k++)
          printf(" ");
      for (l = 1; l < 5 - i; l++)
          printf(" ");
      for (m = 0; m <= i; m++)
          printf("*");
      printf("\n");
  }

  for (i = 1; i < 5; i++)
  {
      for (j = 0; j < 5 - i; j++)
          printf("*");
      for (k = 1; k <= i; k++)
          printf(" ");
      for (l = 1; l <= i; l++)
          printf(" ");
      for (m = 0; m < 5 - i; m++)
          printf("*");

      printf("\n");
  }
}

void exam7(void)
{
  print_start_A(4); 
  print_start_B(4); 
  print_start_C(4); 
}

int main()
{
    exam1(); // 문제 1
    exam2(); // 문제 2
    exam3(); // 문제 3
    exam4(); // 문제 4
    exam5(); // 문제 5
    exam6(); // 문제 6
    exam7(); // 문제 7 
    
    return 0;
}
