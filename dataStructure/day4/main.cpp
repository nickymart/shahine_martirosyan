#include <iostream>
#include <chrono>

using namespace std;

const int arraySize = 40000;

void printArray(int*, int);
void swap(int*, int*);
void generateRandomNumber(int*);
void copyArray(int*, int*, int);
void bubbleSort(int*);
void insertionSort(int*);
void merge(int*, int, int, int);
void mergeSort(int*, int, int);
void quickSort(int*, int, int);
int quick(int*, int, int);

int main() {
    int arr[arraySize];
    generateRandomNumber(arr);

    int bubble[arraySize];
    copyArray(arr, bubble, arraySize);
    
    int insertion[arraySize];
    copyArray(arr, insertion, arraySize);
    
    int merge[arraySize];
    copyArray(arr, merge, arraySize);
    
    int quick[arraySize];
    copyArray(arr, quick, arraySize);
    
    auto start = chrono::steady_clock::now();
    bubbleSort(bubble);
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << chrono::duration <double, milli> (diff).count() << " ms bubble" << endl;
    //printArray(bubble, arraySize);

    start = chrono::steady_clock::now();
    insertionSort(insertion);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, milli> (diff).count() << " ms insertion" << endl;    
    //printArray(insertion, arraySize);

    start = chrono::steady_clock::now();
    mergeSort(merge, 0, arraySize - 1);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, milli> (diff).count() << " ms merge" << endl;    
    //printArray(merge, arraySize);
    
    start = chrono::steady_clock::now();
    quickSort(quick, 0, arraySize - 1);
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << chrono::duration <double, milli> (diff).count() << " ms quick" << endl;    
    //printArray(quick, arraySize);

    return 0;
}

void swap(int *i, int *j){
    int temp = *j;
    *j = *i;
    *i = temp;
}

int quick(int *arr, int low, int high){

    int pivot = arr[high];
    int i = low - 1;
    int temp;
    
    for(int j = low; j < high; j++){
        if(arr[j] <= pivot) {
            i++;
            swap(&arr[j], &arr[i]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int *arr, int low, int high){
    if(low < high){
        int q = quick(arr, low, high);

        quickSort(arr, low, q - 1);
        quickSort(arr, q + 1, high);
    }
}

void merge(int *arr, int left, int newSize, int right) {
    int l = newSize - left + 1;
    int r = right - newSize;

    int *arrL = new int[l];
    int *arrR = new int[r];

    for(int i = 0; i < l; i++) {
        arrL[i] = arr[left + i];
    }

    for(int i = 0; i < r; i++) {
        arrR[i] = arr[newSize + i + 1];
    }

    int leftIndex = 0, rightIndex = 0;
    int i = left;

    while (leftIndex < l && rightIndex < r) {
        if(arrL[leftIndex] <= arrR[rightIndex]){
            arr[i] = arrL[leftIndex];
            leftIndex++;
        } else {
            arr[i] = arrR[rightIndex];
            rightIndex++;
        }
        i++;
    }

    while (leftIndex < l) {
        arr[i] = arrL[leftIndex];
        leftIndex++;
        i++;
    }
    while (rightIndex < r) {
        arr[i] = arrR[rightIndex];
        rightIndex++;
        i++;
    }
}

void mergeSort(int *arr, int start, int end){
    if(start >= end){
        return;
    }

    int newSize = start + (end - start) / 2;
    mergeSort(arr, start, newSize);
    mergeSort(arr, newSize + 1, end);    
    merge(arr, start, newSize, end);
}

void bubbleSort(int arr[]){
    int temp;
    for(int i = 0; i < arraySize; i++){
        bool swapped = false;

        for(int j = 0; j < arraySize - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

void insertionSort(int arr[]) {
    int index;
    for(int i = 1; i < arraySize; i++) {
        int j;
        int temp = arr[i];
        for(j = i - 1; j >= 0; j --){
            if(temp > arr[j]){
                break;
            }
            arr[j + 1] = arr[j];
        }

        arr[j + 1] = temp;
    }
}

void copyArray(int copyArray[], int newArray[], int size){
    for(int i = 0; i < size; i++) {
        newArray[i] = copyArray[i];
    }
}

void generateRandomNumber(int arr[]) {

    srand(time(0));
    for(int i = 0; i < arraySize; i++) {
        arr[i] = rand() % 10000;
    }
}

void printArray(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}