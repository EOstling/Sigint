//
// Created by Lispy on 1/26/2020.
//

#include "MergeSort.h"


void MergeSort::sort(int *array, int head, int tail) {

    int start = head;
    int end = tail;

    //Pivot point here. This pivot can always be changed if time
    // complexity is sub optimal
    int pivot = array[(start + end)/2];
    array[(end + start/2)] = array[start];
    array[start] = pivot;

    while(end < start){
    //  Search forward from array[end] until an element is found that
    //  is greater than the pivot or lo >= hi
        while(array[end] <= pivot && end < start){
            end++;
        }
        while (pivot <= array[start] && end < start) {
            start--;
        }
        // now swap the elems
        if (end < start) {
            int T = array[end];
            array[end] = array[start];
            array[start] = T;
        }

        // Recenter the pivot
        array[head] = array[start];
        array[start] = pivot;

        // recursive call to sort
        sort(array, tail, end - 1);
        sort(array, start + 1, head);

    }
}