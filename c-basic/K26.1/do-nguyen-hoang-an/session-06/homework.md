# Bài Tập — Session 06: Mảng
**Deadline: 2026-10-05 23:59:00**

---

## Exercise_1 [build]

### Problem Statement

Tổng và trung bình cộng

Viết chương trình C:
1. Nhập vào mảng `n` số nguyên
2. Tính:
   - Tổng các phần tử
   - Trung bình cộng
3. In kết quả

**Ví dụ:**
```
Nhập số lượng phần tử: 5
Nhập 5 phần tử: 1 2 3 4 5
Tổng: 15
Trung bình cộng: 3.00
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

Tìm phần tử lớn nhất, nhỏ nhất

Viết chương trình C:
1. Nhập mảy `n` số nguyên
2. Tìm và in ra:
   - Giá trị lớn nhất và vị trí của nó
   - Giá trị nhỏ nhất và vị trí của nó
3. In cả mảy ban đầu

**Ví dụ:**
```
Nhập số lượng phần tử: 5
Nhập 5 phần tử: 5 2 8 1 9
Mảy: 5 2 8 1 9
Phần tử lớn nhất: 9 (vị trí 4)
Phần tử nhỏ nhất: 1 (vị trí 3)
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

Đếm số lần xuất hiện

Viết chương trình C:
1. Nhập mảy `n` số nguyên
2. Nhập tiếp 1 số `x`
3. Đếm xem `x` xuất hiện bao nhiêu lần trong mảy
4. In kết quả

**Ví dụ:**
```
Nhập số lượng phần tử: 6
Nhập 6 phần tử: 1 2 3 2 5 2
Nhập số cần tìm: 2
Số 2 xuất hiện 3 lần trong mảy
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

Sắp xếp mảy tăng dần

Viết chương trình C:
1. Nhập mảy `n` số nguyên
2. Sắp xếp mảy theo thứ tự tăng dần bằng thuật toán **Selection Sort**
   - Tìm phần tử nhỏ nhất trong phần chưa sắp xếp
   - Hoán đổi với phần tử đầu của phần chưa sắp xếp
   - Lặp lại cho đến hết
3. In mảy ban đầu và mảy sau sắp xếp

**Ví dụ:**
```
Nhập số lượng phần tử: 5
Nhập 5 phần tử: 5 2 8 1 9
Mảy ban đầu: 5 2 8 1 9
Mảy sau sắp xếp: 1 2 5 8 9
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

Tìm kiếm tuyến tính và nhị phân

Viết chương trình C:
1. Nhập mảy `n` số nguyên **đã được sắp xếp tăng dần**
2. Viết 2 hàm:
   - `int linearSearch(int *arr, int n, int x)` - Tìm kiếm tuyến tính
   - `int binarySearch(int *arr, int n, int x)` - Tìm kiếm nhị phân
3. Nhập số `x` cần tìm
4. Gọi cả 2 hàm và in vị trí nếu tìm thấy, ngược lại báo "Không tìm thấy"

**Ví dụ:**
```
Nhập số lượng phần tử: 5
Nhập 5 phần tử (đã sắp xếp): 1 2 5 8 9
Nhập số cần tìm: 5
Tìm kiếm tuyến tính: Tìm thấy tại vị trí 2
Tìm kiếm nhị phân: Tìm thấy tại vị trí 2
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

Xóa phần tử khỏi mảy

Viết chương trình C:
1. Nhập mảy `n` số nguyên
2. Nhập số `x`
3. Nếu `x` xuất hiện trong mảy thì xóa **tất cả các vị trí chứa x**
   - Dịch các phần tử phía sau lên một vị trí
   - Giảm kích thước mảy
4. In mảy ban đầu, mảy sau khi xóa, và số phần tử còn lại

**Ví dụ:**
```
Nhập số lượng phần tử: 6
Nhập 6 phần tử: 1 2 3 2 5 2
Nhập số cần xóa: 2
Mảy ban đầu: 1 2 3 2 5 2
Mảy sau xóa: 1 3 5
Số phần tử còn lại: 3
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

Ma trận tổng

Viết chương trình C:
1. Nhập ma trận số nguyên kích thước `m x n`
2. Tính:
   - Tổng tất cả phần tử
   - Tổng từng hàng (in từng kết quả)
   - Tổng từng cột (in từng kết quả)
3. In ma trận và các kết quả

**Ví dụ:**
```
Nhập số dòng: 2
Nhập số cột: 3
Nhập ma trận:
1 2 3
4 5 6
Ma trận:
1 2 3
4 5 6
Tổng tất cả: 21
Tổng hàng 1: 6
Tổng hàng 2: 15
Tổng cột 1: 5
Tổng cột 2: 7
Tổng cột 3: 9
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

Ma trận vuông – đường chéo

Viết chương trình C:
1. Nhập ma trận vuông `n x n`
2. Tính và in ra:
   - Tổng đường chéo chính (từ góc trên trái xuống góc dưới phải)
   - Tổng đường chéo phụ (từ góc trên phải xuống góc dưới trái)
3. In cả ma trận

**Ví dụ:**
```
Nhập cấp ma trận: 3
Nhập ma trận 3x3:
1 2 3
4 5 6
7 8 9
Ma trận:
1 2 3
4 5 6
7 8 9
Tổng đường chéo chính: 15 (1+5+9)
Tổng đường chéo phụ: 15 (3+5+7)
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

Sắp xếp từng hàng của ma trận

Viết chương trình C:
1. Nhập ma trận `m x n`
2. Sắp xếp từng hàng của ma trận theo thứ tự **tăng dần**
3. In ma trận ban đầu và ma trận sau khi sắp xếp

**Ví dụ:**
```
Nhập số dòng: 2
Nhập số cột: 3
Nhập ma trận:
5 2 8
1 9 3
Ma trận ban đầu:
5 2 8
1 9 3
Ma trận sau sắp xếp:
2 5 8
1 3 9
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

Ma trận xoắn ốc

Viết chương trình C:
1. Nhập ma trận vuông `n x n`
2. In ra các phần tử theo dạng **xoắn ốc** (spiral order):
   - Bắt đầu từ góc trên trái
   - Đi sang phải, xuống dưới, sang trái, lên trên
   - Lặp lại cho đến khi hết phần tử

**Ví dụ:**
```
Nhập cấp ma trận: 3
Nhập ma trận 3x3:
1 2 3
4 5 6
7 8 9

Ma trận:
1 2 3
4 5 6
7 8 9

Xoắn ốc: 1 2 3 6 9 8 7 4 5
```

**Gợi ý:**
- Quản lý 4 biến: top (hàng đầu), bottom (hàng cuối), left (cột trái), right (cột phải)
- Mỗi lần duyệt 1 vòng:
  - Đi từ trái sang phải trên hàng `top`, sau đó `top++`
  - Đi từ trên xuống dưới ở cột `right`, sau đó `right--`
  - Đi từ phải sang trái trên hàng `bottom`, sau đó `bottom--`
  - Đi từ dưới lên trên ở cột `left`, sau đó `left++`
- Lặp lại cho đến khi `top <= bottom` và `left <= right`

### Submission

```
Exercise_10/
├── main.c
└── Makefile (targets: all, clean)
```
