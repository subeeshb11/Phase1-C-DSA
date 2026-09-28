# Phase 1: Mistakes & Learnings Log

## Week 1: Foundations

### Day 1: Data Types, Memory & Git Setup
- **Issue 1:** Ran `git init` in `/home/jarvishere/` instead of project directory.
  - **Fix:** Deleted accidental repo with `rm -rf ~/.git` and initialized inside `~/Phase1-c-dsa`.
- **Issue 2:** Git authentication failed using account password.
  - **Fix:** GitHub requires a Personal Access Token (classic) with `repo` scope instead of account password.
- **Issue 3:** Binary executables (`day1_app`) and swap files (`.save`) were tracked by Git.
  - **Fix:** Configured `.gitignore` to ignore `*_app`, `*.out`, and editor swap files, then untracked them with `git rm --cached`.
- **C Concept:** `sizeof` returns a value of type `size_t`, which requires the `%zu` format specifier in `printf`.
