#include <stdio.h>

int main(void){
    FILE *fp = fopen("dog_275x183_8bits.raw", "rb");
    FILE *fout = fopen("out.raw", "wb");

    unsigned char buffer[275 * 183];
    if(fp==NULL){
        printf("파일 열기 실패\n");
        return 1;
    }

    size_t byte_read = fread(buffer, sizeof(unsigned char), sizeof(buffer), fp);

    if(byte_read ==0){
        printf("파일 읽기 실패\n");
        fclose(fp);
        fclose(fout);
        return 1;
    }

    size_t byte_write = fwrite(buffer, sizeof(unsigned char), byte_read, fout);

    if(byte_read != byte_write){
        printf("파일 쓰기 실패\n");
        fclose(fp);
        fclose(fout);
        return 1;
    }
    
    return 0;
}