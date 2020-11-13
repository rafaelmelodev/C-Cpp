# C++ projects and courses

#### *Just feel projects and cours to improve my C++ skills and to help me (and maybe others) become a better developer.*


### Setup on Windows:
  - Install VS Code
  - Install Git
  - Install MinGW for the gcc compiler
  - Install Python 3.x

### VS Code extensions:
  - C/C++ intellisense
  - Code Runner

### VS code configurations (Reference: https://code.visualstudio.com/docs/cpp/config-mingw )

#### Compiler

  - Change the include path of "c_cpp_properties.json" to :

{
    "configurations": [
        {
            "name": "Win32",
            "intelliSenseMode": "clang-x64",
            "includePath": [
                "${workspaceRoot}",
                "C:/MinGW/lib/gcc/mingw32/9.2.0/include/c++",
                "C:/MinGW/lib/gcc/mingw32/9.2.0/include/c++/mingw32",
                "C:/MinGW/lib/gcc/mingw32/9.2.0/include/c++/backward",
                "C:/MinGW/lib/gcc/mingw32/9.2.0/include",
                "C:/MinGW/include",
                "C:/MinGW/lib/gcc/mingw32/9.2.0/include-fixed"
            ],
            "defines": [
                "_DEBUG",
                "UNICODE",
                "__GNUC__=6",
                "__cdecl=__attribute__((__cdecl__))"
            ],
            "browse": {
                "path": [
                    "C:/MinGW/lib/gcc/mingw32/9.2.0/include",
                    "C:/MinGW/lib/gcc/mingw32/9.2.0/include-fixed",
                    "C:/MinGW/include/*"
                ],
                "limitSymbolsToIncludedHeaders": true,
                "databaseFilename": ""
            },
            "cStandard": "c17",
            "cppStandard": "c++17"
        }
    ],
    "version": 4
}

#### Builder

  - From the main menu, choose Terminal > Configure Default Build Task. In the dropdown, which will display a tasks dropdown listing various predefined build tasks for C++ compilers. Choose g++.exe build active file, which will build the file that is currently displayed (active) in the editor.
  - This will create a tasks.json file in a .vscode folder and open it in the editor. The new tasks.json file should look similar to the JSON below:

{
  "version": "2.0.0",
  "tasks": [
    {
      "type": "shell",
      "label": "C/C++: g++.exe build active file",
      "command": "C:\\Program Files\\mingw-w64\\x86_64-8.1.0-posix-seh-rt_v6-rev0\\mingw64\\bin\\g++.exe",
      "args": ["-g", "${file}", "-o", "${fileDirname}\\${fileBasenameNoExtension}.exe"],
      "options": {
        "cwd": "${workspaceFolder}"
      },
      "problemMatcher": ["$gcc"],
      "group": {
        "kind": "build",
        "isDefault": true
      }
    }
  ]
}

#### Debugger

- From the main menu, choose Run > Add Configuration... and then choose C++ (GDB/LLDB).
- You'll then see a dropdown for various predefined debugging configurations. Choose g++.exe build and debug active file.
- VS Code creates a "launch.json" file, opens it in the editor, and builds and runs the file.

{
  "version": "0.2.0",
  "configurations": [
    {
      "name": "g++.exe - Build and debug active file",
      "type": "cppdbg",
      "request": "launch",
      "program": "${fileDirname}\\${fileBasenameNoExtension}.exe",
      "args": [],
      "stopAtEntry": false,
      "cwd": "${workspaceFolder}",
      "environment": [],
      "externalConsole": false,
      "MIMode": "gdb",
      "miDebuggerPath": "C:\\Program Files\\mingw-w64\\x86_64-8.1.0-posix-seh-rt_v6-rev0\\mingw64\\bin\\gdb.exe",
      "setupCommands": [
        {
          "description": "Enable pretty-printing for gdb",
          "text": "-enable-pretty-printing",
          "ignoreFailures": true
        }
      ],
      "preLaunchTask": "C/C++: g++.exe build active file"
    }
  ]
}