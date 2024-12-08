    #include<stdio.h>
    void swap(int* x , int* y){
        int temp = *x;
        *x = *y;
        *y = temp;
    }
    int partition(int* a, int low , int high){
        int pivot = a[high];
        int i = low - 1;
        for(int j = low; j<=high; j++){
            if(a[j]<pivot){
                i++;
                swap(&a[i],&a[j]);
            }
        }
        swap(&a[i+1],&a[high]);
        return i+1;
    }
    void qs(int* a, int low , int high){
        if(low<high){
            int pi = partition(a,low,high);
            qs(a,low,pi-1);
            qs(a,pi+1,high);
        }
    }
    int main(){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i = 0 ; i<n; i++){
            scanf("%d",&a[i]);
        }
        qs(a,0,n-1);
        for(int i =0; i<n; i++){
            printf("%d ",a[i]);
        }

        return 0;
    }