//  programme to print the sum of all even and odd terms in an array 
// #include <iostream>
// using namespace std ; 

// int main(){
//     int n ,even =0 ,odd =0 ; 
//     cin>> n ; 
//     int arr [n]={}; 
//     for (int i = 0 ; i<n ; i++ ){
//         cin>> arr [i];
//     }
//     for (int j = 0 ; j<n; j++){
//         if (arr[j]%2==0){
//             even+=1 ;
//         }else{
//             odd+=1; 
//         }
//     }
//     cout << "even count : "<< even<<endl ; 
//     cout<<  "odd count : "<< odd ;
//     return 0 ; 
// }

// Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of both
// 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.

// #include <iostream>
// using namespace std ;

// int main(){
//     int n ;
//     cin>> n ; 
//     int arr [n]={}; 
//     for (int i = 0 ; i<n ; i++ ){1  
//         cin>> arr [i];
//     }
//     int min = arr[0];
//     int max = arr[0];
//     for (int j = 1 ; j<n; j++){
//         if (min>arr[j] ){
//             min = arr[j]; 
//         }
//         if (max <arr[j]){
//             max =arr[j]; 
//         }
//     }
//     cout<< " smallest element : "<< min<<endl  ; 
//     cout << " lagest element : "<< max<<endl  ;
//     return 0 ; 
// }


// Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of both
// 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.

// #include <iostream>
// using namespace std ;
// int main(){
//     int min = INT16_MAX;
//     int arr[]={5,6,10,4,9}; 
//     int arr1[]= { 1,2,3,4,5};
//     for(int i = 0 ;i<5;i++){
//         for (int j = 0; j<5; j++){
//             if (i!=j){
//                 if(arr[i]+arr1[j]<min ){
//                         min = arr[i]+arr1[j];
//                 }
//             }
//         }
//     }
//     cout << min ;  
//     return 0 ; 
// }

// Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of both
// 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101.

// #include <iostream>
// using namespace std ;
// int main(){
//     int n ; cin >>n ; 
//     int occurence;
//     int arr[n]; 
//     int min =INT32_MAX; 
//     int max = INT32_MIN;
//     for(int i =0 ; i<n ; i++){
//         cin>>arr[i];
//     }
//     for (int j =  0 ; j<n;j++){
//         if (arr[j]<min){
//             min = arr[j];
//         }
//         if (arr[j]>max ){
//             max = arr[j];
//         }
//     }
//     for (int l = min ;l<=max; l++){
//         int master =0 ; 
//         for (int k = 0 ; k<n ; k++){
//             if (arr[k]==l ){
//                 occurence++;
//             }
//         }if (master == 0 ){
//             cout<<  l<< " ";
//         }
//     }
    
//     return 0 ; 
// }

// Given an integer array and its size, reverse the array and print it . Here 1<size<101

// #include <iostream>
// using namespace std; 
// int main(){
//     int n ; cin >> n ; 
//     int start =0 ; 
//     int end = n-1; 
//     int arr[n]; 
//     for(int i = 0 ; i<n; i++){
//         cin>>arr[i]; 
//     }
//     //prints the initial array ; 
//     for (int j = 0; j<n ; j++){
//         cout << arr[j]<<" "; 
//     }cout<< endl ; 
//     while (start<end){
//         int temp = arr[start];
//         arr[start]=arr[end]; 
//         arr[end]=temp;
//         start++;
//         end--;
//     }
//     for (int i = 0 ; i<n; i++){
//         cout << arr[i]<<" ";
//     }
//     return 0 ; 
// }
 
 //  Given an integer array containing n elements. Find the element in the array for which all the elements
// to its left are smaller than it and all the elements to the right of it are larger than it. Here 1<n<101.
// #include <iostream>
// using namespace std; 
// int main(){
//     int n ; cin>> n ; 
//     int arr[n]; 
//     for(int i =0 ; i<n; i++ ){
//         cin >> arr[i];
//     }
//     for(int j = 1 ;j<n;j++){
//         int left = j-1 ; 
//         int right =j+1 ;
//         while (arr[left ]<arr[j] && arr[right]>arr[j]){
//             if (left ==0 && right ==n ){
//                 cout<<arr[j];
//                 exit(0);
//             }
//             if (left>0){
//                 left --;
//             }if (right <n){
//                 right ++; 
//             }
//         }
//     }cout << -1 ; 
//     return 0 ; 
// }

// find the no of arrays whose sum is equal to the given number 
// #include <iostream>
// using namespace std;
// int main(){
//     int count =0;
//     int ar[]={3,4,6,7,1};
//     int target_sum; cin >> target_sum ; 
//     for (int i = 0 ; i<(sizeof(ar)/sizeof(ar[0]))-1;i++){ //other method *(&arr+1)-arr;
//         for (int j = i+1;j<5;j++){
//             if (ar[i]+ar[j]==target_sum){
//                 count ++; 
//             }
//         }
//     }cout<<count; 
//     return 0 ; 
// }

//find the triplets whose sum equal to the given value 
// #include <iostream>
// using namespace std ;
// int main(){
//     int target_sum=0; 
//     int n ; cin>>n; 
//     int arr[]= {3,1,2,4,0,6};
//     for (int i = 0 ; i<5 ;i++){
//         for (int j = i+1;j<5 ;j++){
//             for (int k = j+1;j<5;j++){
//                 if (arr[i]+arr[j]+arr[k]==n){
//                     target_sum ++; 
//                 }
//             }
//         }
//     }
//     cout<<target_sum ;
//     return 0  ; 
// }

//Find the unique number in a given array where all the elements are being repeated twice with one value being unique ; 
// #include <iostream>
// using namespace std; 
// int main(){
//     int arr[]={2,3,1,3,2,4,1}; 
//     for (int i = 0 ; i<7; i++){
//         for (int j = i+1 ; j<7; j++){
//             if (arr[i]==arr[j]){
//                 arr[i]=arr[j]= -1;
//             }
//         }
//     }
//     for(int i = 0 ;i<7;i++){
//         if (arr[i]>0){
//             cout<< arr[i];
//         }
//     }
//     return 0 ; 
// }

//Find the second largest element in a given array ; 

// #include <iostream>
// using namespace std ;
// int largest_element_index (int arr[] ,int ); 
// int main(){
//     int arr[]={2,3,5,7,6,1};
//     int index = largest_element_index(arr,6);
//     //arr[index]= -1;  //when duplicates are present need to manipulate the code 
//     int largest_element = arr[index];

//     index = largest_element_index(arr,6);
//     cout << arr[index];
//     return 0 ; 
// }
// int largest_element_index(int arr[],int a ){
//     int index = 0; 
//     int max =INT16_MIN;
//     for(int i = 0; i<a; i++){
//         if (arr[i]>max){
//             max=arr[i]; 
//             index =i ; 
//         }
//     }
//     return index ;
// }

// Rotate the given array a by k steps where k is a non negative. Note  k can be greater than n as well where n is the size of array a ; 

// #include <iostream>
// using namespace std ;
// int main(){
//     int array[]={1,2,3,4,5};
//     int k ,temp; cin>>k ; 
//     for (int i =0 ; i<k;i++){
//         for (int j = 5 ; j>0 ;j--){
//             if (j==5){
//                 temp=array[j-1];
//             }
//             array[j]=array[j-1];
//         }array[0]=temp;
//     }
//     for (int k= 0 ;k<*(&array+1)-array;k++){
//         cout<<array[k]<<" ";
//     }
//     return 0 ; 
// }
//Another approach -->>>
// make another array and insert elements into#include <iostream >
// using namespace std ;
// divide k by the size of the elements and then run loop from the adding those element 
// than another loop for adding remaining element ; 

 //also possible by vector reverse (v.begin(),v.end())--see the pattern
 //need to include algorithms header file . 
//  #include <iostream>
//  #include <vector>
//  #include <algorithm>
//  using namespace std ;
//  int main(){
//     vector <int> v= {1,2,3,4,5}; 
//     int k ; cin>>k ;
//     k=k%v.size ();
//     reverse (v.begin(),v.end());
//     reverse (v.begin(),v.begin()+k);
//     reverse (v.begin()+k,v.end());
//     for (int a : v ){
//         cout<< a <<" "; 
//     }
//     return 0 ; 
//  }

//Given Q  queries ,check if the given nubmer is present int the array or not 
//Note : Value of all the elements in the array is less than 10 to the power 5 ;
//can use normal iteration but when array size is very large it will take a lot of time 
#include <bits/stdc++.h>
using namespace std ;
int main(){
    int n ; cin >>n ; 
    vector<int > v;
    for (int i =0 ; i<n ;i++){
        int elem ;
        cin>>elem; 
        v.push_back(elem); 
    }
    const int a = 1e5;
    vector <int > checker(a,0 );//initialises a vector with all elements 0 and of given length ; 
    
    for (int j = 0 ; j<n ; j++){
        checker[v[j]]++;
    }
    int query ; cin >>query ; 
    while (query--){// when it is 0 the loops stops ; because 0 is == false and 1 is true ; 
        int search ; cin >> search ; 
        cout << "no of times "<<search <<" is present "<<checker[search]<<endl ; 

    } 

    return 0 ;
}