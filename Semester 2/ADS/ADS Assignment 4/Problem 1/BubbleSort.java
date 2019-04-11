/*
CH08-320201
Problem a4.p1.cpp
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

(a) Bubble Sort is a sorting algorithm that works by repeatedly iterating through the
list to be sorted, comparing each pair of adjacent items, and swapping them if they are in
the wrong order. This is repeated until no swaps are needed, which indicates that the list
is sorted. Write down the Bubble Sort algorithm in pseudocode including comments to
explain the steps and/or actions.


(b) Determine and prove the asymptotic worst-case, average-case, and best-case time
complexity of Bubble Sort.


(c) Stable sorting algorithms maintain the relative order of records with equal keys
(i.e., values).
Thus, a sorting algorithm is stable if whenever
there are two records R and S with the same key and with R
appearing before S in the original list, R will appear before S in the sorted list.

Which of the sorting algorithms Insertion Sort, Merge Sort, Heap Sort,
and Bubble Sort are stable? Explain your answers.


(d) A sorting algorithm is adaptive, if it takes advantage of existing order in its input.
Thus, it benefits from the pre-sortedness in the input sequence and sorts faster. Which of the
sorting algorithms Insertion Sort, Merge Sort, Heap Sort, and Bubble Sort are adaptive?
Explain your answers

*/

/* ----------------(a)---------------- */
public class BubbleSort{ /* Pseudo Code */
    Sorted = true
      while Sorted /* This is repeated until no swaps are needed, which indicates that the list is sorted. */
        Sorted = false
        for i from 0 to N - 1  /* repeatedly iterating through the list to be sorted */
          if list[i] > list[i + 1] /* comparing each pair of adjacent items */
            swapElem( list[i], list[i + 1]) /* and swapping them if they are in the wrong order */
    Sorted = true
}