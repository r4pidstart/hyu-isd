#include <stdio.h>
#include <stdlib.h>

#define MAX_PTR 2

// 동적 할당 받은 메모리 영역의 시작 주소를 저장할 배열
void* allocPtrList[MAX_PTR];

// 상단 배열에 저장된 동적 할당 받은 영역 수
// clearPtrList() 함수 호출 시 다시 0으로 리셋
int ptrCnt = 0;

// 동적 할당 받은 모든 메모리를 해제
void clearPtrList() {
    for (int i = 0; i < ptrCnt; i++)
        free(allocPtrList[i]);

    ptrCnt = 0;
}

// 주어진 size만큼 동적 할당 받아 그 시작 주소를 반환
void* allocatePtr(int size) {
    // 이미 최대 개수만큼 할당 받은 경우
    // 기존에 할당 받은 모든 메모리를 해제
    if (ptrCnt == MAX_PTR) {
        printf("Freeing all allocated memories...\n");
        clearPtrList();
    }

    // 할당할 메모리 크기가 0보다 큰지 검증
    if (size <= 0) {
        printf("Invalid allocation size: %d\n", size);
        exit(0);
    }

    // size만큼의 메모리 공간을 동적 할당
    void* ptr = malloc(size);

    // 동적 할당에 성공했는지 검증
    if (!ptr) {
        printf("Memory allocation failed!\n");
        exit(0);
    }

    // 할당된 메모리 주소를 관리하는 배열에 새 주소를 저장
    // 이때 할당 횟수도 1 증가
    allocPtrList[ptrCnt++] = ptr;

    // 할당 받은 메모리 주소 반환
    return ptr;
}

int main() {
    int arrLen = 3;
    int i;

    int* intArr = (int*)allocatePtr(sizeof(int) * arrLen);
    double* doubleArr = (double*)allocatePtr(sizeof(double) * arrLen);
    
    for (i = 1; i <= 3; i++)
        intArr[i-1] = i; // intArr[0~2];

    for (i = 0; i < arrLen; i++) 
        printf("%lf ", doubleArr[i]);
    printf("\n");

    char* charArr1 = (char*)allocatePtr(sizeof(char) * arrLen);
    char* charArr2 = (char*)allocatePtr(sizeof(char) * arrLen);

    // for (i = 0; i < arrLen; i++) 
    //     printf("%lf ", doubleArr[i]); 이미 free된 포인터.
    // printf("\n");

    char* charArr3 = (char*)allocatePtr(sizeof(char) * arrLen);
    for (i = 0; i < arrLen; i++)
        charArr3[i] = '0' + i;

    // free(charArr1);
    // free(charArr2);
    // free(charArr3);
    clearPtrList(); // 이미 free한 공간을 free함

    return 0;
}
