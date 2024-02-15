// Bubble Sort: by comparing adjacencies again and again by comparing,comparing and then it dows it again and again

// 7 2 5 4 1 6 0 3

// Repeat n-1 times
    // for i from 0 to n-2
        // if numbers[i] and numbers[i+1] out of order
            // swap them
        // if no swaps
            // Quit

// n-2 because at first it compares first by other and based on the larger value it put it to the end and now there is no point in accesing end because it is already a larger and it is at end so we give it has n-2 to loop till number before the large number at end (secondth last element)

// (n-1)x(n-1)
// n^2-1n-1n+1
// n^2-2n+1
// O(n^2)

// (n-1)x(n-1) because as we know in real world it starts from 1 to n-1 instead of 0 to n-2
// we neglect 2n+1 because as n increases n^2 will be a very large number

// asymptotically - means for Big O , Omega, Theta
// asymptotically bubble sort is same as selection sort

// O(n^2)
// Omega(n) - because there is n elements so at first it has to go through all the elements usually when we have n elements
// theta is not there because both upper and lower bound is different