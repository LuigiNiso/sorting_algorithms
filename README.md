# Sorting Algoritms

_This project focuses on the exploration and analysis of various sorting algorithms, undertaken as part of a personal initiative to deepen understanding of algorithm design. Through this process, I seek to improve problem-solving abilities and proficiency in computer science fundamentals._

- ## Bogo sort 
    This algorithmBogo Sort is a highly inefficient sorting algorithm that works by repeatedly shuffling the elements of a list until they happen to be in the correct order. It is often used as a teaching tool or jsoke algorithm due to its impracticality, as it relies purely on chance to sort the data.

    ### How It Works:
    1. Randomly shuffle the list.
    2. Check if the list is sorted.
    3. If sorted, the algorithm stops.
    4. If not sorted, go back to step 1.

    ### Time Complexity:

    - Best case: O(n), when the list is already sorted after the first shuffle.
    - Average case: O((n+1)!) factorial, since there are n!n! possible permutations of the list, and in the worst case, it might have to check all of them.
    - Worst case: Unbounded, as there's no guarantee the list will ever become sorted.

___

- ## Bubble Sort
    Bubble Sort is a simple comparison-based algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process repeats until the list is sorted.

    ### How It Works:

    1. Start from the beginning of the list and compare the first two elements.
    2. If the first is larger than the second, swap them.
    3. Move to the next pair and repeat.
    4 .Continue passing through the list until no swaps are needed.

    ### Time Complexity: 
    - Best case: O(n), when the list is already sorted (with an optimized version that stops early). 
    - Average case: O(n²), since it needs to compare and possibly swap each pair in multiple passes. 
    - Worst case: O(n²), when the list is sorted in reverse order, requiring the maximum number of swaps.

___

- ## Merge Sort
    Merge sort is an efficient, divide-and-conquer sorting algorithm. It splits the list into two halves, recursively sorts each half, and then merges the sorted halves back together.

    ### How It Works:

    1. Divide the list into two roughly equal halves.
    2. Recursively apply merge sort to each half.
    3. Merge the two halves into a single sorted list.

    ### Time Complexity: 

    - Best case: O(n log n), due to the recursive division of the list. 
    - Average case: O(n log n), because every split results in a merge. 
    - Worst case: O(n log n), making it one of the most efficient sorting algorithms for large datasets.
    
___

- ## Selection Sort 
    Selection sort is a straightforward algorithm that sorts a list by repeatedly finding the minimum element from the unsorted part and swapping it with the first unsorted element.

    ### How It Works:

    1. Find the minimum element in the list.
    2. Swap it with the first unsorted element.
    3. Move the boundary between sorted and unsorted sections one element to the right.
    4. Repeat until the entire list is sorted.

    ## Time Complexity: 
    - Best case: O(n²), as it still needs to scan the entire unsorted list to find the minimum element. 
    - Average case: O(n²), since it performs roughly n²/2 comparisons. 
    - Worst case: O(n²), as the number of comparisons remains the same regardless of the initial order of the list.