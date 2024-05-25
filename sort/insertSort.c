//
//  插入排序：在未排序区间选择一个基准元素，将该元素与其左侧已排序区间的元素逐一比较大小，并将该元素插入到正确的位置。
//  时间复杂度：O(n^2)
//  空间复杂度：O(n)
//  稳定排序
//  当输入数组完全有序时，插入排序达到最佳时间复杂度O(n)
//  Created by xdl on 2024/5/25.
//

#include "insertSort.h"

void insertSort(int list[], int len) {
    // 1、外循环已经排序的数组范围为0～i，第一次比较时第0号元素已经是有序的
    for (int i = 1; i < len; i++) {
        int j = i - 1;
        // base为要插入的数据
        int base = list[i];
        // 2、内循环两个结束循环的条件，j最差的情况取值为0，从后往前比找到第一个比base大的数据就终止循环
        while (j >= 0 && base < list[j]) {
            // 将比base大的数据往后移动一位
            list[j + 1] = list[j];
            j--;
        }
        // 将base插入到正确的位置
        list[j + 1] = base;
    }
}
