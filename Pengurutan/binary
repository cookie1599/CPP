#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int Binary(int arr[], int num){

    bool check = false;
    
    int index = ceil(sizeof(arr)/2);
    int i;
    
    int temp[sizeof(arr)];
    
    for(int k = 0; k <= sizeof(arr); k++){
    
        temp[k] = arr[k];
    }
    
    for (i = 0; check != true; i++) {
        
        if(temp[index] == num){
        
            check = true;
        }
        else if(temp[index] > num){
            index = floor(index/2);
            for(int k = 0; k <= index; k++){
                temp[k] = arr[k];
            }
        }
        else if(temp[index] < num){
            index = ceil(index/2);
            for(int k = sizeof(temp); k >= index; k--){
                temp[k] = arr[k];
            }
        }
    }
    cout<< i <<endl;
    return i;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int m;
    
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int num = 8;
    
    Binary(array, num);
    
    cin>>m;
    
    return 0;
}
