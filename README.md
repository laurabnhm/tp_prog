# Cours lus

## LEVEL 1
### 01 - Install a compiler
    put the text cursor on a name + F2 : rename
    F12 : go to definition
    ALT + O : switch between .h and .cpp
    CTRL + F : search for a word in the current file
    CTRL + SHIFT + F : search for a word in the whole project
    F7 : build
    CTRL + F5 : run
### 02 - Use an IDE
### 03 - Use Git
### 04 - Use a debugger
    CTRL + F5 : run & debug
    F9 : set a breakpoint
### 05 - Use a formatting tool
### 06 - Use static analysers
### 07 - Naming
### 08 - Stack vs Heap
### 09 - Consistency in style

## LEVEL 2
### 01 - Make it work, then make it good
### 02 - Prefer free functions
    Free functions improve the encapsulation of a class
### 03 - Design cohesive classes
    Class : private members, methods and use inheritance. 
    Goal : enforcing invariants
    Prefer using a struct over a class if you have no invariants to enforce.
    /!\ Single Responsibility Principle
    Do not use private methods
    Public methods are meant to access private members --> encapsulation
### 04 - Use structs to group data
    Designated initializers
### 05 - Write small functions
### 06 - DRY: Don't repeat yourself
    I use one functions (random) for the "hangman game" and "guess the number" game
### 07 - Enums
    Use enum class, not enum
    using enum
### 08 - Split problems in small pieces
### 09 - Composition over Inheritance
    Use functions to reuse logic or use composition to reuse member variables instead of inheritance

## LEVEL 3
### 01 - std::vector
### 02 - Minimize dependencies
### 03 - Strong Types
    Library type_safe
    Strong types help to give a more concrete representation to concepts, physical units, coordinate spaces... 
    They prevent logic errors and make APIs harder to misuse.
### 04 - Use libraries
    add_subdirectory(libname)
    target_link_libraries(${PROJECT_NAME} PRIVATE libname)
    Read the documentation
### 05 - Range-based for loop
### 06 - Testing

# TP faits

### Guess the number
### Hangman
### Adding a menu
