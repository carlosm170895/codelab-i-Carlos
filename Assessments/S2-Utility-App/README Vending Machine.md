
## How to Build & Run

```bash
g++ -o vending main.cpp
./vending
```

---

## How It Works

1. The program shows a short menu:
   - A1 - Cola (£1.50)
   - A2 - Water (£1.00)
   - A3 - Crisps (£1.20)

2. You enter how much money you have (e.g. `2.00` for £2).

3. You enter the **item code** (A1, A2, or A3).

4. The program checks:
   - If the code is valid
   - If you have enough money

5. If yes, it **dispenses the item** and shows your **change**.  
   If not, it tells you that you need more money.

---

## Features

- Console menu with **3 simple items**
- Select item by **code (A1, A2, A3)**
- Input any amount of money
- Displays **dispensed message** and **change**
- Handles **invalid codes** and **not enough money**
- Short, clear, and beginner-friendly

---

## Project Structure

- `main.cpp` — the entire app  
- `Development_Document_Super_Simple_Vending_Machine.docx` — documentation ready for submission  
- `.gitignore` — ignores build files

---

## Example Run

```
Welcome to the Simple Vending Machine!
Menu:
A1 - Cola (£1.50)
A2 - Water (£1.00)
A3 - Crisps (£1.20)

Insert money (£): 2.00
Enter item code (A1, A2, A3): A1
Dispensing Cola...
Your change is £0.50
Thank you!
```

---

## Upload to GitHub

```bash
git init
git add .
git commit -m "Initial commit: Super Simple Vending Machine"
git branch -M main
git remote add origin <YOUR_REPO_URL>
git push -u origin main
```
