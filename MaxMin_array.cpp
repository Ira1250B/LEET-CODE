#include<iostream>
using namespace std;
int Max(int a[],int s){
    int max=a[0];
    for(int i=1;i<s;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int Min(int a[],int s){
    int min=a[0];
    for(int i=0;i<s;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}
int main(){
    int s;
    cout<<"Enter the size of array\n";
    cin>>s;
    int a[s];
    cout<<"Enter array elements\n";
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    cout<<"Maximum of an array is"<<" "<<Max(a,s)<<endl;
    cout<<"Minimum of the array is"<<" "<<Min(a,s)<<endl;
}