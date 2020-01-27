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


void MergeSort::MergeS(int **arr, int size, int head, int tail) {
    int lo = tail;
    int hi = head;
    if (lo >= hi) {
        return;
    }
    int mid = (lo + hi) / 2;

    sort(*arr, lo, mid);
    sort(*arr, mid + 1, hi);

    int end_lo = mid;
    int start_hi = mid + 1;
    while ((lo <= end_lo) && (start_hi <= hi)) {
        if (arr[lo] < arr[start_hi]) {
            lo++;
        }
        else {

            int T = (int)arr[start_hi];
            for (int k = start_hi - 1; k >= lo; k--) {
                arr[k + 1] = arr[k];
            }
            arr[lo] = &T;
            lo++;
            end_lo++;
            start_hi++;
        }
    }

}