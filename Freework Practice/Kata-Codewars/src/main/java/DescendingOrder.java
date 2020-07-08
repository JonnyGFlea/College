public class DescendingOrder {
    public static int sortDesc(final int num) {
        int[] numToArray = Integer.toString(num).chars().map(c -> c-'0').toArray();
        int counter = 0, maxIndex = 0, maxValue = numToArray[counter], numArrayLength = numToArray.length;
        int[] numDescendingArray = new int[numArrayLength];
        String returnResult = "";

        while(counter < numArrayLength){
            for (int i = 0; i < numArrayLength; i++) {
                if(numToArray[i] > maxValue){
                    maxValue = numToArray[i];
                    maxIndex = i;
                }
            }
            numToArray[maxIndex] = -1;
            numDescendingArray[counter] = maxValue;
            returnResult += ("" + maxValue);
            counter++;
            maxValue = 0;
            maxIndex = 0;
        }

        return Integer.valueOf(returnResult);
    }
}