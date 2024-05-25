//
//  简单选择排序：选择一个元素与后面所有的元素进行比较，将小的数据放到前面
//  时间复杂度：O(n^2)
//  空间复杂度：O(n)
//  不稳定：[2, 1, 2, 1] => [1, 2, 2, 1] => [1, 1, 2, 2] 前面的2被换到了第二个2的后面
//  Created by xdl on 2024/1/10.
//

//#include "selectSort.h"

void selectSort(int list[], int len) {
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (list[i] > list[j]) {
                int temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}
