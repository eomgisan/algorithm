#include <iostream>
using namespace std;



void cocktail_sort(int* arr, int len){

  int i, tmp, left, shift = -1, right = len-1;

  while ((left=shift) < right)
  {
    for (i = left+1; i < right; i++)
      if (arr[i] > arr[i+1]) { 
        tmp = arr[(shift=i)]; 
        arr[i] = arr[i+1]; 
        arr[i+1] = tmp; 
        }

    for (i = (right=shift)-1; i > left; i--)
      if (arr[i] > arr[i+1]) { 
        tmp = arr[(shift=i)]; 
        arr[i] = arr[i+1]; 
        arr[i+1] = tmp; 
        }
  }
}


int main(){
    int len = 0;

    cin >> len;

    int *arr = new int[len];

    for(int i=0; i<len; i++){
        int a = 0;
        cin >> a;
        *(arr + i) = a;
    }

    cocktail_sort(arr, len);

    for(int i=0; i<len; i++){
        cout << *(arr+i) << "\n";
    }    
    return 0;
}
