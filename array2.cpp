//print the running sum wihou tmaking another array.
// #include <iostream>
// using namespace std ;
// void runningsum(int arr[],int );
// int main (){
//     int a ; cin>>a ;
//     int arr[a]; 
//     for (int i= 0 ; i<a; i++){
//         cin>>arr[i];
//     }
//     runningsum(arr,a);
//     for(int k = 0 ; k<a; k++){
//         cout<< arr[k]<<" ";
//     }
//     return 0 ; 
// }
// void runningsum(int arr[],int size){
//     for (int i =1; i<size;i++ ){
//         arr[i] += arr[i-1];
//     }
// } 

// Check if we can partition the array into two subarray with equal sum.More formally ,check that the prefix sum of a part of the arry 
// is equal to the suffix sum of rest of array .

#include <iostream>
#include <vector>
using namespace std; 
bool checkprefixsum(vector <int>  &b){
    int totalsum=0; 
    for (int i = 0;i<b.size (); i++){
        totalsum +=b[i]; 
    }
    int prefixsum =0; 
    int suffixsum =0; 
    for (int i = 0 ;i<b.size(); i++){
        prefixsum +=b[i]; 
        suffixsum = totalsum-prefixsum ;
        if (suffixsum==prefixsum){
            return true ;
        }
    }
    return false; 
}
using namespace std ;
int main(){
    int size ; cin>>size ; 
       vector <int> v ; 
       for (int i =0; i<size ; i++){
        int elem; cin>>elem ; 
        v.push_back (elem); 
       }
       cout<<checkprefixsum(v)<<endl ;
    return 0 ;
}