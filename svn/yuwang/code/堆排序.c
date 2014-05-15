#include <stdio.h>
#include <time.h>
#include <math.h>

#define LEFT(i)        ((i)<<1)
#define RIGHT(i)    (((i)<<1) + 1)
#define N 1000

void max_heapify(int a[], int i, int heapsize);
void heap_sort(int a[], int heapsize);
void build_max_heap(int a[], int heapsize);
void exchange(int *x, int *y);

//交换两个数的值
void exchange(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

//保持最大堆性质
void max_heapify(int a[], int i, int heapsize) {
    int left, right, largerest;

    left = LEFT(i);
    right = RIGHT(i);

    if (left <= heapsize && a[left]>a[i])
    {
        largerest = left;
    }else{
        largerest = i;
    }

    if (right <= heapsize && a[right]>a[largerest])
    {
        largerest = right;
    }

    if(largerest != i) {
        exchange(&a[i], &a[largerest]);
        max_heapify(a, largerest, heapsize);
    }

}

//建造最大堆
void build_max_heap(int a[], int heapsize) {
    int i;

    for (i=(int)ceil(heapsize/2); i >=1 ; i--)
    {
        max_heapify(a, i, heapsize);
    }
}

//堆排序
void heap_sort(int a[], int heapsize) {

    //build heap
    build_max_heap(a, heapsize);

    while(heapsize>1)
    {
        //exchange max
        exchange(&a[1], &a[heapsize]);
        heapsize--;
        max_heapify(a, 1, heapsize);
    }

}

int main() {

    double t2=clock();
    int i,a[N];
    for(i=0;i<N;i++)
    {
        a[i]=rand()%N;
    }

    heap_sort(a, N-1);
    t2=clock()-t2;

    //打印排序后的数组
    for (i=1; i<N ; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n堆排序%d个随机数字所用时间为:%f毫秒\n",N,(double)t2);
    getch();
    return 1;

}
