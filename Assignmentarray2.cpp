#include<iostream>
using namespace std;
int main(){int n;
cout<<"Enter number of element in array : ";
cin>>n;
cout<<"Enter the elements of array : ";
int arr[n];
for(int i = 0; i<n;i++){
    cin>>arr[i];
}
//Q 1
// int x;
// cout<<"Enter the value for x : ";
// cin>>x;
// int j =0;
// for(int i =0; i<n; i++){
//     if(arr[i] > x){
//         j++;
//     }
// }
// cout<<endl<<"Number of elements strictly greater than the given nuber "<<" = "<<j;

//Q 2
// int  c,b,a = arr[0];
// for(int i =1; i<n;i++){
//     if(arr[i] > a){c =b;
//     b= a;
//     a = arr[i];
//     }
// }
// cout<<"Three largest elements are respectively : "<<a<<" "<<b<<" "<<c;
//Q 3
// for(int i = 0;i<n; i++){
//     for(int j = i+1;j<n;j++){
//         if(arr[i]>arr[j]){
//             cout<<"Given array is not sorted.";
//             i =n;
//             break;
//         }
//         else if(i == n-1){
//             cout<<"Given array is sorted.";
//         }
//     }
// }
//Q 4
// int odd =0,even = 0;
// for(int i =0; i<n;i++){
//     if(i%2 == 0 ){
//         even+=arr[i];
//     }
//     else{
//         odd+=arr[i];
//     }
// }int d;
// if(even > odd){
//     d = even - odd;
// }
// else{d = odd - even;}
// cout<<endl<<"difference between sum of odd and even indices elements = "<<d;
//Q 5
// for(int i =0;i<n;i++){
//     if(i%2 == 0){
//         arr[i]+=10;
//     }
//     else{arr[i]*=2;}
// }
// cout<<endl<<" Updated array : ";
// for(int i =0;i<n;i++){
// cout<<arr[i]<<" ";
// }
//Q 6
// for(int i =0; i<n;i++){
//     for(int j =0;j<n;j++){
//         if(arr[i] == arr[j] && i != j){
//            j =n;
//         }
//         else if(j == n-1) {cout<<" The unique number is "<<arr[i];
//                  i =n;
//                 j =n;
//         }
//     }
// }
// Q 7
    int i =0;
    int j =n-1;
    while(i<=j){
        if(arr[i] != arr[j]){
            cout<<endl<<"NOT PALINDROM";
            i = n;
        }
        else if(j == i ){
            cout<<endl<<"Palindrom Array";
        }
        i++,j--;
    }






 }