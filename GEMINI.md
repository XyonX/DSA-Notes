# Gemini CLI Configuration for DSA Notes

## Project Overview
This project is designed to help Joy, a BTech CSE student, organize and manage Data Structures and Algorithms (DSA) notes and code. The primary objectives are:
- **Prepare for technical job interviews** by maintaining structured and accessible notes.
- **Keep records for future reference** to revisit concepts and solutions.
- **Practice coding skills** by documenting personal solutions and approaches.
- **Support potential career switches** by providing a reliable reference of DSA knowledge.

Gemini CLI serves two key roles:
1. **Automate note organization**: Processes code dumps from `recent_codes.txt`, organizes them into topic folders, updates logs, creates or updates `progress.md`, and commits changes to Git.
2. **Act as a coding mentor**: Provides guidance on what to practice, discusses specific problems, conducts mock tests, and offers feedback on solutions.

## Folder Structure
The root folder is `DSA/`, which contains:
- **`recent_codes.txt`**: A temporary file for code snippets (with or without metadata).
- **`logs/`**: Daily logs of coding activities (e.g., `2025-07-19.md`).
- **`progress.md`**: Tracks problem status (e.g., solved, attempted, unsolved), created or updated automatically.
- **`update_status.json`**: A temporary file to track the progress of the "update my notes" command (created during processing and deleted upon completion).
- **Topic Folders** (e.g., `Strings/`): Each contains:
  - **`problems/`**: Subfolders for each problem (e.g., `two_sum/`), with:
    - **`code.cpp`**: Solution code.
    - **`notes.md`**: Problem-specific notes.
  - **`compact_version.md`**: Summarizes solutions.
  - **`discussion.md`**: Detailed problem discussions.

### Example Structure
```
DSA/
├── recent_codes.txt
├── logs/
│   ├── 2025-07-19.md
│   └── 2025-07-20.md
├── progress.md
├── update_status.json (temporary)
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
- **Topic Folders**: DSA topics (e.g., `Strings`, `Sliding_Window`).
- **Problem Folders**: Descriptive problem names (e.g., `two_sum`).
- **Code Files**: Always `code.cpp`.
- **Notes Files**: `notes.md`.
- **Log Files**: Date-based (e.g., `2025-07-19.md`).
- **Progress File**: `progress.md` in the root directory.
- **Status File**: `update_status.json` (temporary, used during processing).

## Gemini CLI's Role and Instructions

### 1. Note Organization with Checkpoint System
When you say **"update my notes"**, Gemini CLI:
- Checks if `update_status.json` exists:
  - If it exists, resumes processing from the last checkpoint by analyzing which snippets from `recent_codes.txt` have already been processed.
  - If not, starts processing `recent_codes.txt` from the beginning.
- Processes each snippet in `recent_codes.txt` (structured or unstructured).
- Organizes code into topic/problem folders.
- Appends notes to `notes.md`, `compact_version.md`, and `discussion.md`.
- Logs activities in `logs/<today's date>.md`.
- Creates or updates `progress.md` to reflect problem statuses.
- Commits changes to Git after all snippets are processed.
- Clears `recent_codes.txt` and deletes `update_status.json` upon successful completion.

#### Checkpoint System
- **Purpose**: Ensures the update process can resume if interrupted (e.g., due to API limits or errors).
- **How It Works**:
  - Before processing each snippet, Gemini CLI updates `update_status.json` with the current state (e.g., which snippets have been processed, identified by unique hashes).
  - If an interruption occurs (e.g., API limit error), the process pauses, and the status is saved.
  - On the next "update my notes" command, it checks `update_status.json` and `recent_codes.txt` to resume from the last processed snippet.
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
// Topic: <topic>
// Problem: <problem>
// Notes: <notes>
<code>
// END OF SNIPPET
```

#### For Unstructured Code Dumps
Gemini CLI will:
- Parse functions and comments.
- Infer `topic`, `problem`, and `notes` based on code and comments (e.g., `checkAnagrams` suggests "Strings/Check Anagrams").

#### Common Processing Steps
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
- **Handle progress.md**:
  - If `progress.md` doesn’t exist, create it and analyze the entire note base (`problems/` folders) to list all problems with a default status of "solved" (since code exists).
  - If `progress.md` exists, update it to include new or updated problems from `recent_codes.txt` as "solved" and maintain existing statuses.
  - Format:
    ```
    # Progress

    ## Strings
    - two_sum: solved
    - reverse_string: solved

    ## Sliding_Window
    - max_subarray: unsolved
    ```
- **Commit to Git**:
  - Commit changes with:
    ```
    git add .
    git commit -m "Added/Updated <topic>/<problem>"
    ```
- **Clear `recent_codes.txt`**:
  - Empty the file only after all snippets are successfully processed.
- **Delete `update_status.json`**:
  - Remove the temporary status file upon completion.

### 2. Mentor Features
Gemini CLI acts as a coding mentor, using `progress.md` and `logs/` to suggest practice and provide feedback.

#### Available Commands
- **Suggest Practice**: Say "What should I practice today?" or "Suggest problems to solve."
  - Analyzes `logs/` for recent activity and `progress.md` for unsolved or infrequently practiced problems.
  - Suggests 1-2 problems, prioritizing topics not practiced recently (e.g., "You studied Sliding Window on 2025-07-19 but haven’t practiced since. Try max_subarray.").
- **Discuss Problem**: Say "Let's discuss <problem_name>."
  - Retrieves `code.cpp`, `notes.md`, and `discussion.md` for `<problem_name>`.
  - If solved, discusses the code, comments, and time complexity.
  - If unsolved (per `progress.md`), informs you and suggests approaches.
- **Start Mock Test**: Say "Start a mock test."
  - Suggests 1-3 problems (unsolved from `progress.md` or new industry-standard problems).
  - After solving, add code to `recent_codes.txt` with `// Mock Test Problem: <problem>`.
  - Run "update my notes" to process and get feedback (e.g., correctness, time complexity, comparison to prior solutions).
- **Help**: Say "List commands" or "Help."
  - Displays:
    ```
    Available Commands:
    - "update my notes": Organize recent_codes.txt into folders, update logs and progress.md, commit to Git.
    - "What should I practice today?" or "Suggest problems to solve": Recommend problems based on logs and progress.
    - "Let's discuss <problem_name>": Discuss code, notes, and complexity for a problem.
    - "Start a mock test": Suggest problems and provide feedback after submission.
    - "List commands" or "Help": Show this list.
    ```

#### Mock Test Process
- **Starting a Test**: Suggests problems from `progress.md` (unsolved) or new topics.
- **Submitting Solutions**: Add to `recent_codes.txt` with `// Mock Test Problem: <problem>`.
- **Feedback**: Analyzes solution for correctness, efficiency, and compares to prior solutions in the note base (e.g., "Your solution uses O(n^2); consider a hash map for O(n).").

### Explicit Instructions for Gemini CLI
- **Doenerate or Overwrite**: Preserve Joy's original code, including errors.
- **Append, Do Not Overwrite**: Append to `notes.md`, `compact_version.md`, and `discussion.md`.
- **Logs**: Create logs only when code is added.
- **Progress**: Create `progress.md` if missing, analyze note base, and update after processing `recent_codes.txt`.
- **Feedback**: Provide constructive feedback without modifying code.
- **Checkpoint System**: Use `update_status.json` to track and resume processing if interrupted.

## Additional Notes
- **Version Control**: Git tracks changes with commits after processing.
- **Manual Updates**: Joy may manually edit `progress.md` to adjust statuses.

## About the User
- **Name**: Joy
- **Background**: BTech CSE student
- **Purpose**: Preparing for technical job interviews, keeping records for future reference, practicing coding skills, and supporting potential career switches by maintaining a structured DSA notes repository.