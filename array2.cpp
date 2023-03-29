
#include <iostream>
using namespace std ;
void runningsum(int arr[],int );
int main (){
    int a ; cin>>a ;
    int arr[a]; 
    for (int i= 0 ; i<a; i++){
        cin>>arr[i];
    }
    runningsum(arr,a);
    for(int k = 0 ; k<a; k++){
        cout<< arr[k]<<" ";
    }
    return 0 ; 
}
void runningsum(int arr[],int size){
    for (int i =1; i<size;i++ ){
        arr[i] += arr[i-1];
    }
} 