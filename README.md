# Sorting Algorithm Reposition

## Overview

Welcome to the Sorting Algorithm Reposition repository! This project aims to implement and document various sorting algorithms in two programming languages (Python and C++). The goal is to provide a resource for developers to understand, compare, and contribute to different sorting algorithms.

## Algorithms Implemented

1. **Bubble Sort**
2. **Selection Sort**
3. **Heap Sort**
4. **Insertion Sort**
5. **Shell Sort**
6. **Merge Sort**
7. **Quick Sort**
8. **Counting Sort**
9. **Radix Sort**
10. **Bucket Sort**

## Getting Started

### Prerequisites
None

### Installation

1. Clone the repository: `git clone https://github.com/your-username/sorting-algorithm-reposition.git`
2. Navigate to the project directory: `cd sorting-algorithm-reposition`

## Contributing

We welcome contributions from the community! If you'd like to contribute to the repository, follow these steps:

1. Fork the repository.
2. Create a new branch for your feature: `git checkout -b feature-name`.
3. Implement your changes.
4. Test thoroughly.
5. Commit your changes: `git commit -m "Add feature-name"`.
6. Push to your branch: `git push origin feature-name`.
7. Create a pull request on GitHub.

Please make sure to follow the code style and contribute meaningful tests when applicable.

Happy Coding!

---

## Bubble Sort

### Complexity

| Best Time Complexity | O(n) |
| --- | --- |
| Average Time Complexity | O(n<sup>2</sup>) |
| Worst Time Complexity | O(n<sup>2</sup>) |
| Space Complexity | O(1) |
| Stability | Yes |

### Applications

- Complexity doesn’t matter
- Short and simple code is needed

## Selection Sort

### Complexity

| Best Time Complexity | O(n<sup>2</sup>) |
| --- | --- |
| Average Time Complexity | O(n<sup>2</sup>) |
| Worst Time Complexity | O(n<sup>2</sup>) |
| Space Complexity | O(1) |
| Stability | No |

### Applications

- A small list is to be sorted
- Cost of swapping doesn’t matter
- Checking of all the elements is compulsory

## Heap Sort

### Complexity

| Best Time Complexity | O(nlogn) |
| --- | --- |
| Average Time Complexity | O(nlogn) |
| Worst Time Complexity | O(nlogn) |
| Space Complexity | O(1) |
| Stability | No |

### Applications

- O(nlogn) complexity even in worst case
- Related to heap and priority queue

## Insertion Sort

### Complexity

| Best Time Complexity | O(n) |
| --- | --- |
| Average Time Complexity | O(n<sup>2</sup>) |
| Worst Time Complexity | O(n<sup>2</sup>) |
| Space Complexity | O(1) |
| Stability | Yes |

### Applications

- The array has a small number of elements
- The array is almost sorted

## Shell Sort

### Complexity

| Worst Time Complexity | O(n<sup>2</sup>) |
| --- | --- |
| Average Time Complexity | O(nlogn) |
| Best Time Complexity | O(nlogn) |
| Space Complexity | O(1) |

### Applications

- Insertion sort doesn’t perform well when the close elements are far apart. Shell sort helps in reducing the distance between close elements

## Merge Sort

### Complexity

| Best Time Complexity | O(nlogn) |
| --- | --- |
| Average Time Complexity | O(nlogn) |
| Worst Time Complexity | O(nlogn) |
| Space Complexity | O(n) |
| Stability | Yes |

### Applications

- Inversion count problem
- External sorting
- E-commerce applications

## Quick Sort

### Complexity

| Best Time Complexity | O(nlogn) |
| --- | --- |
| Average Time Complexity | O(nlogn) |
| Worst Time Complexity | O(n<sup>2</sup>) |
| Space Complexity | O(nlogn) |
| Stability | No |

### Applications

- Quick sort is used when the programming language is good at recursion
- Time complexity matters (quick sort is quite faster than merge sort)
- Space complexity matters
- Stability doesn’t matter

## Counting Sort

### Complexity

| Best Time Complexity | O(max - min + n) |
| --- | --- |
| Average Time Complexity | O(max - min + n) |
| Worst Time Complexity | O(max - min + n) |
| Space Complexity | O(max - min) |
| Stability | Yes |

### Applications

- There are smaller integers with multiple counts
- Linear complexity is needed

## Radix Sort

### Complexity

| Best Time Complexity | O(n + max) |
| --- | --- |
| Average Time Complexity | O(n + max) |
| Worst Time Complexity | O(n + max) |
| Space Complexity | O(max) |
| Stability | Yes |

### Applications

- DC3 algorithm (Kärkkäinen-Sanders-Burkhardt) while making a suffix array
- Places where there are integers in large ranges

## Bucket Sort

### Complexity

| Best Time Complexity | O(n) |
| --- | --- |
| Average Time Complexity | O(n) |
| Worst Time Complexity | O(n<sup>2</sup>) |
| Space Complexity | O(n) |
| Stability | Yes |

### Application

- Sort uniformly distributed data
- Sort floating point values