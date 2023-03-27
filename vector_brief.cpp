// #include <iostream>
// #include <vector>
// using namespace std ; 
// int main(){
//     vector<int > v; 
//     for (int i = 0 ;i<5;i++ ){
//         int element ; 
//         cin>>element ; 
//         v.push_back (element );
//     }v.erase (v.end()-2 ); 
//     for (int  h =0 ; h<v.size();h++){
//         cout << v[h]<< " "; 
//     }cout << endl ; 
//     v.insert (v.begin ()+2,45); 
//     //for each loop  ; 

//     for (int elem : v){
//         cout<< elem << " "; 
//     }cout << endl ; 
//     v.pop_back ();
//     v.clear ();
//     // using while loop 

//     return 0 ; 
// }

//count the occurence of element in a given vector 

// #include <iostream>
// #include <vector >
// using namespace std ; 
// int main(){
//     int n,occurence  ; 
    
//     vector <int> v(6);
//     for (int i = 0 ;i<6 ; i++ ){
//         cin >>v[i]; 
//     } 
//     cin>> n ; 
//     for (int j =  0; j<6 ; j ++){
//         if (v[j]==n){
//             occurence ++ ; 
//         }

//     }cout << occurence ; 
//     return 0; 
//----->>for finding the occurence of element --->>>
// other method ofcould be doing this is by traversing this from last thus the first occurence of the element form the last is the last occurence of element from the first 
// }
