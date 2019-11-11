import java.util.Arrays;

public class Persist {

    public static int persistence(long n) {
        // your code
        int count = 0, iterator = 0, total = 1;
        String longToString = "" + n;
        char[] longStringToCharArray = longToString.toCharArray(), tempArr = longStringToCharArray;

        while (longToString.length() != 1) {
            while (iterator != longStringToCharArray.length) {
                total *= Integer.parseInt(longStringToCharArray[iterator] + "");
                iterator++;
            }
            System.out.println("total = " + total);
            longToString = String.valueOf(total);
            tempArr = Arrays.copyOf(tempArr, longToString.length());
            for (int k = 0; k < tempArr.length; k++) {
                tempArr[k] = (longToString.charAt(k));
            }
            longStringToCharArray = tempArr;
            total = 1;
            iterator = 0;
            count++;
        }

        return count;
    }
}
