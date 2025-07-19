# Gemini CLI Configuration for DSA Notes

## Project Overview
This project manages DSA notes and code, tracking progress and organizing materials for topics like Strings, Sliding Window, Recursion, etc. The goal is to automate updates, log learning, and suggest practice problems.

## Folder Structure
- `DSA/`: Root folder
  - `learning_log.md`: Daily learning log
  - `progress.md`: Problem status tracker
  - `<Topic>/`: e.g., `Strings/`, `Sliding_Window/`
    - `problems/`: Subfolders for each problem (e.g., `problem1/`)
      - `code.cpp`: Solution code
      - `notes.md`: Optional problem-specific notes
    - `compact_version.md`: Summary of solutions/key points
    - `discussion.md`: Detailed problem discussions

## File Purposes
- `learning_log.md`: Date-based entries of what was learned (e.g., "2025-07-19: Solved Strings/two_sum").
- `progress.md`: Lists problems and status (`solved`, `attempted`, `unsolved`).
- `code.cpp`: Raw code from online C++ editor.
- `compact_version.md`: Concise summary of solutions per topic.
- `discussion.md`: Detailed notes per topic.

## Commands/Queries
1. **"What did I learn this week?"**
   - Parse `learning_log.md` for entries from the last 7 days.
   - Return a summary of topics and key learnings.

2. **"What code should I practice today?"**
   - Check `learning_log.md` for topics worked on in the last week.
   - Cross-reference `progress.md` for `unsolved` or `attempted` problems in those topics.
   - Suggest 1-2 problems (e.g., "Try Sliding_Window/longest_no_repeat").

3. **"Generate summary for <topic>/<problem> and append to compact_version.md"**
   - Read `<topic>/problems/<problem>/code.cpp` and `notes.md` (if exists).
   - Generate a concise entry (e.g., problem name, approach, time complexity).
   - Append to `<topic>/compact_version.md`.

4. **"Add discussion points for <topic>/<problem> to discussion.md"**
   - Analyze `<topic>/problems/<problem>/code.cpp` and `notes.md`.
   - Generate detailed points (e.g., challenges, key insights).
   - Append to `<topic>/discussion.md`.

## Notes
- Use Git for versioning (`git commit` after updates).
- Problem folders should be named descriptively (e.g., `two_sum`).