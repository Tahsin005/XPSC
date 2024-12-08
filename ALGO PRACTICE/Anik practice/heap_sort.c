    #include <stdio.h>
    void heapify(int* a,int curr, int size){
        int largest = curr;
        int leftchild = largest*2+1;
        int rightchild = largest*2+2;

        if(leftchild<size && a[leftchild]>a[largest]){
            largest = leftchild;
        }
        if(rightchild<size && a[rightchild]>a[largest]){
            largest = leftchild;
        }
        if(curr!=largest){
            int temp = a[curr];
            a[curr] = a[largest];
            a[largest] = temp;

            heapify(a,largest , size);
        }
    }
    void heapSort(int* a,int n){
        for(int i = n/2-1; i>=0; i--){
            heapify(a,i,n);
        }
        for(int i = n-1 ;i>0; i--){
            int temp = a[0];
            a[0] = a[i];
            a[i] = temp;
            heapify(a,0,i);
        }
    }
    int main(){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }
        heapSort(a,n);
        for(int i = 0 ;i<n; i++){
            printf("%d ",a[i]);
        }
        return 0;
    }