# Bài Tập — Session 10: Quản Lý Bộ Nhớ
**Deadline: 2026-11-02 23:59:00**

---

## Exercise_1 [build]

### Problem Statement

Cấp phát bộ nhớ cho mảy số nguyên

Viết chương trình C:
1. Nhập số lượng phần tử (n)
2. Dùng `malloc()` để cấp phát bộ nhớ cho mảy
3. Kiểm tra xem `malloc()` có thành công không
4. Nhập n phần tử
5. In mảy
6. Giải phóng bằng `free()`

**Ví dụ:**
```
Nhập số lượng: 3
Nhập 3 phần tử: 5 10 15
Mảy: 5 10 15
Đã giải phóng bộ nhớ
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

Cấp phát bộ nhớ cho struct

Viết chương trình C:
1. Định nghĩa struct `Student`
2. Dùng `malloc()` để cấp phát cho 1 biến `Student`
3. Nhập thông tin
4. In thông tin
5. Giải phóng bằng `free()`

**Ví dụ:**
```
Nhập ID: 1
Nhập tên: Nguyen Van A
Nhập GPA: 3.5
Thông tin: ID=1, Tên=Nguyen Van A, GPA=3.50
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

Cấp phát bộ nhớ cho mảy struct

Viết chương trình C:
1. Nhập n
2. Cấp phát bộ nhớ cho mảy n struct `Student`
3. Nhập thông tin n học sinh
4. In danh sách
5. Giải phóng bộ nhớ

**Ví dụ:**
```
Nhập số học sinh: 2
Nhập thông tin học sinh 1: 1 A 3.5
Nhập thông tin học sinh 2: 2 B 3.8
Danh sách:
1. A, 3.50
2. B, 3.80
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

Sử dụng `realloc()` thay đổi kích thước

Viết chương trình C:
1. Cấp phát mảy n phần tử ban đầu
2. Nhập n phần tử
3. Nhập số lượng mới
4. Dùng `realloc()` để thay đổi kích thước
5. Nhập các phần tử mới (nếu tăng)
6. In mảy sau `realloc()`
7. Giải phóng bộ nhớ

**Ví dụ:**
```
Nhập số lượng ban đầu: 2
Nhập 2 phần tử: 1 2
Nhập số lượng mới: 4
Nhập 2 phần tử mới: 3 4
Mảy sau realloc: 1 2 3 4
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

Con trỏ đến con trỏ (double pointer)

Viết chương trình C:
1. Khai báo con trỏ `ptr` (single pointer)
2. Khai báo con trỏ `pptr` trỏ đến `ptr` (double pointer)
3. Cấp phát bộ nhớ cho `ptr`
4. Thay đổi giá trị qua `pptr`
5. In giá trị và các địa chỉ

**Ví dụ:**
```
Giá trị: 10
Địa chỉ của biến: 0x...
Địa chỉ của ptr: 0x...
Địa chỉ của pptr: 0x...
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

Cấp phát bộ nhớ cho chuỗi ký tự

Viết chương trình C:
1. Nhập độ dài chuỗi (n)
2. Cấp phát bộ nhớ cho chuỗi
3. Nhập chuỗi
4. In chuỗi
5. Tính độ dài chuỗi
6. Giải phóng bộ nhớ

**Ví dụ:**
```
Nhập độ dài: 10
Nhập chuỗi: Hello
Chuỗi: Hello
Độ dài: 5
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

Cấp phát ma trận 2D

Viết chương trình C:
1. Nhập số dòng m, số cột n
2. Cấp phát bộ nhớ cho ma trận m×n:
   - Cấp phát mảy m con trỏ (mỗi con trỏ là 1 hàng)
   - Cấp phát bộ nhớ cho từng hàng
3. Nhập ma trận
4. In ma trận
5. Giải phóng bộ nhớ (phải giải từng hàng, rồi giải mảy)

**Ví dụ:**
```
Nhập m=2, n=3
Nhập ma trận:
1 2 3
4 5 6
Ma trận:
1 2 3
4 5 6
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

Kiểm tra lỗi `malloc()` và tránh rò rỉ bộ nhớ

Viết chương trình C:
1. Cấp phát bộ nhớ nhiều lần
2. **Luôn kiểm tra** xem `malloc()` có thành công không
3. Nếu thất bại → in lỗi và thoát
4. Nếu thành công → sử dụng bộ nhớ
5. **Đảm bảo** mỗi `malloc()` có tương ứng `free()`
6. Dùng phạm vi (scope) để tránh rò rỉ bộ nhớ

**Ví dụ:**
```
Cấp phát 100MB...
Thành công! Đã sử dụng.
Giải phóng...
Hoàn tất.
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

Hàm cấp phát và giải phóng bộ nhớ

Viết chương trình C:
1. Viết hàm `int* createArray(int n)` để cấp phát mảy
2. Viết hàm `void freeArray(int *arr)` để giải phóng
3. Viết hàm `void print(int *arr, int n)` để in mảy
4. Viết hàm `void fillArray(int *arr, int n)` để nhập dữ liệu
5. Trong `main()`:
   - Gọi `createArray()`
   - Nhập dữ liệu
   - In mảy
   - Giải phóng

**Ví dụ:**
```
Cấp phát mảy 5 phần tử
Nhập 5 phần tử: 1 2 3 4 5
Mảy: 1 2 3 4 5
Đã giải phóng an toàn
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

Danh sách động (ứng dụng thực tế)

Viết chương trình C:
1. Tạo menu:
   ```
   1. Thêm học sinh
   2. In danh sách
   3. Xóa học sinh
   4. Thoát
   ```
2. Cấp phát bộ nhớ động khi thêm
3. Sử dụng `realloc()` khi cần mở rộng
4. Tính năng:
   - Thêm học sinh vào cuối danh sách
   - In toàn bộ danh sách
   - Xóa theo ID
5. Giải phóng bộ nhớ khi thoát

**Gợi ý:**
- Giữ biến `count` để theo dõi số học sinh
- Giữ biến `capacity` để theo dõi dung lượng cấp phát
- Mỗi lần thêm quá dung lượng → `realloc()` gấp đôi

**Ví dụ:**
```
====== MENU ======
1. Thêm học sinh
2. In danh sách
3. Xóa học sinh
4. Thoát
Chọn: 1
Nhập ID: 1
Nhập tên: A
Nhập GPA: 3.5
Chọn: 2
Danh sách (1 học sinh): 1. A, 3.50
Chọn: 4
Thoát. Đã giải phóng bộ nhớ.
```

### Submission

```
Exercise_10/
├── main.c
└── Makefile (targets: all, clean)
```
