# Bài Tập — Session 04: Vòng Lặp
**Deadline: 2026-09-21 23:59:00**

---

## Exercise_1 [build]

### Problem Statement

Đếm số chia hết

Viết chương trình C:
1. Nhập số n
2. In ra các số từ 1 đến n mà chia hết cho 3 hoặc 5
3. Đếm xem có bao nhiêu số như vậy

**Ví dụ:**
```
Nhập n: 15
Các số chia hết cho 3 hoặc 5: 3 5 6 9 10 12 15
Tổng: 7 số
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

Tổng nghịch đảo

Viết chương trình C:
1. Nhập n
2. Tính tổng: 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
3. In ra giá trị gần đúng (`float`)

**Ví dụ:**
```
Nhập n: 5
Tổng: 1 + 1/2 + 1/3 + 1/4 + 1/5 = 2.283333
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

Số đảo ngược

Viết chương trình C:
1. Nhập số nguyên dương n
2. Dùng vòng lặp để đảo ngược các chữ số của n
3. In số ban đầu và số sau khi đảo

**Ví dụ:**
```
Nhập số: 12345
Số ban đầu: 12345
Số đảo ngược: 54321
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

Kiểm tra số hoàn hảo

Viết chương trình C:
1. Một số gọi là **hoàn hảo** nếu tổng các ước số dương nhỏ hơn nó = chính nó
2. Ví dụ: 6 = 1 + 2 + 3, 28 = 1 + 2 + 4 + 7 + 14
3. Nhập n
4. In ra tất cả số hoàn hảo ≤ n

**Ví dụ:**
```
Nhập n: 30
Các số hoàn hảo ≤ 30: 6 28
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

In hình tam giác Pascal

Viết chương trình C:
1. Nhập n
2. In ra tam giác Pascal có n hàng
3. Quy tắc Pascal: mỗi số = tổng 2 số trên nó

**Ví dụ:**
```
Nhập n: 5
        1
       1 1
      1 2 1
     1 3 3 1
    1 4 6 4 1
```

**Gợi ý:** Dùng 2 vòng lặp lồng nhau, mỗi hàng i có i số

### Submission

```
Exercise_5/
├── main.c
└── Makefile (targets: all, clean)
```

---

## Exercise_6 [build]

### Problem Statement

Máy tính đơn giản (switch-case + vòng lặp)

Viết chương trình C:
1. Nhập 2 số `a` và `b`
2. Nhập 1 toán tử: +, -, *, /, %
3. Dùng `switch-case` để thực hiện phép tính
4. In kết quả
5. Nếu toán tử không hợp lệ → in "Toán tử sai"
6. Cho phép người dùng nhập nhiều lần cho đến khi muốn thoát

**Ví dụ:**
```
Nhập số 1: 10
Nhập toán tử: /
Nhập số 2: 3
Kết quả: 3
Tiếp tục? (y/n): y
Nhập số 1: 5
Nhập toán tử: x
Toán tử sai!
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

ATM rút tiền

Viết chương trình C:
1. Nhập số tiền cần rút (phải là bội số của 50k)
2. ATM có mệnh giá: 500k, 200k, 100k, 50k
3. In ra số tờ từng loại (ưu tiên tờ lớn trước)
4. Nếu tổng số tờ > 20 → in "Quá giới hạn số tờ"

**Ví dụ:**
```
Nhập số tiền cần rút: 1350000
Tờ 500k: 2 tờ
Tờ 200k: 3 tờ
Tờ 100k: 1 tờ
Tờ 50k: 1 tờ
Tổng: 7 tờ
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

Trò chơi đoán số

Viết chương trình C:
1. Máy sinh ra số ngẫu nhiên từ 1 → 100 (dùng `srand()` và `rand()`)
2. Người dùng nhập số đoán
3. Hệ thống phản hồi:
   - Nếu đoán sai → báo "Lớn hơn" hoặc "Nhỏ hơn"
   - Nếu đúng → báo "Chúc mừng, đoán đúng sau X lần"
4. Cho phép chơi nhiều vòng

**Ví dụ:**
```
Số bí mật từ 1-100. Hãy đoán:
Đoán: 50
Nhỏ hơn!
Đoán: 30
Lớn hơn!
Đoán: 40
Chúc mừng, đoán đúng sau 3 lần!
Chơi tiếp? (y/n): n
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

FizzBuzz

Viết chương trình C:
1. Nhập số n
2. In các số từ 1 → n theo quy tắc:
   - Nếu chia hết cho 3 → in "Fizz"
   - Nếu chia hết cho 5 → in "Buzz"
   - Nếu chia hết cho cả 3 và 5 → in "FizzBuzz"
   - Ngược lại → in chính số đó
3. Mỗi kết quả trên 1 dòng

**Ví dụ:**
```
Nhập n: 15
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
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

Máy bán hàng tự động (switch-case + vòng lặp)

Viết chương trình C với menu sản phẩm:

```
====== MENU ======
1. Nước suối (10k)
2. Nước ngọt (15k)
3. Cà phê (20k)
4. Trà sữa (25k)
5. Thoát
```

**Yêu cầu:**
1. Người dùng nhập số tiền ban đầu
2. Dùng `switch-case` + vòng lặp cho phép chọn sản phẩm nhiều lần
3. Nếu tiền không đủ → báo lỗi, yêu cầu chọn lại
4. Sau mỗi mua hàng, in số tiền còn lại
5. Chọn 5 hoặc tiền hết thì kết thúc
6. In tổng tiền đã dùng

**Ví dụ:**
```
Nhập số tiền ban đầu: 50000
====== MENU ======
1. Nước suối (10k)
2. Nước ngọt (15k)
3. Cà phê (20k)
4. Trà sữa (25k)
5. Thoát
Chọn (1-5): 1
Đã mua nước suối. Tiền còn: 40000
Chọn (1-5): 4
Đã mua trà sữa. Tiền còn: 15000
Chọn (1-5): 1
Đã mua nước suối. Tiền còn: 5000
Chọn (1-5): 2
Tiền không đủ (cần 15k, có 5k)!
Chọn (1-5): 5
Thoát. Đã dùng: 45000
```

### Submission

```
Exercise_10/
├── main.c
└── Makefile (targets: all, clean)
```
