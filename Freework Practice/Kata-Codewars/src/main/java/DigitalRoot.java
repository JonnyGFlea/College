public class DigitalRoot {
    public static int digital_root(int n) {
        //This solution is built without recursion
        System.out.println("n = " + n);
        int sum = n%10, sumHolder = 0, nHolder = n/10;
        boolean root = true;
        while(root){
            while (nHolder%10 > 0) {
                sum += nHolder%10;
                nHolder /= 10;
            }
            if(sum < 10){
                root = false;
                return sum;
            }
            else{
                sumHolder = sum;
                sum = sumHolder%10;
                nHolder = sumHolder/10;
            }
        }
        return -1;
    }
    public static int digital_root_solution_one(int n) {
        //This solution contains a recursive call which is costly
        int sum = n%10, nholder = n/10;
        while (nholder%10 > 0) {
            sum += nholder%10;
            nholder /= 10;
        }
        if (sum > 9) {
            sum = digital_root(sum);
        }
        return sum;
    }

}