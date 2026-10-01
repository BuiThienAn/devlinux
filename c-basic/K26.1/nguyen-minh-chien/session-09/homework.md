# Bài Tập — Session 09: Cấu Trúc Dữ liệu
**Deadline: 2026-10-26 23:59:00**

---

## Exercise_1 [build]

### Problem Statement

Struct lưu thông tin học sinh

Viết chương trình C:
1. Định nghĩa struct `Student`:
   ```c
   struct Student {
       int id;
       char name[50];
       float gpa;
   };
   ```
2. Trong `main()`:
   - Khai báo 1 biến kiểu `Student`
   - Nhập id, tên, GPA
   - In thông tin

**Ví dụ:**
```
Nhập ID: 1
Nhập tên: Nguyen Van A
Nhập GPA: 3.5
Thông tin: ID=1, Tên=Nguyen Van A, GPA=3.50
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

Enum quản lý trạng thái

Viết chương trình C:
1. Định nghĩa enum `Status`: ACTIVE, INACTIVE, SUSPENDED
2. Khai báo biến kiểu enum
3. Nhập lựa chọn (1=ACTIVE, 2=INACTIVE, 3=SUSPENDED)
4. In trạng thái được chọn

**Ví dụ:**
```
1=ACTIVE, 2=INACTIVE, 3=SUSPENDED
Chọn: 1
Trạng thái: ACTIVE
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

Union lưu dữ liệu thay thế nhau

Viết chương trình C:
1. Định nghĩa union `Data`:
   ```c
   union Data {
       int i;
       float f;
       char c;
   };
   ```
2. Gán giá trị cho từng thành phần
3. In giá trị và kích thước
4. Quan sát sự thay thế nhau

**Ví dụ:**
```
Kích thước union: 4 bytes
int = 10: data.i = 10
float = 3.14: data.f = 3.14, data.i bị đổi
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

Struct lồng nhau

Viết chương trình C:
1. Định nghĩa struct `Address`:
   ```c
   struct Address {
       char street[50];
       char city[30];
       int zipcode;
   };
   ```
2. Định nghĩa struct `Person` chứa `Address`
3. Nhập và in thông tin người (kèm địa chỉ)

**Ví dụ:**
```
Nhập tên: Nguyen Van A
Nhập tuổi: 20
Nhập đường: Nguyen Hue
Nhập thành phố: Ha Noi
Nhập mã zip: 100000
Thông tin: Nguyen Van A, 20 tuổi, Ha Noi
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

Typedef - bí danh cho struct

Viết chương trình C:
1. Dùng `typedef` để định nghĩa bí danh cho struct:
   ```c
   typedef struct {
       int id;
       char name[50];
       float salary;
   } Employee;
   ```
2. Khai báo và sử dụng `Employee` (không cần `struct`)
3. Nhập và in thông tin nhân viên

**Ví dụ:**
```
Nhập ID: 101
Nhập tên: Tran Thi B
Nhập lương: 5000
Thông tin: ID=101, Tên=Tran Thi B, Lương=5000
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

Con trỏ và struct

Viết chương trình C:
1. Khai báo biến `Student` và con trỏ trỏ đến nó
2. Dùng con trỏ để:
   - Gán giá trị vào thành phần (dùng `->`)
   - In thông tin
3. In địa chỉ của struct

**Ví dụ:**
```
Nhập thông tin qua con trỏ:
ID: 1
Tên: Nguyen Van A
GPA: 3.5
Địa chỉ: 0x7fff...
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

Mảy struct

Viết chương trình C:
1. Định nghĩa struct `Student`
2. Khai báo mảy 3 học sinh
3. Nhập thông tin 3 học sinh
4. In danh sách và tính GPA trung bình

**Ví dụ:**
```
Nhập 3 học sinh:
Học sinh 1: ID=1, Tên=A, GPA=3.5
Học sinh 2: ID=2, Tên=B, GPA=3.8
Học sinh 3: ID=3, Tên=C, GPA=3.2
GPA trung bình: 3.50
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

Hàm với struct

Viết chương trình C:
1. Viết hàm `void input(Student *s)` để nhập thông tin
2. Viết hàm `void print(Student s)` để in thông tin
3. Viết hàm `float average(Student arr[], int n)` để tính GPA trung bình
4. Trong `main()`:
   - Nhập 3 học sinh
   - In danh sách
   - Tính GPA trung bình

**Ví dụ:**
```
Nhập 3 học sinh và tính GPA trung bình: 3.50
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

Struct kết hợp enum

Viết chương trình C:
1. Định nghĩa enum `Department` (IT, HR, SALES)
2. Định nghĩa struct `Employee` có kiểu `Department`
3. Viết hàm in thông tin nhân viên
4. Nhập 2 nhân viên và in thông tin

**Ví dụ:**
```
Nhân viên 1: ID=101, Tên=A, Phòng=IT
Nhân viên 2: ID=102, Tên=B, Phòng=HR
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

Quản lý sách (ứng dụng thực tế)

Viết chương trình C:
1. Định nghĩa struct `Book`:
   ```c
   struct Book {
       int id;
       char title[100];
       char author[50];
       float price;
       int pages;
   };
   ```
2. Viết các hàm:
   - `void input(Book *b)` - nhập thông tin sách
   - `void print(Book b)` - in thông tin sách
   - `float avgPrice(Book arr[], int n)` - tính giá trung bình
3. Trong `main()`:
   - Nhập 3 sách
   - In danh sách
   - Tính giá trung bình
   - Tìm sách có giá cao nhất

**Ví dụ:**
```
Sách 1: "C Programming", tác giả: Kernighan, giá: 25, trang: 300
Sách 2: "Algorithms", tác giả: Cormen, giá: 50, trang: 1000
Sách 3: "Data Structures", tác giả: Sedgewick, giá: 35, trang: 600
Giá trung bình: 36.67
Sách đắt nhất: "Algorithms" (50)
```

### Submission

```
Exercise_10/
├── main.c
└── Makefile (targets: all, clean)
```
