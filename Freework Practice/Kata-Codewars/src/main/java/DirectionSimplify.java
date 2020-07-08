import java.util.*;

public class DirectionSimplify {
    public static String[] dirReduc(String[] arr) {
        HashMap<String, String> directionHierarchy = placeDirectionHierarchy();
        List<String> directionList = Arrays.asList(arr);
        String[] finalStringArrayOutput;
        int finalStringArraySizeCounter = 0, iterator;
        String leftValue = null, rightValue = null;


        for (iterator = 1; iterator < directionList.size(); iterator++) {
            if (directionHierarchy.containsKey(directionList.get(iterator - 1))) {
                leftValue = directionList.get(iterator - 1);
                rightValue = directionList.get(iterator);
            }

            if (leftValue != null && rightValue != null
                    && directionHierarchy.get(leftValue).contains(rightValue)) {
                directionList.remove(iterator-1);
                directionList.remove(iterator);
                iterator = 0;
                finalStringArraySizeCounter++;
            }
            leftValue = null;
            rightValue = null;

        }

        finalStringArrayOutput = directionList.toArray(new String[finalStringArraySizeCounter]);
        return finalStringArrayOutput;
    }


    private static HashMap<String, String> placeDirectionHierarchy() {
        HashMap<String, String> DirectionHierarchy = new HashMap<>();
        DirectionHierarchy.put("NORTH", "SOUTH");
        DirectionHierarchy.put("SOUTH", "NORTH");
        DirectionHierarchy.put("WEST", "EAST");
        DirectionHierarchy.put("EAST", "WEST");
        return DirectionHierarchy;
    }
}