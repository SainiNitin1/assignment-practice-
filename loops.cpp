// cout the no of digits in  the given input 

// #include <iostream >
// using namespace std ;

// int main (){
//     int number ; 
//     cin >> number ; 
//     int  count = 0; 
//     while (number > 0 ){
//         count +=1; 
//         number /=10 ; 
//     }
//     cout << count ; 
//     return 0 ; 
// } 

// programme to print the sum of all digits in a number

// #include <iostream >
// using namespace std ;

// int main (){ 
//     int number ; 
//     cin >>number ; 
//     int sum = 0 ; 
//     while (number >  0){
//         sum += number % 10 ;
//         number /=10 ;  
//     }
//     cout << "The sum of all the digits is : "<< sum  ;
//     return 0 ; 

// }

// programme to reverse a given digit of number

// #include <iostream >
// using namespace std ;

// int main(){
//     int number ;
//     int remainder ; 
//     cin>> number ; 
//     int reversed_number = 0 ; 
//     while (number > 0 ){
//         remainder = number % 10 ; 
//         reversed_number = reversed_number * 10 + remainder ; 
//         number /=10 ;
//     }cout << reversed_number ;
//     return 0 ; 
// }
// Find the sum of the following series  1 - 2 + 3 - 4 … n

// #include <iostream>
// using namespace std ; 

// int main (){
//     int n ; 
//     int sum ; 
//     cin >> n ; 
//     for (int i = 1; i<=n ;i ++ ){
//         if (i%2== 0 ){
//             sum -=i ; 
//         }else {
//             sum +=i ; 
//         }
//     }
//     cout << sum ; 

//     return 0 ; 
// }


// calculate a raise to power b 

// #include <iostream >
// using namespace std ;

// int main (){
//     int a,b,power =1; 
//     cin >> a >>b ; 
//     for (int i = 0 ; i<b ;i++ ){
//         power *= a; 

//     }cout << power ;
//     return 0 ; 
// }

// programme to print factorial of a given number. 

// #include <iostream >
// using namespace std ;

// int main (){
//     int n ; 
//     int fact=1; 
//     cin >> n ;
//     for (int i = 1 ; i<=n ; i++){
//         fact *= i ; 
//     }cout << fact ;
//     return 0 ; 

// }
// programme to print armstrong number 
// #include <iostream>
// using namespace std;
// int main(){
//     for (int i = 100; i<500; i++){
//         int sum =0  ; 
//         int j = i ; 
//         while (j!=0){
//             sum = sum + (j%10 )*(j%10 )*(j%10 );
//             j=j/10;       
//              } 
//         if (sum == i ){
//             cout << i <<endl ;  
//         }
//     }
//     return 0 ; 
// } 