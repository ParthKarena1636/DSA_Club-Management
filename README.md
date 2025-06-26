# Capstone C++ Club & Event Manager

**A lightweight, terminal-based C++ application to manage student clubs, members, and events.**

---

## 🔍 Table of Contents

1. [Overview](#overview)  
2. [Features](#features)  
3. [Tech Stack](#tech-stack)  
4. [Getting Started](#getting-started)  
   - [Prerequisites](#prerequisites)  
   - [Building](#building)  
   - [Running](#running)  
5. [Usage Examples](#usage-examples)  
6. [Project Structure](#project-structure)  
7. [Contributing](#contributing)  
8. [License](#license)

---

## 📝 Overview

This project is a command-line tool written in modern C++ that helps clubs and college organizations:

- **Register** new members and events  
- **Search** by name, ID, or contact with duplicate-entry safety  
- **Display** colorful menus and prompts using ANSI escape codes  
- **Persist** data across sessions via simple file I/O  

It was developed as a Capstone project and demonstrates data structures (nested `std::unordered_map`), modular design, and basic UI enhancements in a console environment.

---

## ✨ Features

- **Fast lookups** of clubs, members, or events (O(1) average time)  
- **Duplicate handling** to prevent data inconsistencies  
- **ANSI-powered UI** for better readability (colored headings, menus)  
- **Persistent storage**: all data is saved to and loaded from text files  
- **Modular code**: each functionality lives in its own CPP/H files  

---

## 🛠 Tech Stack

- **Language**: C++17  
- **Compiler**: GCC / Clang / MSVC  
- **Build system**: simple command-line g++ invocation (no external deps)  

---

## 🚀 Getting Started

### Prerequisites

- A C++17-compatible compiler  
- Git (to clone this repo)  

### Building

```bash
# 1. Clone the repo
git clone https://github.com/your-username/Capstone-ClubEventManager.git
cd Capstone-ClubEventManager/Capstone-main

# 2. Compile
g++ -std=c++17 main.cpp functions.cpp Event.cpp -o club_manager
