
// 예상문제 1: 포인터와 배열의 병합 (정렬된 배열 병합)
#include <stdio.h>
#define LENGTH 4

void merge_array(int *a, int *b, int *merge, int length) {
    int i = 0, j = 0, k = 0;
    while (i < length && j < length) {
        if (a[i] < b[j]) merge[k++] = a[i++];
        else merge[k++] = b[j++];
    }
    while (i < length) merge[k++] = a[i++];
    while (j < length) merge[k++] = b[j++];
}

void print_array(int *arr, int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// 예상문제 2: 구조체를 통한 복소수 연산
#include <math.h>

typedef struct {
    double real;
    double imag;
} Complex;

Complex complex_add(Complex c1, Complex c2) {
    Complex result = {c1.real + c2.real, c1.imag + c2.imag};
    return result;
}

// 예상문제 3: 파일 입출력과 데이터 반전
void invert_image(const char *infile, const char *outfile, int size) {
    FILE *in = fopen(infile, "rb");
    FILE *out = fopen(outfile, "wb");
    unsigned char data;
    while (fread(&data, sizeof(unsigned char), 1, in)) {
        data = 255 - data;
        fwrite(&data, sizeof(unsigned char), 1, out);
    }
    fclose(in);
    fclose(out);
}

// 예상문제 4: 동적 메모리 할당된 구조체 배열 초기화 및 출력
typedef struct {
    char name[20];
    int score;
} Student;

Student* create_student_array(int n) {
    Student *arr = (Student*)malloc(sizeof(Student) * n);
    for (int i = 0; i < n; i++) {
        sprintf(arr[i].name, "Student%d", i + 1);
        arr[i].score = (i + 1) * 10;
    }
    return arr;
}

void print_students(Student *arr, int n) {
    for (int i = 0; i < n; i++)
        printf("%s: %d\n", arr[i].name, arr[i].score);
}

// 예상문제 5: 구조체 포인터와 파일 입출력
typedef struct {
    int id;
    float score;
} Record;

void save_records(const char *filename, Record *recs, int count) {
    FILE *fp = fopen(filename, "wb");
    fwrite(recs, sizeof(Record), count, fp);
    fclose(fp);
}

void load_records(const char *filename, Record *recs, int count) {
    FILE *fp = fopen(filename, "rb");
    fread(recs, sizeof(Record), count, fp);
    fclose(fp);
}

// 예상문제 6: 이중 포인터를 이용한 행렬 설정
void set_mat(int **mat, int rows, int cols) {
    int val = 1;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            mat[i][j] = val++;
}

// 예상문제 7: 전처리와 다중파일 구조 활용
#define SIZE 5

void fill_and_print() {
    int arr[SIZE] = {0};
    for (int i = 0; i < SIZE; i++) arr[i] = i + 1;
    for (int i = 0; i < SIZE; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main(void) {
    // 예제 1 실행
    int a[LENGTH] = {2, 5, 7, 8};
    int b[LENGTH] = {1, 3, 4, 6};
    int c[2 * LENGTH];
    merge_array(a, b, c, LENGTH);
    print_array(c, 2 * LENGTH);

    // 예제 2 실행
    Complex c1 = {1.5, 2.5}, c2 = {3.5, 4.5};
    Complex result = complex_add(c1, c2);
    printf("Complex add: %.1f + %.1fi\n", result.real, result.imag);

    // 예제 3 실행
    invert_image("input.raw", "output.raw", 275*183);

    // 예제 4 실행
    Student *students = create_student_array(3);
    print_students(students, 3);
    free(students);

    // 예제 5 실행
    Record recs[2] = {{1, 85.5}, {2, 92.0}};
    save_records("records.dat", recs, 2);
    Record recs_read[2];
    load_records("records.dat", recs_read, 2);
    for (int i = 0; i < 2; i++)
        printf("Record %d: %.1f\n", recs_read[i].id, recs_read[i].score);

    // 예제 6 실행
    int rows = 3, cols = 5;
    int **matrix = (int**)malloc(sizeof(int*) * rows);
    for (int i = 0; i < rows; i++)
        matrix[i] = (int*)malloc(sizeof(int) * cols);
    set_mat(matrix, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
    for (int i = 0; i < rows; i++) free(matrix[i]);
    free(matrix);

    // 예제 7 실행
    fill_and_print();

    return 0;
}
