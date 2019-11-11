import java.util.Arrays;

public class TwoToOne {

    public static String longest(String s1, String s2) {
        String concatenate = s1.concat(s2);
        char tempArray[] = concatenate.toCharArray();
        Arrays.sort(tempArray);
        String sortedConcatenate = "";
        for (int i = 0; i < tempArray.length; i++) {
            if (sortedConcatenate.indexOf(tempArray[i]) == -1)
                sortedConcatenate = sortedConcatenate + tempArray[i];
        }
        return sortedConcatenate;
    }
}