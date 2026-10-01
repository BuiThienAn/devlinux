# Bài Tập — Session 05: Hàm
**Deadline: 2026-09-28 23:59:00**

---

## Exercise_1 [build]

### Problem Statement

Hàm kiểm tra số nguyên tố

Viết chương trình C:
1. Viết hàm `int isPrime(int n)` để kiểm tra số nguyên tố
   - Trả về 1 nếu n là số nguyên tố
   - Trả về 0 nếu n không phải số nguyên tố
2. Trong `main()`:
   - Nhập một số n
   - Gọi hàm và in kết quả

**Ví dụ:**
```
Nhập số: 7
7 là số nguyên tố
```

### Submission

```
Exercise_1/
├── main.c
└── Makefile (targets: all, clean)
```

---

## Exercise_2 [build]

### Problem Statement

Hàm tính giai thừa

Viết chương trình C:
1. Viết hàm `long long factorial(int n)` để tính giai thừa của n
   - Trả về n! = 1 × 2 × 3 × ... × n
   - Nếu n ≤ 1: trả về 1
2. Trong `main()`:
   - Nhập n
   - Gọi hàm và in ra n!

**Ví dụ:**
```
Nhập n: 5
5! = 120
```

### Submission

```
Exercise_2/
├── main.c
└── Makefile (targets: all, clean)
```

---

## Exercise_3 [build]

### Problem Statement

Hàm UCLN và BCNN

Viết chương trình C:
1. Viết hàm `int gcd(int a, int b)` để tính ước chung lớn nhất (sử dụng thuật toán Euclid)
2. Viết hàm `int lcm(int a, int b)` để tính bội chung nhỏ nhất
   - Công thức: lcm(a, b) = (a × b) / gcd(a, b)
3. Trong `main()`:
   - Nhập 2 số
   - Gọi hàm và in UCLN, BCNN

**Ví dụ:**
```
Nhập số a: 12
Nhập số b: 18
UCLN(12, 18) = 6
BCNN(12, 18) = 36
```

### Submission

```
Exercise_3/
├── main.c
└── Makefile (targets: all, clean)
```

---

## Exercise_4 [build]

### Problem Statement

Hàm số Fibonacci

Viết chương trình C:
1. Viết hàm `int fibonacci(int n)` trả về số Fibonacci thứ n
   - Dãy Fibonacci: 0, 1, 1, 2, 3, 5, 8, 13, ...
   - Số thứ 1 = 0, số thứ 2 = 1, số thứ n = fibonacci(n-1) + fibonacci(n-2)
2. Trong `main()`:
   - Nhập n
   - In dãy Fibonacci từ 1 → n bằng cách gọi hàm nhiều lần

**Ví dụ:**
```
Nhập n: 7
Dãy Fibonacci: 0 1 1 2 3 5 8
```

### Submission

```
Exercise_4/
├── main.c
└── Makefile (targets: all, clean)
```

---

## Exercise_5 [build]

### Problem Statement

Hàm kiểm tra số đối xứng (Palindrome)

Viết chương trình C:
1. Viết hàm `int isPalindrome(int n)` kiểm tra số nguyên dương có đối xứng hay không
   - Ví dụ: 121, 1221 là số đối xứng
   - 123 không phải số đối xứng
2. Trong `main()`:
   - Nhập n
   - Gọi hàm và in kết quả

**Ví dụ:**
```
Nhập số: 121
121 là số đối xứng
```

### Submission

```
Exercise_5/
├── main.c
└── Makefile (targets: all, clean)
```

---

## Exercise_6 [build]

### Problem Statement

Hàm tính tổng chữ số

Viết chương trình C:
1. Viết hàm `int sumDigits(int n)` tính tổng các chữ số của số nguyên dương n
2. Trong `main()`:
   - Nhập n
   - Gọi hàm và in kết quả

**Ví dụ:**
```
Nhập số: 12345
Tổng các chữ số: 15
```

### Submission

```
Exercise_6/
├── main.c
└── Makefile (targets: all, clean)
```

---

## Exercise_7 [build]

### Problem Statement

Hàm phân tích thừa số nguyên tố

Viết chương trình C:
1. Viết hàm `void factorize(int n)` in ra các thừa số nguyên tố của n
2. Trong `main()`:
   - Nhập n
   - Gọi hàm để in kết quả

**Ví dụ:**
```
Nhập số: 60
Các thừa số nguyên tố: 2 x 2 x 3 x 5
```

### Submission

```
Exercise_7/
├── main.c
└── Makefile (targets: all, clean)
```

---

## Exercise_8 [build]

### Problem Statement

Hàm kiểm tra số hoàn hảo

Viết chương trình C:
1. Viết hàm `int isPerfect(int n)` kiểm tra một số có phải số hoàn hảo không
   - Số hoàn hảo: tổng các ước số (không tính chính nó) = chính nó
   - Ví dụ: 6 = 1 + 2 + 3, 28 = 1 + 2 + 4 + 7 + 14
2. Trong `main()`:
   - Nhập n
   - In tất cả số hoàn hảo ≤ n

**Ví dụ:**
```
Nhập n: 30
Các số hoàn hảo ≤ 30: 6 28
```

### Submission

```
Exercise_8/
├── main.c
└── Makefile (targets: all, clean)
```

---

## Exercise_9 [build]

### Problem Statement

Menu tính toán (nhiều hàm + switch-case)

Viết chương trình C với menu:

```
====== MENU ======
1. Tính giai thừa
2. Kiểm tra số nguyên tố
3. Tính Fibonacci
4. Kiểm tra số đối xứng
5. Thoát
```

**Yêu cầu:**
1. Mỗi chức năng là một hàm riêng
2. Người dùng nhập lựa chọn (1–5)
3. Thực hiện chức năng tương ứng (có thể lặp lại)
4. Chọn 5 để thoát chương trình
5. Sử dụng `switch-case` để xử lý lựa chọn

**Ví dụ:**
```
====== MENU ======
1. Tính giai thừa
2. Kiểm tra số nguyên tố
3. Tính Fibonacci
4. Kiểm tra số đối xứng
5. Thoát
Chọn (1-5): 1
Nhập n: 5
5! = 120
Chọn (1-5): 5
Thoát chương trình
```

### Submission

```
Exercise_9/
├── main.c
└── Makefile (targets: all, clean)
```

---

## Exercise_10 [build]

### Problem Statement

Hàm tìm số Armstrong

Viết chương trình C:
1. Viết hàm `int isArmstrong(int n)` để kiểm tra số Armstrong
   - Số Armstrong: tổng lũy thừa bậc k của các chữ số = chính nó (k = số chữ số)
   - Ví dụ: 153 = 1³ + 5³ + 3³ (3 chữ số)
   - 9474 = 9⁴ + 4⁴ + 7⁴ + 4⁴ (4 chữ số)
2. Trong `main()`:
   - Nhập n
   - In tất cả số Armstrong ≤ n

**Ví dụ:**
```
Nhập n: 200
Các số Armstrong ≤ 200: 1 2 3 4 5 6 7 8 9 153
```

### Submission

```
Exercise_10/
├── main.c
└── Makefile (targets: all, clean)
```
