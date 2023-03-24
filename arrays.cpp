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