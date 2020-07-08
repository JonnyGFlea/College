import java.math.BigInteger;
public class DifferentiatePolynomial {

    public static BigInteger differentiate(String equation, long x) {
        System.out.println("equation = " + equation);
        System.out.println("x = " + x);
        char[] equationCharArr = equation.toCharArray();
        String differentiatedEquation = "", holder = "";
        BigInteger finalResult = BigInteger.valueOf(0);
        for(int i = 0; i < equationCharArr.length; i++) {
            if((equationCharArr[i] != '+'
                    && equationCharArr[i] != '-'
                    && equationCharArr[i] != '*'
                    && equationCharArr[i] != '/')
                    || i == 0){
                holder += equationCharArr[i];
            }
            else{
                differentiatedEquation = differentiateString(holder);
                finalResult = finalResult.add(solveDifferentiatedEquation(differentiatedEquation, x));
                holder = ""  + equationCharArr[i];
            }
        }
        differentiatedEquation = differentiateString(holder);
        finalResult = finalResult.add(solveDifferentiatedEquation(differentiatedEquation, x));
        return finalResult;
    }
    public static String differentiateString(String equation){
        if(!equation.contains("x")){
            return "";
        }
        if(!equation.contains("^")){
            if(equation.matches(".*\\d.*")){
                equation = equation.replaceAll("x","");
            }
            else{
                equation = equation.replaceAll("x", "1");
            }
            return equation;
        }
        String differentiatedEquation = "", posOrNegative = "";
        BigInteger power, value;
        if(equation.substring(0,1).equals("x")){
            value = BigInteger.valueOf(1);
        }
        else if(equation.substring(1,2).equals("x") && !equation.substring(0,1).matches(".*\\d.*")){
            posOrNegative = equation.substring(0,1);
            value = BigInteger.valueOf(Integer.parseInt(posOrNegative+1));
        }
        else{
            value = BigInteger.valueOf(Integer.parseInt(equation.substring(0, equation.indexOf("x"))));
        }
        power = BigInteger.valueOf(Integer.parseInt(equation.substring(equation.length()-1)));
        value = value.multiply(power);
        if(power.compareTo(BigInteger.valueOf(2)) == 1){
            power = power.subtract(BigInteger.valueOf(1));
            differentiatedEquation += value + "x^" + power;
        }
        else{
            differentiatedEquation += value + "x";
        }
        return differentiatedEquation;
    }
    public static BigInteger solveDifferentiatedEquation(String equation, long x){
        if(equation.equals("")){
            return BigInteger.valueOf(0);
        }
        BigInteger finalValue, multiplier = BigInteger.valueOf(x), xVal, exponent;
        if(equation.contains("^")){
            exponent = BigInteger.valueOf(Integer.parseInt(equation.substring(equation.indexOf("^")+1)));
            xVal = BigInteger.valueOf(Integer.parseInt(equation.substring(0, equation.indexOf("x"))));
            finalValue = (multiplier.pow(exponent.intValue())).multiply(xVal);
        }
        else if(equation.contains("x")){
            xVal = BigInteger.valueOf(Integer.parseInt(equation.substring(0,equation.indexOf("x"))));
            finalValue = xVal.multiply(multiplier);
        }
        else{
            finalValue = BigInteger.valueOf(Integer.parseInt(equation));
        }
        return finalValue;
    }
}
