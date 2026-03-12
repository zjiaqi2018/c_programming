# Foundations of C Programming

Welcome to the repository for the **Foundations of C Programming** (Spring 2026) course. 

This repository serves as the central hub for our class. Here, you will find the source code examples demonstrated during lectures and the starter templates for your lab assignments.

## 🗂️ Repository Structure

* `chap-*/`: Contains C source code examples organized by textbook chapters, which are used as demonstrations during classes.
* `lab*/`: Contains the templates and instructions for your lab assignments (e.g., `lab02`, `lab03`).

## 🛠️ Compiling C Code using CMake in VS Code

We use [CMake](https://cmake.org/) as our build system to easily compile the C programs across different environments. Follow these instructions to compile and run the `.c` files using Visual Studio Code.

### Prerequisites

1. **C Compiler**: Ensure you have a C compiler installed. 
   * *macOS*: Install Xcode Command Line Tools (`xcode-select --install`).
   * *Windows*: Install MinGW-w64 or use WSL.
   * *Linux*: `sudo apt install build-essential`.
2. **CMake**: Install CMake on your system (e.g., `brew install cmake` on macOS).
3. **VS Code Extensions**: Install the following extensions in VS Code:
   * **C/C++** (by Microsoft)
   * **CMake Tools** (by Microsoft)

### Option A: Using the VS Code CMake Tools Extension (Recommended)

1. **Open the Project**: Open the root folder of this repository in VS Code.
2. **Configure the Project**: 
   * Press `Cmd+Shift+P` (macOS) or `Ctrl+Shift+P` (Windows/Linux) to open the Command Palette.
   * Type and select `CMake: Configure`.
   * You will be prompted to select a "kit" (your C compiler, like Clang or GCC). Select the one installed on your system.
3. **Select a Target**: In the bottom status bar, click on `[Build target]` or `[all]` and select the specific program you want to compile (e.g., `lab02` or `chap2`).
4. **Build**: Click the **Build** button (gear icon) in the bottom status bar or press `F7`.
5. **Run**: Click the **Play** button (▶️) in the bottom status bar (next to the build button) to execute the compiled program.

### Option B: Using the Integrated Terminal (Command Line)

If you prefer the command line, you can easily build the projects manually. Open the VS Code Integrated Terminal (`Ctrl+` `) and navigate to the directory of the lab or chapter you want to compile (e.g., `lab02`):

```bash
cd lab02
mkdir build
cd build
cmake ..
make
```

After building, you can run the generated executable directly from the terminal. Assuming the executable is named `lab02`:

```bash
./lab02
```

Happy Coding!
