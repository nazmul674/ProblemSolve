#include <iostream>
using namespace std;
/*void merge(int *,int, int , int );*/
void merge(int *arr, int low, int high, int mid)
{

    int i, j, k, c[50];
  i = low;

    k = low;

    j = mid + 1;

    while (i <= mid && j <= high) {

        if (arr[i] < arr[j]) {

            c[k] = arr[i];

            k++;

            i++;

        }

        else  {

          c[k] = arr[j];

            k++;

            j++;

        }

    while (i <= mid) {

        c[k] = arr[i];

        k++;

        i++;

    }

    while (j <= high) {

        c[k] = arr[j];

        k++;

        j++;

    }

    for (i = low; i < k; i++)  {

       arr[i] = c[i];

    }
	}
}

void merge_sort(int *arr, int low, int high){

    int mid;

    if (low < high){

        //divide the array at mid and sort independently using merge sort

        mid=(low+high)/2;

        merge_sort(arr,low,mid);

        merge_sort(arr,mid+1,high);

       //merge or conquer sorted arrays
        merge(arr,low,high,mid);

    }

}

// Merge sort
/*void merge(int *arr, int low, int high, int mid)
{
19
    int i, j, k, c[50];
20
    i = low;
21
    k = low;
22
    j = mid + 1;
23
    while (i <= mid && j <= high) {
24
        if (arr[i] < arr[j]) {
25
            c[k] = arr[i];
26
            k++;
27
            i++;
28
        }
29
        else  {
30
            c[k] = arr[j];
31
            k++;
32
            j++;
33
        }
34
    }
35
    while (i <= mid) {
36
        c[k] = arr[i];
37
        k++;
38
        i++;
39
    }
40
    while (j <= high) {
41
        c[k] = arr[j];
42
        k++;
43
        j++;
44
    }
45
    for (i = low; i < k; i++)  {
46
        arr[i] = c[i];
47
    }
48
}
49*/
// read input array and call mergesort

int main()

{

    int myarray[30], num;

    cout<<"Enter number of elements to be sorted:";

    cin>>num;

    cout<<"Enter "<<num<<" elements to be sorted:";

    for (int i = 0; i < num; i++) { cin>>myarray[i];

    }

    merge_sort(myarray, 0, num-1);

    cout<<"Sorted array\n";

    for (int i = 0; i < num; i++)

    {

        cout<<myarray[i]<<"\t";

    }

}
