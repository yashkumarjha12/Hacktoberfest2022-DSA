import java.util.*;
public class quickSort {
    static void quicksort(int[] arr,int l,int h){
        if(l<h) {
            int pivot = partition(arr, l, h);
            quicksort(arr, l, pivot - 1);
            quicksort(arr, pivot + 1, h);
        }
    }
    static int partition(int[] arr,int low,int high){
        int i=low,j=high;
        int pivot=arr[low];
        while(i<j){
            while(pivot>=arr[i] && i<high-1)i++;
            while(pivot<arr[j] && j>=low)j--;
            if(i<j){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        int temp=arr[j];
        arr[j]=arr[low];
        arr[low]=temp;

        return j;
    }
    public static void main(String[] args) {
        int n;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of an array");
        n=sc.nextInt();
        int[] arr=new int[n];
        System.out.println("Enter the elements of the array");
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        quicksort(arr,0,n-1);
        for(int e: arr){
            System.out.print(e+" ");
        }
    }
}