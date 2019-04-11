//CH08-320201
//Problem a2.p1.a
//Jonathan Rittmayer
//jo.rittmayer@jacobs-university.de

import java.util.Scanner;

public class MergeSort {
    int[] arr;
    int[] temparr;
    int length;
    int k;

    public static void main(String args[]){
        int[] ArrayToSort = {2, -10, 98, 100,1,3};
        Scanner input = new Scanner(System.in);

        //The user input that decides limit of division
        this.k = input.nextInt();

        MergeSort arr = new MergeSort();
        arr.Sort(ArrayToSort);
        System.out.print("Sorted Array: ");
        for(int k:ArrayToSort){
            System.out.print(k);
            System.out.print(" ");
        }
        System.out.print("Array Length = " + ArrayToSort.length);
    }
    public void Sort(int[] arr2sort){
        this.arr = arr2sort;
        this.length = arr2sort.length;
        this.temparr = new int[length];
        Merge_Sort(this.arr, (0), (length - 1), this.k);
    }
    public void Merge_Sort(int[] arr,int start, int end, int k){
        //merge sort
        if(end - start +1 <= k){
            insertion_sort(arr, start, end);
            return 1;
        }
        int middle = start + (end-start)/2;
        Merge_Sort(arr, start, middle, k);
        Merge_Sort(arr,(middle + 1), end, k);
        Merge(arr, start, middle, end);
    }
    public void Merge(int[] arr, int start, int middle, int end){
        for(int k = start; k <= end; k++){
            temparr[k] = arr[k];
        }
        int a = start;
        int b = middle+1;
        int c = start;
        while(a <= middle && b <= end){
            if(temparr[a] <= temparr[b]){
                arr[c] = temparr[a];
                a++;
            }
            else{
                arr[c] = temparr[b];
                b++;
            }
            c++;
        }
        while(a <= middle){
            arr[c] = temparr[a];
            a++;
            c++;
        }
    }
    public void insertion_sort(int[] arr, int start, int end, int k){
        for(int i = start+1; i <= end; i++){
            int holder = arr[i];
            int j = i-1;
            while(j >= start && arr[j] > holder){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = holder;
        }
    }
}
