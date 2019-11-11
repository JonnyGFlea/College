public class SignChange {

    public static int signChange(int[] arr) {
        int count = 0;
        if(arr.length <= 0){return 0;}
        for(int i = 1; i < arr.length; i++){
            if(arr[i-1] >= 0 && arr[i] < 0)
                count++;
            if(arr[i-1] < 0 && arr[i] >= 0)
                count++;
        }
        return count;
    }

}