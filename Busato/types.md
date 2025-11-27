## References and pointers
References are an alternative name of an existing object. They provide direct access to the original data and are great for parameter passing and variable manipulation.
- Lvalue references (&): Refer to named variables and persist beyond a single expression
- Rvalue references (&&): Refer to temporary objects, enable move semantics
```
int a = 5;
int& r_a = a;        // lvalue reference
int&& r_b = 10;      // rvalue reference to temporary
```
- Must be initialized
- Cannot be reassigned. Once initialized, it always refers to the same object
- Not objects themselves. Unlike pointers, references are not distinct memory locations

```
int x = 10, y = 20;
int& ref = x;      // must initialize. cout << ref outputs 10
// ref = y;        // this modifies x to 20, doesn't rebind ref

int* ptr;          // can declare without initializing
ptr = &x;          // initialize later cout << ptr outputs memory location
ptr = &y;          // reassign to different variable

```

Pointers require explicit dereferencing with the * operator to access the value they point to, while references use implicit dereferencing and behave like normal variables. This makes references syntactically cleaner and easier to read.

Use references when:
- you need a safer, cleaner way to alias variables and pass parameters to functions without copying

Use pointers when:
- you need dynamic memory management, reassignment capability, optional parameters (via null checking), or multiple levels of indirection

## nullptr (type: std::nullptr_t)
Introduced in C++11, represents a pointer that doesn't point to any object. Reduces the ambiguity of representing null pointers with NULL which the compiler essentially interprets as int '0'. This is particularly important in function overloading.
```
void func(int x);      
void func(char* ptr);  
func(NULL);  // Ambiguous! Which function should be called?
func(nullptr);  // Clear: calls func(char*)
```