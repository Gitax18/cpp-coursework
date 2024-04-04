#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 1 , 1, 1, 1};
    int count = 0;
    bool isDistinct = true;

    for (int i = 0; i < 5; i++)
    {
        isDistinct = true;
        for (int j = i - 1; j >= 0; j--)            
        {
            if(arr[j] == arr[i]) {
                isDistinct = false;
                break;
            }
        }
        if(isDistinct) count++;
    }
    cout << count;

    return 0;
}