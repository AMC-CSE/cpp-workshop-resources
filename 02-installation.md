## C++ Get Started

To start using C++, you need two things:

  - A text editor, like Notepad, to write C++ code
  - A compiler, like GCC, to translate the C++ code    into a language that the computer will understand

There are many text editors and compilers to choose from. In this tutorial, we will use an IDE (see below).

## C++ Install IDE

An IDE (Integrated Development Environment) is used to edit AND compile the code.

Popular IDE's include Code::Blocks, Eclipse, and Visual Studio. These are all free, and they can be used to both edit and debug C++ code.

**Note:**  Web-based IDE's can work as well, but functionality is limited.

We will use **Visual Studio** in our tutorial, which we believe is a good place to start.

You can find the latest version of Codeblocks at https://visualstudio.microsoft.com/vs/. Download the <code>mingw-setup.exe</code> file, which will install the text editor with a compiler.

## Video Tutorial: https://www.youtube.com/watch?v=FBo5Cso-ufE.

## C++ Quickstart

Let's create our first C++ file.

open Visual studio and create **New Project** save it with name (no extension required) **Ctrl+Shift+A**.

Write the following C++ code and save the file as <code>myfirstprogram.cpp</code> **(File > Save File as)**:

```cpp
    #include <iostream>
    using namespace std;

    int main() {
        cout << "Hello World!";
        return 0;
    }
```

