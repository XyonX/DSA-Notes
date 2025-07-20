# Gemini CLI Configuration for Coding Buddy

## Project Overview
This project is designed to help Joy, a BTech CSE student, organize and manage coding notes and code across multiple areas, including Data Structures and Algorithms (DSA), Object-Oriented Programming (OOP), Python, and SQL. The primary objectives are:
- **Prepare for technical job interviews** by maintaining structured and accessible notes across various coding topics.
- **Keep records for future reference** to revisit concepts and solutions in DSA, OOP, Python, and SQL.
- **Practice coding skills** by documenting personal solutions and approaches in multiple programming languages.
- **Support potential career switches** by providing a reliable reference of coding knowledge across different domains.

Gemini CLI serves two key roles:
1. **Automate note organization**: Processes code dumps from `recent_codes.txt`, organizes them into topic folders under the appropriate topic area, updates logs, creates or updates `progress.md`, and commits changes to Git.
2. **Act as a coding mentor**: Provides guidance on what to practice, discusses specific problems, conducts mock tests, and offers feedback on solutions across all supported topic areas.

## Folder Structure
The root folder is `CodingBuddy/`, which contains:
- **`recent_codes.txt`**: A temporary file for code snippets (with or without metadata).
- **`logs/`**: Daily logs of coding activities (e.g., `2025-07-19.md`).
- **`progress.md`**: Tracks problem status (e.g., solved, attempted, unsolved) across all topic areas, created or updated automatically.
- **`update_status.json`**: A temporary file to track the progress of the "update my notes" command (created during processing and deleted upon completion).
- **Topic Area Folders** (e.g., `DSA/`, `OOP/`, `Python/`, `SQL/`): Each contains:
  - **Topic Folders** (e.g., `Strings/` under `DSA/`, `Classes/` under `OOP/`): Each contains:
    - **`problems/`**: Subfolders for each problem (e.g., `two_sum/` under `DSA/Strings/`), with:
      - **`code.<ext>`**: Solution code, where `<ext>` is based on the topic area (e.g., `cpp` for DSA and OOP, `py` for Python, `sql` for SQL).
      - **`notes.md`**: Problem-specific notes.
    - **`compact_version.md`**: Summarizes solutions for the topic.
    - **`discussion.md`**: Detailed problem discussions for the topic.

### Example Structure
```
CodingBuddy/
├── recent_codes.txt
├── logs/
│   ├── 2025-07-19.md
│   └── 2025-07-20.md
├── progress.md
├── update_status.json (temporary)
├── DSA/
│   ├── Strings/
│   │   ├── problems/
│   │   │   ├── two_sum/
│   │   │   │   ├── code.cpp
│   │   │   │   └── notes.md
│   │   │   └── reverse_string/
│   │   │       ├── code.cpp
│   │   │       └── notes.md
│   │   ├── compact_version.md
│   │   └── discussion.md
│   └── Sliding_Window/
│       └── ...
├── OOP/
│   ├── Classes/
│   │   ├── problems/
│   │   │   ├── inheritance_example/
│   │   │   │   ├── code.cpp
│   │   │   │   └── notes.md
│   │   │   └── polymorphism_example/
│   │   │       ├── code.cpp
│   │   │       └── notes.md
│   │   ├── compact_version.md
│   │   └── discussion.md
│   └── Design_Patterns/
│       └── ...
├── Python/
│   ├── Basics/
│   │   ├── problems/
│   │   │   ├── list_comprehension/
│   │   │   │   ├── code.py
│   │   │   │   └── notes.md
│   │   │   └── decorators/
│   │   │       ├── code.py
│   │   │       └── notes.md
│   │   ├── compact_version.md
│   │   └── discussion.md
│   └── Advanced/
│       └── ...
└── SQL/
    ├── Queries/
    │   ├── problems/
    │   │   ├── select_basics/
    │   │   │   ├── code.sql
    │   │   │   └── notes.md
    │   │   └── joins/
    │   │       ├── code.sql
    │   │       └── notes.md
    │   ├── compact_version.md
    │   └── discussion.md
    └── Optimization/
        └── ...
```

## File Naming Conventions
- **Topic Area Folders**: Broad coding areas (e.g., `DSA`, `OOP`, `Python`, `SQL`).
- **Topic Folders**: Specific topics within each area (e.g., `Strings` under `DSA`, `Classes` under `OOP`).
- **Problem Folders**: Descriptive problem names (e.g., `two_sum` under `DSA/Strings`, `inheritance_example` under `OOP/Classes`).
- **Code Files**: Named `code.<ext>`, where `<ext>` is:
  - `cpp` for DSA and OOP.
  - `py` for Python.
  - `sql` for SQL.
- **Notes Files**: `notes.md`.
- **Log Files**: Date-based (e.g., `2025-07-19.md`).
- **Progress File**: `progress.md` in the root directory.
- **Status File**: `update_status.json` (temporary, used during processing).

## Gemini CLI's Role and Instructions

### 1. Note Organization with Checkpoint System
When you say **"update my notes"**, Gemini CLI:
- **Checks for `update_status.json`**:
  - If `update_status.json` exists, it resumes processing from the last checkpoint by analyzing which snippets from `recent_codes.txt` have already been processed.
  - If `update_status.json` does not exist, it **creates a new `update_status.json` file** before starting the processing of `recent_codes.txt`. This file will track the progress of the update process.
- Processes each snippet in `recent_codes.txt` (structured or unstructured).
- Organizes code into the appropriate topic area, topic, and problem folders.
- Appends notes to `notes.md`, `compact_version.md`, and `discussion.md`.
- Logs activities in `logs/<today's date>.md`.
- Creates or updates `progress.md` to reflect problem statuses across all topic areas.
- Commits changes to Git after all snippets are processed.
- Clears `recent_codes.txt` and **deletes `update_status.json`** upon successful completion.

#### Checkpoint System
- **Purpose**: Ensures the update process can resume if interrupted (e.g., due to API limits or errors).
- **How It Works**:
  - **Before starting the update process**, if `update_status.json` does not exist, Gemini CLI creates it to initialize the checkpoint system. This ensures progress tracking is set up from the beginning.
  - Before processing each snippet, Gemini CLI updates `update_status.json` with the current state (e.g., which snippets have been processed, identified by unique hashes).
  - If an interruption occurs (e.g., API limit error), the process pauses, and the status is saved in `update_status.json`.
  - On the next "update my notes" command, it checks `update_status.json` and `recent_codes.txt` to resume from the last processed snippet.
  - **After processing all snippets successfully**, Gemini CLI deletes `update_status.json` to clean up and indicate the process is complete.
- **Status File Format** (example):
  ```json
  {
    "processed_snippets": ["hash1", "hash2"],
    "current_snippet": "hash3",
    "status": "processing"
  }
  ```
- **Idempotency**: Each snippet is identified by a unique hash (e.g., based on its content) to prevent duplicate processing.

#### Handling API Limits
- If an API limit is reached during processing, Gemini CLI:
  - Saves the current state to `update_status.json`.
  - Informs you that the process is paused and will resume later.
  - You can retry the command after the API limit resets, and it will pick up where it left off.

#### For Structured Code Dumps
Include metadata:
```cpp
// Topic: <topic_area>/<topic>
// Problem: <problem>
// Notes: <notes>
<code>
// END OF SNIPPET
```
**Example:**
```cpp
// Topic: OOP/Classes
// Problem: inheritance_example
// Notes: Demonstrates basic inheritance in C++
class Parent { ... };
class Child : public Parent { ... };
// END OF SNIPPET
```

#### For Unstructured Code Dumps
Gemini CLI will:
- Parse functions, comments, and code patterns to infer the topic area, topic, and problem.
- Use language-specific patterns:
  - **OOP**: Look for class definitions, inheritance, etc.
  - ** Tokyo**: Detect function definitions, list comprehensions, decorators, etc.
  - **SQL**: Identify SQL keywords like `SELECT`, `INSERT`, `JOIN`, etc.
- Infer the appropriate topic area and topic based on these patterns.

#### Common Processing Steps
For both structured and unstructured dumps:
- **Determine File Extension**: Based on the topic area (e.g., `cpp` for DSA and OOP, `py` for Python, `sql` for SQL).
- **Create or Update Folders**:
  - Create `topic_area`, `topic`, and `problems/<problem>/` folders if they don’t exist.
- **Save the Code**:
  - Write the `code` to `problems/<problem>/code.<ext>` (overwrite if exists).
- **Append Notes**:
  - Append extracted or provided `notes` to `problems/<problem>/notes.md`.
- **Update Summaries and Discussions**:
  - Append to `compact_version.md` in the topic folder:
    ```
    ## <problem>
    - Notes: <notes>
    ```
  - Append to `discussion.md` in the topic folder:
    ```
    ## <problem>
    - <notes>
    ```
- **Log the Activity**:
  - Update the daily log in `logs/<today's date>.md`:
    ```
    - Added/Updated <topic_area>/<topic>/<problem>
    ```
- **Handle progress.md**:
  - If `progress.md` doesn’t exist, create it and analyze the entire note base to list all problems with a default status of "solved" (since code exists).
  - If `progress.md` exists, update it to include new or updated problems from `recent_codes.txt` as "solved" and maintain existing statuses.
  - Format:
    ```
    # Progress

    ## DSA
    ### Strings
    - two_sum: solved
    - reverse_string: solved

    ## OOP
    ### Classes
    - inheritance_example: solved
    - polymorphism_example: attempted

    ## Python
    ### Basics
    - list_comprehension: solved
    - decorators: unsolved

    ## SQL
    ### Queries
    - select_basics: solved
    - joins: attempted
    ```
- **Commit to Git**:
  - Commit changes with:
    ```
    git add .
    git commit -m "Added/Updated <topic_area>/<topic>/<problem>"
    ```
- **Clear `recent_codes.txt`**:
  - Empty the file only after all snippets are successfully processed.
- **Delete `update_status.json`**:
  - Remove the temporary status file upon completion.

### 2. Mentor Features
Gemini CLI acts as a coding mentor, using `progress.md` and `logs/` to suggest practice and provide feedback across all topic areas.

#### Available Commands
- **Suggest Practice**: Say "What should I practice today?" or "Suggest problems to solve."
  - Analyzes `logs/` for recent activity and `progress.md` for unsolved or infrequently practiced problems across all topic areas.
  - Suggests 1-2 problems, prioritizing topics not practiced recently (e.g., "You studied SQL on 2025-07-19 but haven’t practiced since. Try joins.").
- **Discuss Problem**: Say "Let's discuss <topic_area>/<topic>/<problem>."
  - Retrieves `code.<ext>`, `notes.md`, and `discussion.md` for the specified problem.
  - If solved, discusses the code, comments, and relevant aspects (e.g., time complexity for DSA, design patterns for OOP, query optimization for SQL).
  - If unsolved (per `progress.md`), informs you and suggests approaches.
- **Start Mock Test**: Say "Start a mock test."
  - Suggests 1-3 problems from unsolved items in `progress.md` or new industry-standard problems across any topic area.
  - After solving, add code to `recent_codes.txt` with `// Mock Test Problem: <topic_area>/<topic>/<problem>`.
  - Run "update my notes" to process and get feedback (e.g., correctness, efficiency, comparison to prior solutions).
- **Help**: Say "List commands" or "Help."
  - Displays:
    ```
    Available Commands:
    - "update my notes": Organize recent_codes.txt into folders, update logs and progress.md, commit to Git.
    - "What should I practice today?" or "Suggest problems to solve": Recommend problems based on logs and progress across all areas.
    - "Let's discuss <topic_area>/<topic>/<problem>": Discuss code, notes, and relevant aspects for a problem.
    - "Start a mock test": Suggest problems and provide feedback after submission.
    - "List commands" or "Help": Show this list.
    ```

#### Mock Test Process
- **Starting a Test**: Suggests problems from `progress.md` (unsolved) or new problems in any topic area.
- **Submitting Solutions**: Add to `recent_codes.txt` with `// Mock Test Problem: <topic_area>/<topic>/<problem>`.
- **Feedback**: Analyzes solution for correctness, efficiency, and provides topic-specific feedback (e.g., "Your SQL query could use an index for better performance").

### Explicit Instructions for Gemini CLI
- **Do Not Generate or Overwrite**: Preserve Joy's original code, including errors.
- **Append, Do Not Overwrite**: Append to `notes.md`, `compact_version.md`, and `discussion.md`.
- **Logs**: Create logs only when code is added.
- **Progress**: Create `progress.md` if missing, analyze the entire note base, and update after processing `recent_codes.txt`.
- **Feedback**: Provide constructive feedback without modifying code, tailored to the topic area.
- **Checkpoint System**: Use `update_status.json` to track and resume processing if interrupted.
- **File Extensions**: Save code as `.cpp` for DSA and OOP, `.py` for Python, `.sql` for SQL, based on the topic area or metadata.
- **Inference**: Recognize patterns in unstructured code to determine the topic area (e.g., class definitions for OOP, SQL keywords for SQL).

## Additional Notes
- **Version Control**: Git tracks changes with commits after processing.
- **Manual Updates**: Joy may manually edit `progress.md` to adjust statuses.

## About the User
- **Name**: Joy
- **Background**: BTech CSE student
- **Purpose**: Preparing for technical job interviews across various coding areas, keeping records for future reference, practicing coding skills in multiple languages, and supporting potential career switches by maintaining a structured coding notes repository.