## C++ Get Started

To start using C++, you need two things:

  - A text editor, like Notepad, to write C++ code
  - A compiler, like GCC, to translate the C++ code    into a language that the computer will understand

There are many text editors and compilers to choose from. In this tutorial, we will use an IDE (see below).

## C++ Install IDE

An IDE (Integrated Development Environment) is used to edit AND compile the code.

Popular IDE's include Code::Blocks, Eclipse, and Visual Studio. These are all free, and they can be used to both edit and debug C++ code.

**Note:**  Web-based IDE's can work as well, but functionality is limited.

We will use **Code::Blocks** in our tutorial, which we believe is a good place to start.

You can find the latest version of Codeblocks at http://www.codeblocks.org/downloads/26. Download the <code>mingw-setup.exe</code> file, which will install the text editor with a compiler.

## C++ Quickstart

Let's create our first C++ file.

Open Codeblocks and go to **File > New > Empty File**.

Write the following C++ code and save the file as <code>myfirstprogram.cpp</code> **(File > Save File as)**:

<code>
    #include <iostream>
    using namespace std;

    int main() {
        cout << "Hello World!";
        return 0;
    }
</code>

## Source: W3Schools
