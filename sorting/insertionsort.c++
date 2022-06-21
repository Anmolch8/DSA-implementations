#include <iostream>
using namespace std;
int main(){
    int arr[]={12,31,25};
    int temp,j;
    for(int i=1;i<3;i++){
     temp=arr[i];
     j=i-1;

     while( j>=0 && temp<=arr[j]){
        arr[j+1]=arr[j];
        j=j-1;
     }
     arr[j+1]=temp;
    }
    for(int i=0;i<3;i++){
        cout<<"  "<<arr[i];
    }
return 0;
}