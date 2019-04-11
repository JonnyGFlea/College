/*
CH08-320201
Problem a4.p2.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

//(a) Implement the Heap Sort algorithm as presented in the lecture.


//(b) Implement a variant of the Heap Sort that works as follows:
//In the first step it also builds a max-heap.
//In the second step, it also proceeds as the Heap Sort does,  but instead of
//calling MAX-HEAP IF Y , it always floats the new root all the way down to a leaf level.
//
//Then, it checks whether that was actually correct and if not fixes the max-heap by
//moving the element up again.
//
//This strategy makes sense when considering that the element that was swapped to become the new root is
//typically small and thus would float down to a leaf level in most cases.
//
//Hence, one would save the additional tests when floating down the element.
//And, the fixing step (moving the element upwards again) would be a rare case.


//(c) Compare the original Heap Sort and its variant from subpoint (b)
//for input sequences of different lengths (including larger input sequences).
//What can you observe?
 */

import java.util.Arrays;

@SuppressWarnings("Duplicates")
public class Heap2A{

    private Data3[] theHeap;
    private int itemsInArray = 0;
    private int maxSize;

    public Heap2A(int maxSize){
        this.maxSize = maxSize;
        theHeap = new Data3[maxSize];
    }

    public void insert(int index, Data3 newData){
        theHeap[index] = newData;
    }

    public void incrementTheArray(){
        itemsInArray++;
    }

    public Data3 pop(){
        int tempItemsInArray = itemsInArray - 1;

        Data3 root = theHeap[0];
        theHeap[0] = theHeap[--itemsInArray];

        // Send to the array heap method starting with index 0
        heapTheArray(0);

        return root;
    }

    // Fill the heap with random numbers based on
    // the number that is passed in
    public void generateFilledArray(int randNum){
        Data3 randomData1;
        for(int i = 0; i < this.maxSize; i++){
            randomData1 = new Data3((int) (Math.random() * randNum) + 1);
            this.insert(i, randomData1);

            // Need to do this in a separate function because
            // later when I sort the array I need to use insert
            // without incrementing the array
            incrementTheArray();
        }
    }
    public void heapTheArray(int index){
        int largestChild;
        Data3 root = theHeap[index];
        while (index < itemsInArray/2){
            // Get the index for the leftChild
            int leftChild = 2 * index + 1;

            // Get the index for the rightChild
            int rightChild = leftChild + 1;

            // If leftChild is less then rightChild
            // save rightChild in largestChild
            if(rightChild < itemsInArray && theHeap[leftChild].key < theHeap[rightChild].key){
                largestChild = rightChild;
            }
            else{
                // Otherwise save leftChild in largestChild
                largestChild = leftChild;
            }

            // If root is greater then the largestChild
            // jump out of while
            if(root.key >= theHeap[largestChild].key)
                break;

            // Save the value in largest child into the top
            // index
            theHeap[index] = theHeap[largestChild];
            index = largestChild;
        }
        theHeap[index] = root;
    }

    // Cycle through the array and pop off each so
    // the array goes from smallest to largest
    public void heapSort(){
        for(int k = maxSize - 1; k >= 0; k--){
            Data3 largestNode = pop();
            insert(k, largestNode);
        }
    }
    public static void main(String args[]){
        int x = 90000;

        final long startTime = System.currentTimeMillis();
        Heap2A newHeap = new Heap2A(x);
        newHeap.generateFilledArray(500);
        // Print out the array before it is sorted
        System.out.println("Original Array");
        System.out.println(Arrays.toString(newHeap.theHeap));
        for(int j = newHeap.maxSize / 2 - 1; j >= 0; j--){
            newHeap.heapTheArray(j);
        }
        newHeap.heapSort();

        // Print the sorted array
        System.out.println("\nSorted Array");
        System.out.println(Arrays.toString(newHeap.theHeap));

        final long endTime = System.currentTimeMillis();

        System.out.println("\n" + x);
        System.out.println((endTime - startTime));
    }
}
class Data3{
    public int key;
    public Data3(int key){
        this.key = key;
    }
    public String toString(){
        return Integer.toString(key);
    }
}