#include <iostream>
using namespace std;

int count_of_sort_elem(int* arr, int index, int size);
int main()
{
    int size;
    cout << "Enter array size:";
    cin >> size;
    int *arr = new int[size];
    for(int i = 0; i < size; i ++){
        cout << "arr[" << i << "] = " ;
        cin >> arr[i];
    }    
    int max_lenght = 0;
    int first_index;
    int elem;
    for(int i = 0; i < size; i ++) {
        elem = count_of_sort_elem(arr, i, size);
        if(elem > max_lenght){
            max_lenght = elem;
            first_index = i;
        }
    }
    for(int i = first_index; i <= first_index + max_lenght; i ++){
        cout << arr[i] << ", ";
    }  
    cout << endl;
    return 0;
}
int count_of_sort_elem(int* arr,int index, int size)
{
    int count = 0;
    for(int i = index; i < size - 1; i ++) {
        if(arr[i] > arr[i + 1]){
            break;
        }
        count ++;
    }
    return count;
}
