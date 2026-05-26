# Sudoku Solver in C++

A simple Sudoku Solver built using **C++** and the **Backtracking Algorithm**.

This program takes a 9x9 Sudoku board as input and solves it efficiently using recursion and backtracking.

---

## Features

- Solves any valid Sudoku puzzle
- Uses Backtracking Algorithm
- Console-based input and output
- Beginner-friendly code structure
- Easy to understand and modify

---

## Algorithm Used

The project uses:

- **Recursion**
- **Backtracking**
- Constraint checking:
  - Row validation
  - Column validation
  - 3x3 grid validation

---

## Input Format

- Enter the Sudoku board row by row.
- Use `.` (dot) for empty cells.

### Example Input

```txt
5 3 . . 7 . . . .
6 . . 1 9 5 . . .
. 9 8 . . . . 6 .
8 . . . 6 . . . 3
4 . . 8 . 3 . . 1
7 . . . 2 . . . 6
. 6 . . . . 2 8 .
. . . 4 1 9 . . 5
. . . . 8 . . 7 9
```

---

## Output

```txt
Solved Sudoku:

5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9
```

---

## How to Run

### Compile

```bash
g++ sudoku_solver.cpp -o sudoku
```

### Run

```bash
./sudoku
```

---

## Project Structure

```txt
Sudoku-Solver/
│
├── sudoku_solver.cpp
└── README.md
```

---

## Concepts Practiced

- Object Oriented Programming (OOP)
- Recursion
- Backtracking
- 2D Vectors in C++
- Problem Solving

---

## Future Improvements

- GUI version using HTML/CSS/JavaScript
- Random Sudoku Generator
- Difficulty levels
- Visual step-by-step solving animation

---

## Author

Arpit Singh Chauhan

B.Tech CSE Student  

---

## License

This project is open-source and free to use.

<img width="927" height="618" alt="Sudoku Solver output" src="https://github.com/user-attachments/assets/7352a520-eb00-44de-ad7f-dfdcb555a4a2" />

