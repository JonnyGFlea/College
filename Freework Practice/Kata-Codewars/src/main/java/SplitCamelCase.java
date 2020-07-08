public class SplitCamelCase {
    public static String camelCase(String input) {
        String inputSplit;
        inputSplit = input.replaceAll("(?<=[^A-Z])(?=[A-Z])"," ");
        return inputSplit;
    }
}
