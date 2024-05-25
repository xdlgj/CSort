//
//  冒泡排序：通过连续地比较与交换相邻元素实现排序
//  时间复杂度：O(n^2)
//  空间复杂度：O(1)
//  稳定排序：由于在“冒泡”中遇到相等元素不交换
//  Created by xdl on 2024/5/25.
//

#include "bubbleSort.h"
#include <stdbool.h>

void bubbleSort(int list[], int len) {
    // 1、外层循环表示未被排序的范围第一次1～len-1,第二次1～len-2一次类推, 因为剩余最后一个自然是有序的
    for (int i = len - 1; i > 0; i--) {
        // 2、内层循环从0～i-1，因为j+1 = i，将未排序区间 [0, i] 中的最大元素交换至该区间的最右端
        for (int j = 0; j < i; j++) {
            // 当前数据与后面的数据进行比较，如果比后面的数据大进行位置交换
            if (list[j] > list[j + 1]) {
                int tmp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = tmp;
            }
        }
    }
}
/**
 通过添加标志位，可以减少外层的循环，如果内层循环完未执行换位，说明数组已经是有序的了，此时可以终止外层循环了
 */
void bubbleSortImprove(int list[], int len) {
    for (int i = len - 1; i > 0; i--) {
        bool hadSwape = false;
        for (int j = 0; j < i; j++) {
            if (list[j] > list[j + 1]) {
                int tmp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = tmp;
                hadSwape = true;
            }
        }
        if (!hadSwape) {
            break;
        }
    }
}


