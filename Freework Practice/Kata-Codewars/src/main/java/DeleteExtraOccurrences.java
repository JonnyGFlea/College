import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class DeleteExtraOccurrences {

    public static int[] deleteNth(int[] elements, int maxOccurrences) {
        int length = elements.length;
        if(elements.length <= maxOccurrences){
            return elements;
        }
        if(maxOccurrences == 0){
            return new int[0];
        }
        int numholder = elements[0], indexHolder = 0, counter = 1, timeThrough = 0;

        while(timeThrough < elements.length){
            for (int i = 1; i < elements.length; i++) {
                if(counter >= maxOccurrences){
                    indexHolder = i-1;
                    for (int j = elements.length-1; j > indexHolder; j--) {
                        if(elements[j] == numholder){
                            elements[j] = -1;
                        }
                    }
                    break;
                }
                else if(numholder == elements[i]){
                    counter++;
                }
            }
            counter = 0;
            while((elements[indexHolder] == numholder && indexHolder < elements.length)
                    && (indexHolder < elements.length && elements[indexHolder] != -1)){
                indexHolder++;
            }
            if(indexHolder == elements.length-1){
                timeThrough = elements.length;
            }
            numholder = elements[indexHolder];
            timeThrough++;
        }

        counter = 0;
        for (int i = 0; i < elements.length; i++) {
            if(elements[i] != -1){
                counter++;
            }
        }
        int[] finalReturnArray = new int[counter];
        counter = 0;
        for (int i = 0; i < elements.length; i++) {
            if(elements[i] != -1){
                finalReturnArray[counter] = elements[i];
                counter++;
            }
        }

        return finalReturnArray;
    }

}
//https://www.codewars.com/kata/554ca54ffa7d91b236000023/train/java
