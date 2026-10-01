# Bài Tập — Session 02: Biến, Kiểu Dữ Liệu và Toán Tử
**Deadline: 2026-09-07 23:59:00**

---

## Exercise_1 [build]

### Problem Statement

Tính tổng của hai số nguyên

Viết chương trình C:
1. Khai báo 2 biến kiểu `int`
2. Nhập 2 số
3. Tính tổng
4. In kết quả

**Ví dụ:**
```
Nhập số thứ nhất: 5
Nhập số thứ hai: 3
Tổng: 8
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

Tính diện tích hình chữ nhật

Viết chương trình C:
1. Khai báo 2 biến kiểu `float` cho chiều dài, chiều rộng
2. Nhập 2 giá trị
3. Tính diện tích = dài × rộng
4. In kết quả (2 chữ số thập phân)

**Ví dụ:**
```
Nhập chiều dài: 5.5
Nhập chiều rộng: 3.2
Diện tích: 17.60
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

Chuyển đổi nhiệt độ Celsius sang Fahrenheit

Viết chương trình C:
1. Khai báo 2 biến `float`
2. Nhập nhiệt độ Celsius
3. Tính F = (C × 9/5) + 32
4. In kết quả F

**Ví dụ:**
```
Nhập độ Celsius: 0
Độ Fahrenheit: 32.00
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

Tính chu vi và diện tích hình tròn

Viết chương trình C:
1. Khai báo biến `float` cho bán kính
2. Nhập bán kính
3. Tính chu vi = 2 × π × r
4. Tính diện tích = π × r²
5. In cả 2 kết quả

**Gợi ý:** Dùng `M_PI` từ `math.h` hoặc `#define PI 3.14159`

**Ví dụ:**
```
Nhập bán kính: 5
Chu vi: 31.42
Diện tích: 78.54
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

Giải phương trình bậc 1: ax + b = 0

Viết chương trình C:
1. Nhập a, b
2. Kiểm tra:
   - Nếu a = 0 và b = 0 → "Vô số nghiệm"
   - Nếu a = 0 và b ≠ 0 → "Vô nghiệm"
   - Nếu a ≠ 0 → x = -b/a
3. In kết quả

**Ví dụ:**
```
Nhập a: 2
Nhập b: -6
Nghiệm x = 3.00
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

Tính lương ròng sau thuế

Viết chương trình C:
1. Nhập lương brutto (trước thuế)
2. Nhập tỉ lệ thuế (%)
3. Tính tiền thuế = lương × tỉ lệ / 100
4. Tính lương ròng = lương - tiền thuế
5. In cả 3 giá trị

**Ví dụ:**
```
Nhập lương brutto: 10000000
Nhập tỉ lệ thuế (%): 10
Tiền thuế: 1000000
Lương ròng: 9000000
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

Tính tổng tiền thanh toán (có VAT)

Viết chương trình C:
1. Nhập giá tiền hàng
2. Nhập tỉ lệ VAT (%)
3. Tính tiền VAT = giá × VAT / 100
4. Tính tổng tiền = giá + VAT
5. In cả 3 giá trị

**Ví dụ:**
```
Nhập giá hàng: 100000
Nhập VAT (%): 10
Tiền VAT: 10000
Tổng tiền: 110000
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

Ép kiểu (Type Casting)

Viết chương trình C:
1. Khai báo biến `int a = 5`, `int b = 2`
2. Tính:
   - Phép chia nguyên: a / b (kết quả là int)
   - Phép chia thực: (float)a / b (ép kiểu sang float)
3. In cả 2 kết quả để thấy sự khác biệt

**Ví dụ:**
```
a = 5, b = 2
Chia nguyên: 5 / 2 = 2
Chia thực: (float)5 / 2 = 2.50
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

Các phép toán số học (+, -, *, /, %)

Viết chương trình C:
1. Nhập 2 số nguyên
2. Tính và in:
   - Cộng: a + b
   - Trừ: a - b
   - Nhân: a × b
   - Chia nguyên: a / b
   - Chia dư: a % b
3. In tất cả kết quả

**Ví dụ:**
```
Nhập số 1: 17
Nhập số 2: 5
17 + 5 = 22
17 - 5 = 12
17 × 5 = 85
17 / 5 = 3
17 % 5 = 2
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

Tính tiền lãi ngân hàng

Viết chương trình C:
1. Nhập:
   - Số tiền gốc (principal)
   - Lãi suất hàng năm (%)
   - Số năm gửi
2. Tính tiền lãi = gốc × lãi suất × năm / 100
3. Tính tổng tiền = gốc + lãi
4. In cả 3 giá trị

**Ví dụ:**
```
Nhập tiền gốc: 1000000
Nhập lãi suất (%): 5
Nhập số năm: 2
Tiền lãi: 100000
Tổng tiền: 1100000
```

### Submission

```
Exercise_10/
├── main.c
└── Makefile (targets: all, clean)
```
