# Advance Cpp

Advance C++ programming in details with examples.

## Configure VSCode

- Create `.vscode` folder with the following [tasks.json](../master/.vscode/tasks.json).

- Go to `File` > `Preferences` > `Keyboards Shortcuts`, change `Tasks: Run Build Task` and `Tasks: Run Test Task` to preferred key map.

- Clang-Format Style is set to

```json
    { 
        "BasedOnStyle": "Google", 
        "UseTab": "Never", 
        "IndentWidth": 4, 
        "TabWidth": 4, 
        "AllowShortIfStatementsOnASingleLine": false, 
        "IndentCaseLabels": false, 
        "ColumnLimit": 0, 
        "AccessModifierOffset": -4 
    }
```


## Contents

### Exceptions

- [Basics of exceptions](../master/Exceptions/ExceptionsBasics.cpp): Catching exception with different return types.

- [Standard exceptions](../master/Exceptions/ExceptionsStandard.cpp): Catching a `bad_alloc` exception while allocating memory.

- [Custom exceptions](../master/Exceptions/ExceptionsCustom.cpp): Create a custom exception using C++ library `exception`.

- [Ordering exceptions](../master/Exceptions/ExceptionsOrder.cpp): Example on how to catch exception in the right order. The main rule is to catch sub-class exception before parent-class exception.

### Files

- [Writing text files](../master/Files/WriteFiles): Example on how to create a text files.