#include <iostream>
using namespace std;

int main()
{
    int arr1[] = { 11, 10, 13, 21, 31, 701 };
    int arr2[] = { 11, 31, 701, 10 };
 
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int flag = 0, i, j;
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            if(arr2[i] == arr1[j]) {
                flag = 1;
                break; // Found a match, no need to continue searching
            }
        }
        if (j == m) {
            flag = 0; // No match found for the current element in arr2
            break;
        }
    }
    
    if(flag == 0) {
        cout << "no" << endl;
    }
    else {
        cout << "yes" << endl;
    }

    return 0;
}

