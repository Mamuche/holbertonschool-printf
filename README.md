<p align="center">
<picture>
 <source media="(prefers-color-scheme: dark)" srcset="https://images.squarespace-cdn.com/content/v1/5a4bfe8bf09ca4228ceca3b7/1539139199598-ANH454IHZI1OKWONKRXY/logo.jpg?format=2500w">
 <source media="(prefers-color-scheme: light)" srcset="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQIrK23KvJPB7XdZrIk9mHwe3GZvtsUZLjkh-eG6KRgCLeWu3MW0kFcggq4COpLmeZviQ&usqp=CAU">
 <img alt="image holberton school" src="https://apply.holbertonschool.com/auth/sign_up?country=fr&locale=fr">
</picture>
</p>

# **Project Printf**

Write your own printf function, _printf.


## **Team and Tasks**

This project was released by Emma Lateyron and Marion Laroche in Holbertonschool's Bordeaux.
We work on the campus every day and we make a Check in every morning and a Check out every afternoon.
we divided some tasks, but the essential file '_printf' was written in collaboration.

This project consist of rebuilding the standard printf function in C.
Our project required a function capable of printing with the %d, %c, %s, and %i specifiers to standard output. _printf returns the number of characters printed (excluding the null byte at the end of strings). We were not asked to handle flag characters, field width, precision, or length.


## **Prototype**

int _printf(const char *format, ...);


## **Format specifiers**

| specifier |        description       |                  exemple                       |
|----------:|--------------------------|------------------------------------------------|
|    %c     | prints 1 character       | _printf("%c",'p');           --> "p"           |
|    %s     | prints a string          | _printf("%s", "let's code"); --> "let's code"  |
|    %i     | prints an integer        | _printf("%i", 33);           --> "33"          |
|    %d     | prints a decimal number  | _printf("%d", -33);          --> "-33"         |


## **Compilation**

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c


## **Files**

|        file        |                   description                        |
|-------------------:|------------------------------------------------------|
| _printf.c          | Main function _printf.                               |
| _putchar.c         | Function to write a character.                       |
| all_functions.c    | Functions handles % format.                          |
| main.c             | Test file who compare _printf and printf outputs.    |
| main.h             | Header file, contains all prototypes and structure.  |
| print_number       | Function to print numbers.                           |
| get_function       | Choose the corresponding function.                   |


## **Flowchart for _printf**

![flowchart](https://github.com/emma-33/holbertonschool-printf/assets/136717258/3857cbae-952c-4980-b971-c68bb9ad8b43)
   

## **Authors**

Lateyron Emma [Github](https://github.com/emma-33).

Laroche Marion [Github](https://github.com/Mamuche), [LinkedIn](https://www.linkedin.com/in/marion-laroche-8b235a284/).