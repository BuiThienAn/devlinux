# Bài Tập — Session 03: Câu Lệnh Điều Kiện
**Deadline: 2026-09-14 23:59:00**

---

## Exercise_1 [build]

### Problem Statement

Kiểm tra số chẵn hay lẻ

Viết chương trình C:
1. Nhập vào một số nguyên
2. Kiểm tra xem số đó là chẵn hay lẻ
3. In kết quả

**Ví dụ:**
```
Nhập một số: 7
7 là số lẻ
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

Kiểm tra số âm, dương hay bằng 0

Viết chương trình C:
1. Nhập vào một số nguyên
2. Kiểm tra số đó là âm, dương hay bằng 0
3. In kết quả tương ứng

**Ví dụ:**
```
Nhập một số: -5
-5 là số âm
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

Xếp loại theo điểm số

Viết chương trình C:
1. Nhập vào điểm số (0–100)
2. Xếp loại theo quy tắc:
   - ≥90: Xuất sắc
   - 80–89: Giỏi
   - 65–79: Khá
   - 50–64: Trung bình
   - <50: Yếu
3. In ra xếp loại

**Ví dụ:**
```
Nhập điểm: 85
Xếp loại: Giỏi
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

Kiểm tra đủ tuổi thi bằng lái

Viết chương trình C:
1. Nhập vào tuổi của một người
2. Kiểm tra xem có đủ điều kiện thi bằng lái xe máy (≥18 tuổi) hay không
3. In kết quả

**Ví dụ:**
```
Nhập tuổi: 20
Bạn đủ điều kiện thi bằng lái xe máy
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

Xác định thứ trong tuần

Viết chương trình C:
1. Nhập vào một số (1–7)
2. In ra thứ tương ứng:
   - 1: Thứ 2
   - 2: Thứ 3
   - 3: Thứ 4
   - 4: Thứ 5
   - 5: Thứ 6
   - 6: Thứ 7
   - 7: Chủ nhật
3. Nếu nhập sai (không trong 1–7) → in lỗi

**Ví dụ:**
```
Nhập số (1-7): 3
Đó là Thứ 4
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

Xác định số ngày trong tháng

Viết chương trình C:
1. Nhập vào tháng (1–12)
2. In ra số ngày của tháng đó
   - Tháng 1, 3, 5, 7, 8, 10, 12: 31 ngày
   - Tháng 4, 6, 9, 11: 30 ngày
   - Tháng 2: 28 ngày (không xét năm nhuận)
3. Nếu nhập sai → in lỗi

**Ví dụ:**
```
Nhập tháng: 2
Tháng 2 có 28 ngày
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

Kiểm tra tam giác hợp lệ và phân loại

Viết chương trình C:
1. Nhập vào 3 số nguyên là độ dài 3 cạnh
2. Kiểm tra xem chúng có tạo thành tam giác hợp lệ không
   - Điều kiện: tổng 2 cạnh bất kỳ > cạnh còn lại
3. Nếu hợp lệ → phân loại:
   - **Tam giác đều**: 3 cạnh bằng nhau
   - **Tam giác cân**: 2 cạnh bằng nhau
   - **Tam giác vuông**: a² + b² = c²
   - **Tam giác thường**: không thuộc các loại trên
4. In kết quả

**Ví dụ:**
```
Nhập 3 cạnh: 3 4 5
Đó là tam giác vuông
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

Máy tính mini (4 phép tính cơ bản)

Viết chương trình C:
1. Nhập vào 2 số thực (`float` hoặc `double`)
2. Nhập vào 1 toán tử (+, -, *, /)
3. Sử dụng **switch-case** để thực hiện phép tính:
   - '+': Cộng
   - '-': Trừ
   - '*': Nhân
   - '/': Chia (kiểm tra chia cho 0)
4. In kết quả
5. Nếu toán tử không hợp lệ → in thông báo lỗi

**Ví dụ:**
```
Nhập số 1: 10
Nhập toán tử: /
Nhập số 2: 2
Kết quả: 5.00
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

Quản lý giá vé xe bus

Viết chương trình C:
1. Nhập vào loại hành khách:
   - 1: Trẻ em
   - 2: Người lớn
   - 3: Người già
2. Nhập vào loại ngày:
   - 1: Ngày thường
   - 2: Ngày lễ
3. Quy tắc tính giá:
   - Giá vé cơ bản: 10,000 đ
   - Nếu **ngày lễ** → tăng 50%
   - **Trẻ em** → giảm 30%
   - **Người già** → giảm 20%
   - **Người lớn** → không giảm
4. In ra số tiền cuối cùng (với đơn vị đ)

**Ví dụ:**
```
Nhập loại hành khách (1=Trẻ em, 2=Người lớn, 3=Người già): 1
Nhập loại ngày (1=Thường, 2=Lễ): 2
Giá vé: 10500 đ
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

Tính tiền điện với giá bậc thang

Viết chương trình C:
1. Nhập số kWh tiêu thụ
2. Nhập loại hộ:
   - 1: Hộ thường
   - 2: Hộ chính sách
3. Tính tiền điện theo giá bậc thang:
   - 0–50 kWh: 1,800 đ/kWh
   - 51–100 kWh: 2,000 đ/kWh
   - 101–200 kWh: 2,500 đ/kWh
   - >200 kWh: 3,000 đ/kWh
4. Áp dụng các điều khoản:
   - Nếu kWh > 300 và hộ **thường** → cộng thêm **5% phụ phí**
   - Nếu kWh ≤ 30 → tối thiểu **50,000 đ**
   - Nếu hộ **chính sách** → giảm **10%** từ tổng tiền
5. In ra tổng tiền điện (với đơn vị đ)

**Gợi ý:** Tính tiền từng bậc:
- Bậc 1: min(kWh, 50) × 1800
- Bậc 2: max(0, min(kWh, 100) - 50) × 2000
- Bậc 3: max(0, min(kWh, 200) - 100) × 2500
- Bậc 4: max(0, kWh - 200) × 3000

**Ví dụ:**
```
Nhập số kWh: 150
Nhập loại hộ (1=Thường, 2=Chính sách): 1
Tiền điện: 455000 đ
(50×1800 + 50×2000 + 50×2500 = 90000 + 100000 + 125000 = 315000)
```

### Submission

```
Exercise_10/
├── main.c
└── Makefile (targets: all, clean)
```
