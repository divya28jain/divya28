#include<iostream>
using namespace std;
merge(int arr[],int beg.int mid,int end){
    int i,j,k;
    int n1=mid-beg+1;
    int n2=end-mid;
    int LeftArray[n1],RightArray[n2];
    for(int i=0;i<n1;i++){
        LeftArray[i]=arr[beg+i];
    }
    for(int j=0;j<n2;j++){
        RightArray[j]=arr[mid+1+j];
}
i=0;
j=0
k=beg;
while(i<n1 && j<n2){
    if(LeftArray[i]<=RightArray[j]){
        arr[k]=LeftArray[i];
        i++;
}
else{
    arr[k]=RightArray[j];
    j++;
    k++;
}
while(i<n1){
    arr[k]=LeftArray[i];
    i++;
    k++;
    }
    while(j<n2){
        arr[k]=RightArray[j];
        j++;
        k++;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        }

void merge_sort(int arr[],int beg,int end){
    if(beg<end){
        int mid=(beg+end)/2;
        merge_sort(arr,beg,mid);
        merge_sort(arr,mid+1,end);
        merge(arr,beg,mid,end);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
   merge_sort(a,0,n-1); 
}