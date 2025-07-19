# Gemini CLI Configuration for DSA Notes

## Project Overview
This project is designed to help Joy, a BTech CSE student, organize and manage Data Structures and Algorithms (DSA) notes and code. The primary objectives are:
- **Prepare for technical job interviews** by maintaining structured and accessible notes.
- **Keep records for future reference** to revisit concepts and solutions.
- **Practice coding skills** by documenting personal solutions and approaches.
- **Support potential career switches** by providing a reliable reference of DSA knowledge.

Gemini CLI automates the organization of code and notes, ensuring consistency and efficiency. Joy will only need to update the `recent_codes.txt` file with code dumps, and Gemini CLI will handle the rest, including folder creation, file updates, logging, and version control.

## Folder Structure
The root folder is `DSA/`, which contains:
- **`recent_codes.txt`**: A temporary file where Joy dumps new or recent code snippets, either with explicit metadata or in an unstructured format.
- **`logs/`**: A folder containing daily log files (e.g., `2025-07-19.md`), created only on days when code is added.
- **`progress.md`**: A manual tracker for problem status (e.g., solved, attempted, unsolved).
- **Topic Folders** (e.g., `Strings/`, `Sliding_Window/`): Each topic folder contains:
  - **`problems/`**: Subfolders for each problem (e.g., `two_sum/`), which include:
    - **`code.cpp`**: The solution code.
    - **`notes.md`**: Optional problem-specific notes.
  - **`compact_version.md`**: A concise summary of solutions or key points for the topic.
  - **`discussion.md`**: Detailed notes or discussions about the problems in the topic.

### Example Structure
```
DSA/
├── recent_codes.txt
├── logs/
│   ├── 2025-07-19.md
│   └── 2025-07-20.md
├── progress.md
├── Strings/
│   ├── problems/
│   │   ├── two_sum/
│   │   │   ├── code.cpp
│   │   │   └── notes.md
│   │   └── reverse_string/
│   │       ├── code.cpp
│   │       └── notes.md
│   ├── compact_version.md
│   └── discussion.md
├── Sliding_Window/
│   └── ...
```

## File Naming Conventions
- **Topic Folders**: Named after DSA topics (e.g., `Strings`, `Sliding_Window`, `Recursion`).
- **Problem Folders**: Named descriptively based on the problem (e.g., `two_sum`, `reverse_string`).
- **Code Files**: Always named `code.cpp` for consistency.
- **Notes Files**: Named `notes.md` for problem-specific notes.
- **Log Files**: Named by date (e.g., `2025-07-19.md`) in the `logs/` folder.

## Gemini CLI's Role and Instructions
Gemini CLI is responsible for automating the organization of DSA notes and code based on the content of `recent_codes.txt`. When Joy says "update my notes," Gemini CLI will:

### For Structured Code Dumps
If the code in `recent_codes.txt` includes explicit metadata:
```cpp
// Topic: <topic>
// Problem: <problem>
// Notes: <notes>
<code>
// END OF SNIPPET
```
- Gemini CLI will extract the `topic`, `problem`, `notes`, and `code` directly.

### For Unstructured Code Dumps
If the code lacks explicit metadata, Gemini CLI will:
1. **Identify Functions and Comments**:
   - Parse the code to find individual functions and associated comments (e.g., above or within the function).
2. **Infer Topic and Problem**:
   - **Topic**: Determined by analyzing function names, comments, and code patterns (e.g., string operations suggest "Strings").
   - **Problem**: Based on function names or key operations (e.g., `checkAnagrams` suggests "Check Anagrams").
3. **Extract Notes**:
   - Interpret comments as notes (e.g., "logic was quite easy" becomes part of the notes).
4. **Handle Multiple Functions**:
   - Process each function separately, creating or updating individual problem folders.

### Common Processing Steps
For both structured and unstructured dumps:
- **Create or Update Folders**:
  - Create `topic` and `problems/<problem>/` folders if they don’t exist.
- **Save the Code**:
  - Write the `code` to `problems/<problem>/code.cpp` (overwrite if exists).
- **Append Notes**:
  - Append extracted or provided `notes` to `problems/<problem>/notes.md`.
- **Update Summaries and Discussions**:
  - Append to `compact_version.md`:
    ```
    ## <problem>
    - Notes: <notes>
    ```
  - Append to `discussion.md`:
    ```
    ## <problem>
    - <notes>
    ```
- **Log the Activity**:
  - Update the daily log in `logs/<today's date>.md`:
    ```
    - Added/Updated <topic>/<problem>
    ```
- **Commit to Git**:
  - Commit changes with:
    ```
    git add .
    git commit -m "Added/Updated <topic>/<problem>"
    ```
- **Clear `recent_codes.txt`**:
  - Empty the file after processing.

### Explicit Instructions for Gemini CLI
- **Do Not Modify the Code**: Preserve Joy's original code, including errors or style. Only organize and extract information.
- **Append, Do Not Overwrite**: Always append to `notes.md`, `compact_version.md`, and `discussion.md` to preserve history.
- **Create Logs Only When Necessary**: Log files are created only on days when code is added.

## Additional Notes
- **Version Control**: Git tracks changes, with commits made after processing.
- **Manual Updates**: Joy manually updates `progress.md` for problem status.

## About the User
- **Name**: Joy
- **Background**: BTech CSE student
- **Purpose**: Preparing for technical job interviews, keeping records for future reference, practicing coding skills, and supporting potential career switches by maintaining a structured DSA notes repository.