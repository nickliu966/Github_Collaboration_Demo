# Github_Collaboration_Demo
This repository serves as the in-class demo repository for Lab 3 of UChicago MACS 30122/30222 course. In this lab, I will walk through collaboration using git and github to help students better prepare for their final project. Specifically, I will mainly cover the three main ways of collaboration using git and github: 1) Only Push and Pull (on a Shared Main Branch), 2) Fork and Pull Requests, and 3) Branch and Merge. In addition, I will lay out some additional resources for both topics covered in the lab for reconsolidation and more advanced topics (beyond the scope of this lab) for exploration.

## Github Repository Navigation
    .
    ├── 1_Clone_and_Push            # Directory containing test code for Only Push and Pull      
    ├── 2_Fork_and_Pull_Request     # Directory containing test code for Fork and Pull_Request
    ├── 3_Branch_and_Merge          # Directory containing test code for Branch and Merge
    ├── Demo_Steps                  # Directory outlining steps of code implementation during in-class demo
    ├── Lab_Slides.pptx             # Powerpoint for the lab

## Different Ways of Collaborating Using Git and GitHub

Collaboration in Git can take different forms, each with its advantages and challenges. This guide covers three common collaboration approaches: **Only Pull and Push**, **Fork and Pull Requests**, and **Branch and Merge**.

---

### **1️⃣ Only Pull and Push (on a Shared Main Branch)**

This is the simplest but riskiest way to collaborate on a project. Team members **clone** the same repository, make changes locally, and push directly to the `main` branch.

#### **Workflow:**
1. Clone the repository:
   ```bash
   git clone https://github.com/example/repo.git
   ```
2. Make changes, add, and commit:
   ```bash
   git add <file>
   git commit -m "Your commit message"
   ```
3. Push changes:
   ```bash
   git push origin main
   ```

#### **Drawbacks:**
- **Risk of overwriting teammates' work** if they push before you.
- **Frequent merge conflicts**, especially if multiple people edit the same files.
- **No built-in code review process**, meaning bugs can get merged directly into `main`.

🔹 **Best for:** Small projects with a few contributors, but not ideal for structured collaboration.

---

### **2️⃣ Fork and Pull Requests (Recommended for Open Source & External Collaboration)**

In this workflow, contributors **fork** the original repository, make changes in their own copy, and submit a **pull request (PR)** for review before merging.

#### **Workflow:**
1. **Fork** the repository on GitHub.
2. Clone the forked repo:
   ```bash
   git clone https://github.com/your-username/repo.git
   ```
3. Add the original repository as an upstream remote:
   ```bash
   git remote add upstream https://github.com/original-owner/repo.git
   ```
4. Make changes, commit, and push:
   ```bash
   git add <file>
   git commit -m "Your commit message"
   git push origin main
   ```
5. Open a **pull request** on GitHub from your fork to the original repository.
6. The repository owner reviews and merges the PR.

#### **Advantages:**
✅ **Prevents accidental overwrites** by working in separate forks.  
✅ **Encourages code reviews** before merging.  
✅ **Ideal for open-source projects** and external contributions.  

🔹 **Best for:** Open-source projects, external collaboration, and structured contributions.

---

### **3️⃣ Branch and Merge (Best for Team Development & Feature Isolation)**

Instead of working directly on `main`, developers create **feature branches** to work independently before merging changes.

#### **Workflow:**
1. Create a new branch:
   ```bash
   git checkout -b feature_branch
   ```
2. Make changes, commit, and push:
   ```bash
   git add <file>
   git commit -m "Your commit message"
   git push origin feature_branch
   ```
3. Merge back into `main` when ready:
   - **Fast-forward merge (if no divergence):**
     ```bash
     git checkout main
     git merge feature_branch
     ```
   - **3-way merge (if branches diverged):**
     ```bash
     git merge --no-ff feature_branch
     ```
4. Delete the branch after merging:
   ```bash
   git branch -d feature_branch
   git push origin --delete feature_branch
   ```

#### **Advantages:**
✅ **Isolates features and bug fixes** before merging.  
✅ **Allows parallel development** without affecting `main`.  
✅ **Safer workflow** compared to working directly on `main`.  

#### **Challenges:**
- Requires **branch management** to keep things organized.
- Merge conflicts can still occur but are easier to resolve.

🔹 **Best for:** Team-based development and projects where multiple features are developed simultaneously.

---

### **Which Collaboration Method Should You Use?**
| Method | Pros | Cons | Best For |
|--------|------|------|----------|
| **Only Pull and Push** | Simple, quick | High risk of conflicts & overwrites | Small projects, quick fixes |
| **Fork and Pull Requests** | Safe, structured, allows review | Slower, requires PR approval | Open-source projects, external contributors |
| **Branch and Merge** | Organized, enables parallel work | Needs branch management | Team development, feature-based workflows |

Each method has its **use case**, but for most structured development projects, **Branch and Merge** or **Fork and Pull Requests** are preferred over **Only Pull and Push**.

---

### **📌 Key Takeaways**
- **Only Pull and Push** is risky due to direct changes to `main`.
- **Fork and Pull Requests** enable **safe contributions** and review.
- **Branch and Merge** keeps the **workflow organized** and avoids conflicts.

## Learning Resources
I understand that using git and github for team collaboration may become challenging (and irritating 😑) at first, especially when you are trying as hard as you can to understand piles of unfamiliar git commands and those annoying "merge conflicts" error messages. This is in fact totally normal! It also applies to me when I started to learn these topics and apply them in my own group projects (and even today to be honest 😂). 

Hence, I have gathered a bunch of learning resources that could hopefully make our Git experience less overwhelming. These include both basic and intermediate-level materials that can serve as a refresher and aid in consolidation, as well as more advanced resources that could deepen understanding and provide hands-on challenges. 