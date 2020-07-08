import java.util.*;

public class ZooHierarchy {
    public static String[] whoEatsWho(final String zoo) {
        HashMap<String, List<String>> animalHierarchy = placeAnimalHierarchy();
        List<String> escapedAnimalList = new ArrayList<>(Arrays.asList(zoo.split(","))), eatingProcessList = new ArrayList<>();
        String[] finalStringArrayOutput;
        int finalStringArraySizeCounter = 0, iterator;
        String leftAnimal = null, rightAnimal = null;
        eatingProcessList.add(zoo);


        for (iterator = 1; iterator < escapedAnimalList.size(); iterator++) {
            if(animalHierarchy.containsKey(escapedAnimalList.get(iterator - 1))){
                leftAnimal = escapedAnimalList.get(iterator - 1);
            }
            if(animalHierarchy.containsKey(escapedAnimalList.get(iterator))){
                rightAnimal = escapedAnimalList.get(iterator);
            }

            if (leftAnimal != null && animalHierarchy
                        .get(escapedAnimalList.get(iterator - 1))
                        .contains(escapedAnimalList.get(iterator))) {
                eatingProcessList.add(leftAnimal + " eats " + rightAnimal);
                escapedAnimalList.remove(iterator);
                iterator = 0;
                finalStringArraySizeCounter++;
            } else if (rightAnimal != null && animalHierarchy
                        .get(escapedAnimalList.get(iterator))
                        .contains(escapedAnimalList.get(iterator - 1))) {
                    eatingProcessList.add(rightAnimal + " eats " + leftAnimal);
                    escapedAnimalList.remove(iterator - 1);
                    iterator = 0;
                    finalStringArraySizeCounter++;
            }
            leftAnimal = null;
            rightAnimal = null;

        }

        eatingProcessList.add(String.join(",", escapedAnimalList));
        finalStringArrayOutput = eatingProcessList.toArray(new String[finalStringArraySizeCounter]);
        return finalStringArrayOutput;
    }

    private static HashMap<String, List<String>> placeAnimalHierarchy() {
        HashMap<String, List<String>> animalEatingPower = new HashMap<>();

        List<String> antelope = new ArrayList<>();
        List<String> big_fish = new ArrayList<>();
        List<String> bug = new ArrayList<>();
        List<String> bear = new ArrayList<>();
        List<String> chicken = new ArrayList<>();
        List<String> cow = new ArrayList<>();
        List<String> fox = new ArrayList<>();
        List<String> giraffe = new ArrayList<>();
        List<String> lion = new ArrayList<>();
        List<String> panda = new ArrayList<>();
        List<String> sheep = new ArrayList<>();
        List<String> little_fish = new ArrayList<>();
        List<String> grass = new ArrayList<>();
        List<String> leaves = new ArrayList<>();
        List<String> empty = new ArrayList<>();

        antelope.add("grass");
        big_fish.add("little-fish");
        bug.add("leaves");
        bear.add("big-fish");
        bear.add("bug");
        bear.add("chicken");
        bear.add("cow");
        bear.add("leaves");
        bear.add("sheep");
        chicken.add("bug");
        cow.add("grass");
        fox.add("chicken");
        fox.add("sheep");
        giraffe.add("leaves");
        lion.add("antelope");
        lion.add("cow");
        panda.add("leaves");
        sheep.add("grass");
        little_fish.add("none");
        grass.add("none");
        leaves.add("none");
        empty.add("none");

        animalEatingPower.put("antelope", antelope);
        animalEatingPower.put("big-fish", big_fish);
        animalEatingPower.put("bug", bug);
        animalEatingPower.put("bear", bear);
        animalEatingPower.put("chicken", chicken);
        animalEatingPower.put("cow", cow);
        animalEatingPower.put("fox", fox);
        animalEatingPower.put("giraffe", giraffe);
        animalEatingPower.put("lion", lion);
        animalEatingPower.put("panda", panda);
        animalEatingPower.put("sheep", sheep);
        animalEatingPower.put("little-fish", little_fish);
        animalEatingPower.put("grass", grass);
        animalEatingPower.put("leaves", leaves);
        animalEatingPower.put("", empty);
        return animalEatingPower;
    }
}
