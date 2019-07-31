# Advance Cpp

## Configure VSCode

1. Create `.vscode` folder with the following [tasks.json]().

2. Go to `File` > `Preferences` > `Keyboards Shortcuts`, change `Tasks: Run Build Task` and `Tasks: Run Test Task` to preferred key map.

3. Clang-Format Style is set to

```json
    { 
        BasedOnStyle: Google, 
        UseTab: Never, 
        IndentWidth: 4, 
        TabWidth: 4, 
        AllowShortIfStatementsOnASingleLine: false, 
        IndentCaseLabels: false, 
        ColumnLimit: 0, 
        AccessModifierOffset: -4 
    }
```
