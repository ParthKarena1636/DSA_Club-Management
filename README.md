# Capstone C++ Club & Event Manager

**A lightweight, terminal-based C++ application to manage student clubs, members, and events with attractive Output on console.**

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
- **Powerful UI** for better readability (colored headings, menus)  
- **Persistent storage**: all data is saved to and loaded from text files  
- **Modular code**: each functionality lives in its own CPP/H files  

---

## 🛠 Tech Stack

- **Language**: C++17  
- **Compiler**: GCC 
- **Build system**: simple command-line g++ invocation (no external deps)  

---
