# 🔧 libft — My First C Project 

> *"Failure is not the opposite of success, it's part of it."*

[![42 School](https://img.shields.io/badge/42-School-000000?style=flat&logo=42&logoColor=white)](https://42.fr)
[![C](https://img.shields.io/badge/C-00599C?style=flat&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Made with Love](https://img.shields.io/badge/Made%20with-❤️-red)](https://github.com/yourusername/libft)

---

## 📖 My Story

I failed the **1337 Piscine**.

It hurt. I thought I wasn't cut out for programming. But instead of giving up, I asked myself:

*"What if I just kept going anyway?"*

So I did. I didn't wait for acceptance. I didn't wait for permission. I grabbed the **42 curriculum**, opened up my terminal, and started building **libft** — the first project in the 42 network.

No teachers. No peers. Just me, the C documentation, and a lot of segmentation faults.

This repository is proof that **you don't need to be accepted into 42 to learn like a 42 student**. You just need to start.

---

## 🎯 What is libft?

**libft** is a custom implementation of essential C standard library functions. It's the foundation project at 42 School — designed to teach you:

- 🧠 **How C actually works** under the hood
- 📍 **Pointers and memory management** (malloc, free, memory leaks)
- 🧱 **Modular programming** (writing reusable code)
- ⚙️ **Makefiles** and compilation pipelines
- 🐛 **Debugging** (valgrind, gdb, and patience)

Instead of relying on `<string.h>` or `<stdlib.h>`, you rebuild them yourself. Every function. Every edge case. Every bug.

It's brutal. It's frustrating. And it's **exactly** what you need to understand C deeply.

---

## 📚 Functions Implemented

### Character Functions
- `ft_isalpha` — checks if character is alphabetic
- `ft_isdigit` — checks if character is a digit
- `ft_isalnum` — checks if character is alphanumeric
- `ft_isascii` — checks if character is ASCII
- `ft_isprint` — checks if character is printable
- `ft_toupper` — converts to uppercase
- `ft_tolower` — converts to lowercase

### String Functions
- `ft_strlen` — calculates string length
- `ft_strchr` — locates character in string
- `ft_strrchr` — locates character in string (from the end)
- `ft_strncmp` — compares two strings up to n bytes
- `ft_strlcpy` — copies string with size limit
- `ft_strlcat` — concatenates string with size limit
- `ft_strnstr` — locates substring in string
- `ft_strdup` — duplicates string (malloc)
- `ft_substr` — extracts substring
- `ft_strjoin` — concatenates two strings (malloc)
- `ft_strtrim` — trims characters from both ends
- `ft_split` — splits string by delimiter (malloc)
- `ft_itoa` — converts integer to string (malloc)
- `ft_strmapi` — applies function to each character
- `ft_striteri` — applies function to each character (with index)

### Memory Functions
- `ft_memset` — fills memory with constant byte
- `ft_bzero` — zeros out memory
- `ft_memcpy` — copies memory area
- `ft_memmove` — copies memory (handles overlap)
- `ft_memchr` — locates byte in memory
- `ft_memcmp` — compares memory areas
- `ft_calloc` — allocates and zeros memory

### Conversion Functions
- `ft_atoi` — converts string to integer

### Output Functions
- `ft_putchar_fd` — outputs character to file descriptor
- `ft_putstr_fd` — outputs string to file descriptor
- `ft_putendl_fd` — outputs string + newline to file descriptor
- `ft_putnbr_fd` — outputs integer to file descriptor

---

## 💡 What I Learned

### Technical Skills

✅ **Pointers are not scary** — they're just addresses. Once you understand that, everything clicks.

✅ **Memory management is critical** — every `malloc` needs a `free`. Valgrind is your best friend.

✅ **Edge cases matter** — NULL pointers, empty strings, size 0... handle them all.

✅ **Makefiles automate builds** — `make`, `make clean`, `make fclean`, `make re`.

✅ **Reading man pages is a superpower** — `man 3 strlen` teaches you more than any tutorial.

✅ **Debugging takes patience** — segfaults will test you. Print statements and gdb will save you.

### Mindset Shifts

🔥 **You don't need permission to learn** — failing the Piscine doesn't mean you can't code.

🔥 **Struggle is growth** — if it's hard, you're learning.

🔥 **Build in public** — sharing your code makes you accountable and helps others.

🔥 **Self-teaching is a skill** — no one is coming to save you. Figure it out.

---

## 🚀 How to Use libft

### 1️⃣ Clone the Repository

```bash
git clone https://github.com/yourusername/libft.git
cd libft
```

### 2️⃣ Compile the Library

```bash
make
```

This creates `libft.a` — a static library you can link to your projects.

### 3️⃣ Use in Your Project

In your C file:

```c
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello from libft!");
    ft_putendl_fd(str, 1);
    free(str);
    return (0);
}
```

Compile and link:

```bash
gcc -Wall -Wextra -Werror main.c -L. -lft -o program
./program
```

### 4️⃣ Clean Up

```bash
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # recompiles everything from scratch
```

---

## 🧪 Testing

### Manual Testing

I included a comprehensive test file: `test_libft.c`

```bash
make
gcc -Wall -Wextra -Werror test_libft.c -L. -lft -o test_libft
./test_libft
```

You'll see:
- ✅ Green checkmarks for passing tests
- ❌ Red X marks for failing tests
- A final summary with pass/fail count

### External Testers

Use these amazing community testers:

- [**Tripouille/libftTester**](https://github.com/Tripouille/libftTester) — comprehensive and strict
- [**jtoty/Libftest**](https://github.com/jtoty/Libftest) — classic and thorough
- [**alelievr/libft-unit-test**](https://github.com/alelievr/libft-unit-test) — detailed output

```bash
# Example with Tripouille
git clone https://github.com/Tripouille/libftTester.git
cd libftTester
make
```

### Memory Leak Testing

Always check for leaks:

```bash
valgrind --leak-check=full ./test_libft
```

---

## 🗂️ Project Structure

```
libft/
├── Makefile              # Build automation
├── libft.h               # Header file with function prototypes
├── ft_*.c                # All function implementations
├── test_libft.c          # Comprehensive test suite
└── README.md             # This file
```
10
---

## 🛠️ Compilation Flags

All functions are compiled with:

```bash
-Wall -Wextra -Werror
```

**Translation:** No warnings. No compromises. Clean code or it doesn't compile.

---

## 📜 Norme (42 Coding Standard)

This project follows the **42 Norm**, which enforces:

- Max 25 lines per function
- Max 5 functions per file
- No `for` loops (only `while`)
- Specific naming conventions
- No memory leaks, no segfaults

Use `norminette` to check:

```bash
norminette *.c *.h
```

---

## 🎓 What's Next?

Now that I've built **libft**, I'm using it as a foundation for:

- 🐚 **get_next_line** — reading files line by line
- 🖨️ **ft_printf** — custom printf implementation
- 🐚 **minishell** — building a bash-like shell
- 🧮 **push_swap** — algorithm optimization challenges

This is just the beginning.

---

## 💬 For Those Who Failed Piscine

If you're reading this because you failed Piscine and you're wondering if you should keep going...

**Keep going.**

You don't need a school to validate your learning. You don't need acceptance to start building. You just need:

1. A computer
2. A compiler
3. The decision to not give up

I failed. I kept coding. And now I have a working C library that I built from scratch.

You can too.

The 42 curriculum is **open source**. The knowledge is **free**. The only thing stopping you is you.

So open your terminal, clone this repo, break it, fix it, and make it yours.

**Welcome to the real Piscine — the one that never ends.**

---

## 🤝 Contributing

Found a bug? Have a suggestion? Want to add a feature?

Feel free to open an issue or submit a pull request. This project is a learning tool — let's make it better together.

---


## 📄 License

This project is open source and available under the MIT License.

Use it. Learn from it. Build on it.

---

<div align="center">

### ⭐ If this inspired you, star the repo and start your own journey.

**Don't wait for permission. Just build.**

---

*Made with ☕, 🐛, and 💪 by someone who refused to quit*

</div>
