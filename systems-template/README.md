# WCE Systems Programming CMake Template

This CMake template is intended for MTU's CS3411 Systems Programming. It leverages
the [rktest library](https://github.com/Warwolt/rktest) to allow the user to easily
write unit tests in the style of [GoogleTest](https://google.github.io/googletest/).
Please see [Usage](#usage) below for a quick guide on writing tests and
[building tests for your code versus building your code as a standalone
program](#building-tests-versus-standalone) (such as for
an assignment submission).

## Usage

### Building Tests Versus Standalone

There are two files with a `main()` function:

- `src/main.c`
- `test/rktest.c`

If you specify a `TEST` macro to CMake, such as providing `DTEST=1` at the command
line, CMake will build `test/rktest.c` along with all specified source files.
Otherwise, it will build `src/main.c` and your specified source files. This will
determine whether you build your program to execute your unit tests, or your
standalone program (such as for a course assignment submission).