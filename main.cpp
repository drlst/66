#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void GT(int arr[], int n){
    for (int i = 0; i < n; ++i)   arr[i]= rand()% (100 - -100+1) -100;
}

void xuatMang(int arr[],int n){
    for (int i = 0; i <n ; ++i)    cout<<"\n"<<"arr["<<i<<"]= "<<arr[i]<<endl;
}

void MM(const int arr[], int n){
    int min=arr[0];
    int max=arr[0];

    for (int i = 0; i < n; ++i) {
        if(arr[i]>max)  max=arr[i] ;
        if(arr[i]<min)  min=arr[i] ;
    }
    cout<<"\nMax = "<<max;
    cout<<"\n\nMin = "<<min;
}

int main() {
    int n = 0;
    int arr[100];
    do {
        cout<<"\nNhap n: [1,99]= ";   cin>>n;
    }while(n<1||n>99);
    GT(arr, n);
    xuatMang(arr, n);
    MM(arr, n);
    return 0;
}
