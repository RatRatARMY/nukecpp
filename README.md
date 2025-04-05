# How to compile this project
- Step 1: Download llvm.sh with this command: `wget https://apt.llvm.org/llvm.sh`<br>
- Step 2: Chmod this file: `sudo chmod +x ./llvm.sh`
- Step 3: Install Clang 20: `sudo ./llvm.sh 20`
- Step 4: Add these lines to ~/.bashrc files:
```bash
alias clang="/usr/bin/clang-20"
alias clang++="/usr/bin/clang++-20"
```
- Step 5: Compile the main.cpp file: `clang++ -I. main.cpp -o main`
- Step 6: Run test the file with: `./main`

Warning: If run this file, it can "nuke" your system. Run the file with risk!
# If use Windows
You can use WSL (Windows Subsystem for Linux) for that thing (use Ubuntu 24.04 WSL)
# Linux distro used to build this file
Ubuntu (24.04)
