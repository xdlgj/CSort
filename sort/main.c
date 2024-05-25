//
//  main.c
//  sort
//
//  Created by xdl on 2024/1/10.
//

#include <stdio.h>
#include "selectSort.h"


int main(int argc, const char * argv[]) {
    int list[] = {4, 2, 3, 2, 6, 5, 7, 8};
    int len = sizeof(list) / sizeof(list[0]);
    selectSort(list, len); //简单选择排序
    for (int i = 0; i < len; i ++) {
        printf("%d ", list[i]);
    }
    printf("\n");
    return 0;
}
