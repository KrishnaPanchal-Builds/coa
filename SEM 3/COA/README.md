# Computer Organization and Architecture (COA)

Practicals and laboratory assignments for Computer Organization and Architecture.

## Program Navigation

| # | Program Title | Code File | Description |
|:---:|:---|:---:|:---|
| 01 | [Number Base Conversion](./01.c) | [`01.c`](./01.c) | Decimal and hexadecimal to binary conversion |
| 02 | [Twos Complement Conversion](./02.c) | [`02.c`](./02.c) | 1's and 2's complement of binary numbers |
| 03 | [8086 Arithmetic Operations](./03.asm) | [`03.asm`](./03.asm) | Addition, subtraction, multiplication, and division |
| 04 | [8086 Logical Operations](./04.asm) | [`04.asm`](./04.asm) | Bitwise AND, OR, XOR, and NOT |
| 05 | [Booths Multiplication Algorithm](./05.c) | [`05.c`](./05.c) | Signed binary multiplication using Booth's algorithm |
| 06 | [Restoring Division Algorithm](./06.c) | [`06.c`](./06.c) | Unsigned binary division using Restoring algorithm |
| 07 | [Graphics Square Drawing](./07.asm) | [`07.asm`](./07.asm) | Drawing a square using INT 10H video services |
| 08 | [Bubble Sort Assembly](./08.asm) | [`08.asm`](./08.asm) | Array sorting using 8086 assembly language |
| 09 | [Block Data Transfer](./09.asm) | [`09.asm`](./09.asm) | String block movement using SI and DI registers |
| 10 | [Display English Alphabets](./10.asm) | [`10.asm`](./10.asm) | Printing uppercase and lowercase letters with INT 21H |

---

## Detailed Programs

### [Number Base Conversion](./01.c)
- **Direct Link:** [`01.c`](./01.c)
- **Objective:** Convert decimal and hexadecimal numbers into their binary equivalent.

### [Twos Complement Conversion](./02.c)
- **Direct Link:** [`02.c`](./02.c)
- **Objective:** Find the 1's complement and 2's complement of a given binary number.

### [8086 Arithmetic Operations](./03.asm)
- **Direct Link:** [`03.asm`](./03.asm)
- **Objective:** Perform basic arithmetic operations (ADD, SUB, IMUL, DIV) in 8086 assembly language.

### [8086 Logical Operations](./04.asm)
- **Direct Link:** [`04.asm`](./04.asm)
- **Objective:** Execute bitwise logical operations (AND, OR, XOR, NOT) in 8086 assembly language.

### [Booths Multiplication Algorithm](./05.c)
- **Direct Link:** [`05.c`](./05.c)
- **Objective:** Multiply two signed numbers using Booth's multiplication algorithm.

### [Restoring Division Algorithm](./06.c)
- **Direct Link:** [`06.c`](./06.c)
- **Objective:** Implement unsigned division of two 8-bit numbers using the Restoring Division algorithm.

### [Graphics Square Drawing](./07.asm)
- **Direct Link:** [`07.asm`](./07.asm)
- **Objective:** Draw a square in graphics mode using BIOS interrupt `INT 10H`.

### [Bubble Sort Assembly](./08.asm)
- **Direct Link:** [`08.asm`](./08.asm)
- **Objective:** Sort an array of numbers using Bubble Sort in 8086 assembly language and display the sorted result.

### [Block Data Transfer](./09.asm)
- **Direct Link:** [`09.asm`](./09.asm)
- **Objective:** Perform block transfer of data in memory using index registers (`SI` and `DI`) with `REP MOVSB`.

### [Display English Alphabets](./10.asm)
- **Direct Link:** [`10.asm`](./10.asm)
- **Objective:** Display uppercase ('A'-'Z') and lowercase ('a'-'z') English alphabets using DOS interrupt `INT 21H`.
