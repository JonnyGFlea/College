public class Minimum {

    public static int minValue(int[] values) {
        String returnSmallestCombinationOfIntegers = "";
        int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, zero = 0;
        for (int i = 0; i < values.length; i++) {
            switch (values[i]) {
                case 0:
                    zero++;
                    break;
                case 1:
                    one++;
                    break;
                case 2:
                    two++;
                    break;
                case 3:
                    three++;
                    break;
                case 4:
                    four++;
                    break;
                case 5:
                    five++;
                    break;
                case 6:
                    six++;
                    break;
                case 7:
                    seven++;
                    break;
                case 8:
                    eight++;
                    break;
                case 9:
                    nine++;
                    break;
            }
        }

        if (zero > 0) {
            returnSmallestCombinationOfIntegers += "0";
        }
        if (one > 0) {
            returnSmallestCombinationOfIntegers += "1";
        }
        if (two > 0) {
            returnSmallestCombinationOfIntegers += "2";
        }
        if (three > 0) {
            returnSmallestCombinationOfIntegers += "3";
        }
        if (four > 0) {
            returnSmallestCombinationOfIntegers += "4";
        }
        if (five > 0) {
            returnSmallestCombinationOfIntegers += "5";
        }
        if (six > 0) {
            returnSmallestCombinationOfIntegers += "6";
        }
        if (seven > 0) {
            returnSmallestCombinationOfIntegers += "7";
        }
        if (eight > 0) {
            returnSmallestCombinationOfIntegers += "8";
        }
        if (nine > 0) {
            returnSmallestCombinationOfIntegers += "9";
        }


        return Integer.parseInt(returnSmallestCombinationOfIntegers);
    }

}