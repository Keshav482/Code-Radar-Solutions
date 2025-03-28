#include <stdio.h>
void bubbleSort(arr,n){
   
    for(int i=0;i<n;i++){
        int a=arr[i];
        for(int j=i+1;j<n;j++){
            if(a>arr[j]){
                arr[j]=a;

            }
        }
        
    }

}

void printArray(arr,n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

}
int main() { 
int n; 
scanf("%d", &n); 
int arr[n]; 
for (int i = 0; i < n; i++) { 
scanf("%d", &arr[i]); 
} 
bubblesort (arr, n); 
printArray(arr, n); 
return 0; 
}