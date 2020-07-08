public class PCPartsLeft
{
    public static String partsLeft(boolean CPU, boolean motherboard, boolean ram,
                                   boolean GPU, boolean hardDrive, boolean powerSupply,
                                   boolean desktopCase, boolean lights) {
        String returnMe = "";
        if(CPU && motherboard && ram && GPU
                && hardDrive && powerSupply
                && desktopCase && lights){
            return "Your PC is ready to build!";
        }
        if(!CPU && !motherboard && !ram && !GPU
                && !hardDrive && !powerSupply
                && !desktopCase && !lights){
            return "No items bought!";
        }
        if(!CPU){
            returnMe += "CPU, ";
        }
        if(!motherboard){
            returnMe += "motherboard, ";
        }
        if(!ram){
            returnMe += "ram, ";
        }
        if(!GPU){
            returnMe += "GPU, ";
        }
        if(!hardDrive){
            returnMe += "hardDrive, ";
        }
        if(!powerSupply){
            returnMe += "powerSupply, ";
        }
        if(!desktopCase){
            returnMe += "desktopCase, ";
        }
        if(!lights){
            returnMe += "lights, ";
        }
        returnMe = returnMe.substring(0, returnMe.length()-2) + ".";
            return returnMe;
    }
}
