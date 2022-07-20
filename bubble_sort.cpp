#include <iostream>
using namespace std;


void bubble_sort(int *arr, const int len){
    int i,j;

    for (i=0; i<len; i++){
        for (j = 1 ; j <len-i;j++){
            if( *(arr + j ) <  *(arr + (j - 1))){
                int temp = *( arr + j );
                *(arr + (j)) = *(arr + (j-1));
                *(arr + (j-1)) = temp;
            }
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

    bubble_sort(arr, len);

    for(int i=0; i<len; i++){
        cout << *(arr+i) << "\n";
    }    


    return 0;
}