import java.util.HashMap;

public class AlphabetWarAirstrike {

    public static String alphabetWar(String fight) {
        int powerLevel = 0;
        String survivors = doMassacre(fight);
        char[] survivorsCharArr = survivors.toCharArray();
        HashMap<Character, Integer> map = new HashMap<Character, Integer>() {{
            put('w', 4);
            put('p', 3);
            put('b', 2);
            put('s', 1);
            put('m', -4);
            put('q', -3);
            put('d', -2);
            put('z', -1);
        }};

        for (int i = 0; i < survivorsCharArr.length; i++) {
            if (map.containsKey(survivorsCharArr[i]))
                powerLevel += map.get(survivorsCharArr[i]);
        }
        if (powerLevel == 0)
            return "Let's fight again!";
        return powerLevel > 0
                ? "Left side wins!"
                : "Right side wins!";
    }

    public static String doMassacre(String fight) {
        return fight.replaceAll("[a-z]?\\*[a-z]?", "");
    }
}