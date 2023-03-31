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

// #include <iostream>
// #include <vector>
// using namespace std; 
// bool checkprefixsum(vector <int>  &b){
//     int totalsum=0; 
//     for (int i = 0;i<b.size (); i++){
//         totalsum +=b[i]; 
//     }
//     int prefixsum =0; 
//     int suffixsum =0; 
//     for (int i = 0 ;i<b.size(); i++){
//         prefixsum +=b[i]; 
//         suffixsum = totalsum-prefixsum ;
//         if (suffixsum==prefixsum)
//             return true ;           //----->>>>we dont need to put curly brackets when only one line of code is beign executed after 
//                                         // curly brackets make the code whole cod executable in the code 
        
//     }
//     return false; 
// }
// using namespace std ;
// int main(){
//     int size ; cin>>size ; 
//        vector <int> v ; 
//        for (int i =0; i<size ; i++){
//         int elem; cin>>elem ; 
//         v.push_back (elem); 
//        }
//        cout<<checkprefixsum(v)<<endl ;
//     return 0 ;
// }


// Q-Given an array of integer of size n .Answer q queries where you need to print the sum of values in a given 
// range of indices from l ot r (both included )
// note-values in land r follows 1 based indexing 


// #include <iostream>
// using namespace std;  
// int main(){
//     int n ; cin>>n ;
//     int arr[n]; 
//     for(int i= 1 ;i<=n ;i++){
//         cin>>arr[i];                //--->>can also be solved by calcutlating total sum and then substracting it .
//     }
//     int q; cin>>q ; 
//     while (q--){
//         int a ,b ,sum = 0;
//         cin>>a>>b  ;
//         for(int i =a ; i<=b ;i++){
//             sum+=arr[i];
//         }cout << sum; 
//     }
//     return 0 ;
// }

// - ​There is a man going on a trek. The trek consists of n + 1 points at different altitudes. The
// man starts his trek on point 0 with altitude equal 0. You are given an integer array height
// of length n where height[i] is the net height in altitude between points i​ and i + 1 for all
// (0 <= i < n). Return the highest altitude of a point.

// #include<iostream>
// #include<algorithm>
// using namespace std ;
// int maxheight (int arr[],int  ); 
// int main(){
//     int n; cin>>n ;
//     int arr [n ]; 
//     for (int i = 0 ; i<n ; i++){
//         cin>>arr[i]; 
//     }
//     int max = maxheight(arr,n);
//     if (max>0){
//         cout <<max ; 
//     }else cout << 0 ;
//     return 0 ; 
// }

// int maxheight (int arr[],int size ){
//     return *max_element(arr,arr+size); 
// }