# Libft - 1337/42 Project  

[![1337 Badge](https://img.shields.io/badge/1337-Project-blue)](https://www.42network.org/)  

## 📜 Project Overview  

**Libft** is one of the foundational projects in the **1337 curriculum** (part of the 42 Network). This project involves reimplementing essential C standard library functions and adding custom utility functions. It is an excellent introduction to low-level programming and memory management in C.  

---

## 🚀 Features  

### Mandatory Part  
- Reimplementations of standard C library functions (`<stdlib.h>`, `<string.h>`).  
- Custom functions for memory manipulation, string handling, and character checks.  

### Bonus Part  
- Utility functions for working with **singly linked lists**, enabling advanced data structure manipulation.  

---

## 📂 Repository Structure  

```plaintext  
|-- ft_*.c                 // Individual function implementations  
|-- bonus/                 // Contains linked list functions for the bonus part  
|-- libft.h                // Header file containing all function prototypes  
|-- Makefile               // Compilation rules for building the library  
```  

---

## 🛠️ How to Use  

### 1. Clone the Repository  
```bash  
git clone https://github.com/Redadaghouj/42-Libft_1337.git  
cd Libft_1337  
```  

### 2. Compile the Library  

Use the provided `Makefile` to compile the library:  
```bash  
make        # Compiles the mandatory part  
make bonus  # Compiles the bonus part  
```  

After running these commands, the compiled library `libft.a` will be generated.  

### 3. Include Libft in Your Project  

Link the library to your project during compilation:  
```bash  
gcc your_main_file.c -L. -lft -o your_program  
```  

Include the `libft.h` header in your source code:  
```c  
#include "libft.h"  
```  

---

## 📖 Function Categories  

### Mandatory Functions  

1. **Memory Manipulation**  
   - `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_bzero`, `ft_memcmp`, `ft_memchr`.  

2. **String Manipulation**  
   - `ft_strlen`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strdup`, `ft_strnstr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_substr`, `ft_striteri`, `ft_strmapi`.  

3. **Character Checks**  
   - `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`.  

4. **Conversion**  
   - `ft_atoi`, `ft_itoa`.  

5. **Utility Functions**  
   - `ft_tolower`, `ft_toupper`.  

6. **File Descriptor Functions**  
   - `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.  

### Bonus Functions  

- **Singly Linked List Utilities**  
   - `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.  

---

## 🛡️ Makefile Targets  

- `make` – Compiles the mandatory part of the library.  
- `make bonus` – Compiles the bonus part and includes the linked list utilities.  
- `make clean` – Removes object files (`.o`) and the bonus tracking file (`.bonus_file`).  
- `make fclean` – Removes object files and the compiled library (`libft.a`).  
- `make re` – Cleans and recompiles everything.  

---

## 📋 Objectives  

### Mandatory  
- Gain proficiency in reimplementing standard C library functions.  
- Improve problem-solving and memory management skills.  

### Bonus  
- Expand knowledge by implementing a linked list and its operations.  

---

## 🌟 Achievements  

- Mastered low-level C programming techniques.  
- Built a reusable library to use in future projects.  

---

## 🛡️ License  

This project is part of the 1337 curriculum. It is shared here for educational purposes and should not be used for plagiarism.
