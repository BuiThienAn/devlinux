# Bài Tập — Session 07: Con Trỏ
**Deadline: 2026-10-12 23:59:00**

---

## Exercise_1 [build]

### Problem Statement

In địa chỉ và giá trị

Viết chương trình C:
1. Khai báo một biến `int x = 10;`
2. Dùng con trỏ `p` để trỏ đến `x`
3. In ra:
   - Giá trị của `x`
   - Địa chỉ của `x` (dùng `&x`)
   - Giá trị của con trỏ `p` (là địa chỉ)
   - Giá trị được trỏ tới (dùng `*p`)

**Ví dụ:**
```
Giá trị của x: 10
Địa chỉ của x: 0x7fff...
Giá trị con trỏ p: 0x7fff...
Giá trị được trỏ tới: 10
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

Đổi giá trị bằng con trỏ

Viết chương trình C:
1. Khai báo `int a = 5;`
2. Tạo con trỏ `p` trỏ đến `a`
3. Thay đổi giá trị của `a` thông qua con trỏ `p` (gán `*p = 20`)
4. In ra giá trị `a` trước và sau khi thay đổi

**Ví dụ:**
```
Giá trị a ban đầu: 5
Giá trị a sau thay đổi qua con trỏ: 20
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

Hoán đổi 2 số (swap)

Viết chương trình C:
1. Viết hàm `void swap(int *x, int *y)` để hoán đổi giá trị của 2 số nguyên
2. Trong `main()`:
   - Nhập 2 số vào 2 biến
   - Gọi hàm `swap()` để hoán đổi
   - In 2 số trước và sau hoán đổi

**Ví dụ:**
```
Nhập số 1: 5
Nhập số 2: 10
Trước hoán đổi: a = 5, b = 10
Sau hoán đổi: a = 10, b = 5
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

Tính tổng mảng (dùng con trỏ)

Viết chương trình C:
1. Nhập mảng số nguyên có `n` phần tử
2. Viết hàm `int sum(int *arr, int n)` để tính tổng các phần tử mảng bằng cách duyệt con trỏ (dùng `arr[i]` hoặc `*(arr+i)`)
3. Trong `main()`:
   - Yêu cầu người dùng nhập số lượng phần tử
   - Nhập các phần tử vào mảng
   - Gọi hàm `sum()` để tính tổng
   - In kết quả

**Ví dụ:**
```
Nhập số lượng phần tử: 5
Nhập 5 phần tử: 1 2 3 4 5
Tổng mảng: 15
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

Tìm phần tử lớn nhất trong mảng (dùng con trỏ)

Viết chương trình C:
1. Viết hàm `int* findMax(int *arr, int n)` trả về con trỏ trỏ tới phần tử lớn nhất trong mảng
2. Trong `main()`:
   - Nhập mảng số nguyên
   - Gọi hàm `findMax()` để tìm phần tử lớn nhất
   - In ra giá trị lớn nhất và địa chỉ của nó

**Ví dụ:**
```
Nhập số lượng phần tử: 4
Nhập 4 phần tử: 5 12 8 3
Phần tử lớn nhất: 12
Địa chỉ: 0x7fff...
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

Đếm số nguyên tố trong mảng (dùng con trỏ)

Viết chương trình C:
1. Viết hàm `int isPrime(int num)` để kiểm tra một số có phải nguyên tố không
2. Viết hàm `int countPrimes(int *arr, int n)` để đếm số lượng số nguyên tố trong mảng (dùng con trỏ để duyệt)
3. Trong `main()`:
   - Nhập mảng `n` số nguyên
   - Gọi hàm `countPrimes()` để đếm số nguyên tố
   - In kết quả

**Ví dụ:**
```
Nhập số lượng phần tử: 6
Nhập 6 phần tử: 2 3 4 5 6 7
Số lượng số nguyên tố: 4
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

Đảo ngược mảng (dùng con trỏ)

Viết chương trình C:
1. Viết hàm `void reverse(int *arr, int n)` để đảo ngược mảng
2. **Quan trọng:** Không dùng chỉ số mảng, chỉ dùng con trỏ (dùng `*(ptr++)` hoặc duyệt từ 2 đầu)
3. Trong `main()`:
   - Nhập mảng số nguyên
   - In mảng ban đầu
   - Gọi hàm `reverse()` để đảo ngược
   - In mảng sau khi đảo

**Ví dụ:**
```
Nhập số lượng phần tử: 5
Nhập 5 phần tử: 1 2 3 4 5
Mảng ban đầu: 1 2 3 4 5
Mảng sau đảo: 5 4 3 2 1
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

Xử lý mảng 2 chiều với con trỏ

Viết chương trình C:
1. Viết hàm `void inputMatrix(int arr[][100], int m, int n)` để nhập ma trận `m x n`
2. Viết hàm `void printMatrix(int arr[][100], int m, int n)` để in ma trận
3. Viết hàm `int sumMatrix(int arr[][100], int m, int n)` để tính tổng tất cả phần tử
4. Trong `main()`:
   - Yêu cầu nhập số dòng `m` và số cột `n`
   - Nhập ma trận bằng hàm
   - In ma trận
   - Tính và in tổng

**Ví dụ:**
```
Nhập số dòng: 2
Nhập số cột: 3
Nhập ma trận 2x3:
1 2 3
4 5 6
Ma trận:
1 2 3
4 5 6
Tổng tất cả phần tử: 21
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

Chuỗi ký tự cơ bản với con trỏ

Viết chương trình C:
1. Viết hàm `int length(char *s)` để tính độ dài chuỗi (tương tự `strlen()`)
   - Dùng con trỏ để duyệt qua các ký tự cho đến `\0`
2. Viết hàm `void reverseString(char *s)` để đảo ngược chuỗi
3. Trong `main()`:
   - Nhập một chuỗi ký tự (dùng mảng `char s[100]`)
   - Gọi hàm `length()` để tính độ dài
   - Gọi hàm `reverseString()` để đảo chuỗi
   - In chuỗi ban đầu, độ dài, và chuỗi đảo

**Ví dụ:**
```
Nhập chuỗi: Hello
Độ dài chuỗi: 5
Chuỗi ban đầu: Hello
Chuỗi đảo: olleH
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

Truyền mảy vào hàm (menu nhỏ)

Viết chương trình quản lý một mảy số nguyên với menu:

```
====== MENU ======
1. Nhập mảng
2. In mảng
3. Tính tổng
4. Tìm max
5. Đảo ngược mảng
6. Thoát
```

**Yêu cầu:**
1. Viết các hàm:
   - `void input(int *arr, int *n)` - nhập mảng (cần lưu độ dài `n`)
   - `void print(int *arr, int n)` - in mảng
   - `int sum(int *arr, int n)` - tính tổng
   - `int findMax(int *arr, int n)` - tìm max
   - `void reverse(int *arr, int n)` - đảo ngược
2. Tất cả các thao tác thực hiện bằng hàm có tham số là **con trỏ mảng**
3. Lặp lại cho đến khi người dùng chọn 6 (Thoát)

**Gợi ý:** Mảng đủ lớn (tối đa 100 phần tử), dùng `*n` để lưu số lượng phần tử thực tế

**Ví dụ:**
```
====== MENU ======
1. Nhập mảng
2. In mảng
3. Tính tổng
4. Tìm max
5. Đảo ngược mảng
6. Thoát
Chọn (1-6): 1
Nhập số lượng phần tử: 3
Nhập 3 phần tử: 5 10 15
Chọn (1-6): 2
Mảng: 5 10 15
Chọn (1-6): 3
Tổng: 30
Chọn (1-6): 4
Max: 15
Chọn (1-6): 5
Mảng sau đảo: 15 10 5
Chọn (1-6): 6
Thoát chương trình
```

### Submission

```
Exercise_10/
├── main.c
└── Makefile (targets: all, clean)
```
