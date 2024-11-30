## Nested loops that execute 1 billion iterations in C 🫡

### Step 1: Install MinGW (if not already installed)
To compile C code using PowerShell, you need to have the **MinGW** toolchain installed, which includes `gcc`.

1. Download **MinGW-w64** from [here](https://sourceforge.net/projects/mingw-w64/).
2. Install MinGW and make note of the installation directory (e.g., `C:\mingw-w64`).
3. Add the `bin` directory of MinGW to your **PATH** environment variable:
   - Open **Control Panel** > **System and Security** > **System** > **Advanced system settings**.
   - Click on **Environment Variables**.
   - Under **System variables**, find the `Path` variable, select it, and click **Edit**.
   - Add the full path to the MinGW `bin` folder (e.g., `C:\mingw-w64\bin`).

### Step 2: Compile the Code Using PowerShell

1. **Open PowerShell**:
   - Press `Win + X` and choose **Windows PowerShell** (or **Windows Terminal**).

2. **Navigate to the Directory Containing Your C Code**:
   - Use the `cd` command to navigate to the directory where your C file (e.g., `main.c`) is located. For example:
     ```powershell
     cd C:\path\to\your\c\file
     ```

3. **Compile the C Code**:
   - Once you're in the correct directory, run the `gcc` command to compile your C code. For example:
     ```powershell
     gcc -o main.exe main.c
     ```

   - Here:
     - `-o main.exe` specifies the name of the output executable file.
     - `main.c` is the name of your C source file.

   - If everything is set up correctly, this will produce an executable called `main.exe` in the same directory.

### Step 3: Run the Executable

After compiling the C program, you can run it directly from PowerShell:

```powershell
.\main.exe
```

This will execute the compiled program and you should see the output in the PowerShell terminal.

### Troubleshooting

- **If `gcc` is not recognized**: Make sure the `bin` directory of MinGW is correctly added to your PATH. To verify, run:
  ```powershell
  gcc --version
  ```
  If `gcc` is not recognized, check the path to your MinGW installation and ensure the `bin` folder is added to the system PATH correctly.
  
- **Ensure correct directory**: Double-check that you're in the correct folder in PowerShell where your `.c` file is located before running the `gcc` command.

That's all! You can now compile and run your C code in PowerShell using `gcc` from MinGW.
