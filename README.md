# Mark Analyzer (C Program)

A simple and efficient C program to analyze student marks, determine pass/fail status, 
and calculate grades based on average marks.

## Features
- Input validation (0–100)
- Automatic fail detection if any subject < 33
- Grade calculation based on average
- Clean, modular, and beginner-friendly code

## Subjects
- Bangla
- English
- Math
- Science
- ICT

## Grading System
| Average Marks | Grade |
|--------------|-------|
| 80 – 100 | A+ |
| 70 – 79 | A |
| 60 – 69 | A- |
| 50 – 59 | B |
| 40 – 49 | C |
| 33 – 39 | D |
| < 33 (any subject) | F |

## How to Run
```bash
gcc mark_analyzer.c -o mark_analyzer
./mark_analyzer