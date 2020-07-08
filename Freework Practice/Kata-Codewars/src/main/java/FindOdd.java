public class FindOdd {
    public static int findIt(int[] a) {
        int odd, count = 0, x = 0;
        while(x < a.length){
            odd = a[x];
            for(int i = 0; i < a.length; i++){
                if(a[i] == odd){
                    count++;
                }
            }
            if(count%2 == 1){
                return odd;
            }
            x++;
        }
        return -1;
    }
}