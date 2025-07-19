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
- **`recent_codes.txt`**: A temporary file where Joy dumps new or recent code snippets with metadata (topic, problem, notes).
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

1. **Read `recent_codes.txt`**:
   - The file contains code snippets with metadata in the following format:
     ```cpp
     // Topic: <topic>
     // Problem: <problem>
     // Notes: <notes>
     <code>
     // END OF SNIPPET
     ```
   - Multiple snippets can be added, separated by `// END OF SNIPPET`.

2. **Process Each Snippet**:
   - Extract the `topic`, `problem`, `notes`, and `code`.
   - **Create or Update Folders**:
     - If the `topic` folder does not exist, create it (e.g., `Strings/`).
     - If the `problems/<problem>/` folder does not exist, create it (e.g., `problems/two_sum/`).
   - **Save the Code**:
     - Write the `code` to `problems/<problem>/code.cpp`. If the file already exists, overwrite it with the latest solution.
   - **Append Notes**:
     - If `notes` are provided, append them to `problems/<problem>/notes.md`. If the file does not exist, create it.
   - **Update Summaries and Discussions**:
     - Append a new entry to `compact_version.md` in the topic  topic folder:
       ```
       ## <problem>
       - Notes: <notes>
       ```
     - Append a new section to `discussion.md` in the topic folder:
       ```
       ## <problem>
       - <notes>
       ```
   - **Log the Activity**:
     - Create or update the daily log file in `logs/` (e.g., `2025-07-19.md`) with:
       ```
       - Added/Updated <topic>/<problem>
       ```

3. **Commit to Git**:
   - After processing all snippets, commit the changes to Git with a message like:
     ```
     git add .
     git commit -m "Added/Updated <topic>/<problem>"
     ```

4. **Clear `recent_codes.txt`**:
   - Empty the file to indicate that the code has been processed.

### Explicit Instructions for Gemini CLI
- **Do Not Modify the Code**: Gemini CLI must not change the code in `recent_codes.txt`, even if there are errors or potential improvements. It can add comments but must preserve Joy's original coding style and errors, as these are personal notes.
- **Append, Do Not Overwrite**: When updating `notes.md`, `compact_version.md`, and `discussion.md`, always append new information rather than overwriting existing content to preserve previous notes.
- **Create Logs Only When Necessary**: Daily log files are created or updated only on days when code is added via `recent_codes.txt`. If no code is added, no log file is created for that day.

## Additional Notes
- **Version Control**: Git is used for versioning. After processing `recent_codes.txt`, Gemini CLI commits the changes, allowing Joy to track progress over time.
- **Manual Updates**: Joy manually updates `progress.md` to track problem status (e.g., solved, attempted, unsolved).

## About the User
- **Name**: Joy
- **Background**: BTech CSE student
- **Purpose**: Preparing for technical job interviews, keeping records for future reference, practicing coding skills, and supporting potential career switches by maintaining a structured DSA notes repository.