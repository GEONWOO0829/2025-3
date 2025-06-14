#include <stdio.h>

int sum_of_digits(int number) 
{
    int sum = 0;
    int i;
    int q=1;

    for(i=0; i<4; i++){ //x에 대해 나눌수(x의 자릿수에 맞춤) ex) 1000
        q=10*q;
    }

    for(i=0; i<4; i++){
        sum=number/q; //3482 나누기 1000의 몫 3이 sum에 저장
        number=number%q;                 //나머지 저장
        q=q/10;
        sum+=sum;                
    }
  return sum;
}

int main(void) 
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
  return 0;
}