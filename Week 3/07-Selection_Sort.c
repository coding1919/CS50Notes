// Selection Sort - selecting the smallest element again and again to invoke this algorithm 
// repeating the list again and again for the smallest element and just remembering the smallest one which takes only 1 variable

// algorithm:
//  for i from 0 to n-1
    // find the smallest number between numbers[i] and numbers[n-1] 
    // swap smallest number with numbers[i]

// [0] [1] [2] .... [n-3] [n-2] [n-1]

// visualisation of sorting
// https://www.cs.usfca.edu/~galles/visualization/ComparisonSort.html

// this algorithm takes lot of work by going back and forth in cycle
// and making comparison again

// (n-1)+(n-2)+(n-3)+.....+1
// n(n-1)/2
// (n^2-n)/2
// n^2/2-n/2
// n^2 it is biggest term because square will take a huge number
// O(n^2) // wrap up Big O Notation 
// Omega(n^2) // Omega 
// Theta(n^2) // Theta 