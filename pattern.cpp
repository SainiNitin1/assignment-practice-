// programme to print rectangular pattern 
// #include <iostream>
// using namespace std ;

// int main(){
//     int rows,col ; 
//     cin >>rows >> col; 
//     for (int i = 0 ; i<rows ; i++){
//         for (int j = 0; j<col; j++ ){
//             cout <<"*";
//         }cout << endl ;
//     }
//     return 0; 
// }  

// #include <iostream >
// using namespace std ;

// int main(){
//     int row, col; 
//     cin >> row >> col ;
//     for (int i = 0  ; i< row ; i++ ){
//         for (int j =0 ; j<col ; j++ ){
//             if ((i==0 || i==row-1 )|| (j==0 || j== col-1 )){
//                 cout << "*";
//             }
//             else { cout << " ";}
//         }
//         cout << endl; 
//     }
//     return 0 ;
// }
//  8 8 8 8 8 
//   1 1 1 1 1 
//  8 8 8 8 8 
// #include <iostream>
// using namespace std; 

// int main  () { 
//     int rows, col  ;
//     cin >> rows >> col ; 
//     for(int i = 1 ; i<= rows ; i++ ){
//         for (int j = 1 ; j<= col+1 ; j++ ){
//             if ((i+j)%2 == 0 ){
//                 cout << "*";

//             }else{ 
//                 cout << "."; 
//             }
//         }cout << endl ; 
//     } 
//     return 0 ;

// programme to print a triangular pattern 

// #include <iostream>
// using namespace std ;

// int main(){
//     int rows ; 
//     cin >> rows ;
//     for (int i  = 0 ; i< rows ;i++ ){
//         for (int j = 0 ; j<=i ; j++ ){
//             cout<< "*";         }
//             cout << endl ; 

//     }
//     return 0 ; 
// }

// #include <iostream >
// using namespace std ; 

// int main () { 
//     int rows ;
//     cin >> rows; 
//     for (int i = 0 ; i<rows;i++){
//         for (int j = rows ; j<i  ; j--){
//             cout << "*"; 
//         }   
//         cout << endl ; 
//             }
//     return 0 ; 
// }

//
// print the pattern 
//     *
//    ***
//   *****
//  *******
// *********
// #include <iostream>
// using namespace std; 

// int main(){
//     int rows,col;
//     cin >> rows>>col ; 
//     for (int i = 1  ; i<=rows; i++){
//         for (int k = 0 ;k<rows-i;k++ ){
//                 cout << " ";
//         }
//         for (int j = 0 ; j<2*i - 1;j++){
//             cout << "*";
//         }
//         cout << endl ; 
//     } 
//     return 0 ; 
// }

// print the pattern 
// 1 2 3 4 5 6 7 
// 2 3 4 5 6 7 1
// 3 4 5 6 7 1 2
// 4 5 6 7 1 2 3 
// 5 6 7 1 2 3 4 
// 6 7 1 2 3 4 5 
// 7 1 2 3 4 5 6 

// #include <iostream>
// using namespace std ; 
// int main(){
//     int rows ; 
//     cin >> rows; 

//     for (int i = 1 ; i<= rows ; i++)
//     {
//         for (int j = i;j<=rows ; j++ )
//         {
//             cout << j << " ";
//         }
//         for (int j = 1 ;j<i ; j++ )
//         {
//             cout << j << " "; 
//         }
//         cout << endl ; 
//     }
//     return 0 ; 
// }
// #include <iostream>
// using namespace std ; 

// int main () {
//     int rows,cols ; 
//     cin >> rows >> cols ; 
//     for (int i = 1 ; i<= rows;i++ ){
//         for(int j = 1; j<= cols ; j++){
//             cout << j ; 

//         }cout <<endl ; 
//     }
//     return 0 ; 
// }

//programme to print a rectangular pattern with empty space 
// #include <iostream>
// using namespace std ;

// int main(){
//     int rows,cols; 
//     cin >> rows>>cols; 
//     for (int i =1 ; i<=rows ;i++){
//         for(int j = 1 ; j<=cols ; j++){
//             if(i==1 || i== rows || j==1 ||j==cols ){
//                 cout << j ; 
//             }
//             else {
//                 cout << " "; 
//             }
//         }cout << endl ;  
//     }
//     return 0 ; 
// }

// #include <iostream >
// using namespace std; 

// int main() {
//     int rows,cols ; 
//     cin >> rows >> cols; 
//     for(int i = 1; i<= rows ; i++ ){
//         for (int j=1 ; j<= cols ; j++){
//             if ((i+j)%2==0 ){
//                 cout << " 1 "; 
//             }else {
//                 cout << " 2 "; 
//             }
//         }cout << endl ; 
//     }
//     return 0 ;

// }
// #include <iostream>
// using namespace std; 

// int main(){
//     int rows; 
//     cin >> rows; 
//     for (int i =1 ; i<= rows; i++ ){
//         for (int j = 1;  j<=i ; j++){
//             cout <<j ; 
//         }
//         cout << endl ;
//     }
//     return 0 ;
// }

// #include <iostream>
// using namespace std; 
// int main(){
//     int rows ; 
//     cin >> rows;
//     for (int i =1 ; i<= (rows);i++){
//         for (int j =1 ; j<= (rows-i); j++){
//             cout << " "; 
//         }
//         for ( int k =1 ; k<=i ; k++){
//             cout<< k ;
//         }
//         for (int l =1 ; l<=(i-1);l++){
//             cout << l ; 
//         }cout<< endl ;
//     }
//     cout<< endl ;
//     return 0 ;
// }
//    1   
//   2  2
// 3     3
// #include <iostream>
// using namespace std ;
// int main(){
//     int row ; 
//     cin>>row ;
//     for(int i = 1 ; i<=row; i++){
//         for (int j = 0 ; j<row; j++){
//             if (i+j==row ){
//                 cout<<i ; 
//             }else {
//                 cout<< " ";
//             }
//         }for (int k = 2 ; k<=row+1; k++){
//             if (i==k){
//                 cout<< k ;
//             }else{cout<<" ";}
//         }
//         cout<<endl ;
//     }
//     return 0 ; 
// } 
#include <iostream>

using namespace std;



void swap(int &a, int &b)

{

 int c = a;

 a = b;

 b = c;

}



int main()

{

 int num1 = 20;

 int num2 = 32;



 cout << "Before swap: " << "\n";

 cout << num1 <<" "<< num2 << "\n";



 	


 swap(num1, num2);



 cout << "After swap: " << "\n";

 cout << num1 <<" "<< num2 << "\n";



 return 0;

}


