#include <iostream>
using namespace std;

int main(){
    int temp,temp2;
    int arr[4]={65,9,11,12};
    int max=arr[0];
    for(int i=1;i<4;i++){
        if(arr[i]>max){
            max=arr[i];
            temp=max;
            for(int i=1;i<temp;i++)
            if(temp>arr[i]){
                temp=temp2;
    }
}
cout<<max;
cout<<temp2;
}
}