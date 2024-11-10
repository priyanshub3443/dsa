#include<stdio.h>

// int linearSearch(int arr[], int size,int element){
//     for(int i=0; i<size; i++){
//         if(arr[i]==element){
//             return i;
//         }
//     }
//     return -1;
// }
int binarrySearch(int arr[], int size, int element){
    int mid, low, high;
    low=0;
    high=size-1;
    while (low<=high)
    {
 
    mid=(low+high)/2;
    if(arr[mid]==element){
        return mid;
    }
    if(arr[mid]<element){
        low=mid+1;
        
    }
    else{
        high=mid-1;
    }
    }
    return -1;

}

// int main(){
//     int arr[]= {1,2,3,54,64,57,24,56,53,89};
//     int size = sizeof(arr)/sizeof(int);
//     int element=64;
//     int searchIndex=linearSearch(arr, size, element);
//     printf("the element %d was found at index %d\n", element, searchIndex);
//     return 0;
// }
int main(){
    int arr[]= {1,2,3,54,64,74,76,83,89};
    int size = sizeof(arr)/sizeof(int);
    int element=64;
    int searchIndex=binarrySearch(arr, size, element);
    printf("the element %d was found at index %d\n", element, searchIndex);
    return 0;
}