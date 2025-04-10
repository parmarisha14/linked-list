![Screenshot 2025-04-10 220321](https://github.com/user-attachments/assets/2180fc5b-f5fa-4d97-a4f4-929170ef1567)
![Screenshot 2025-04-10 220348](https://github.com/user-attachments/assets/b0b1ac33-3501-496d-a633-af0c486866b1)
![Screenshot 2025-04-10 220414](https://github.com/user-attachments/assets/07cda2de-9f7e-4630-ae33-592d48026d85)
![Screenshot 2025-04-10 220439](https://github.com/user-attachments/assets/5a591473-07d2-4980-bf71-4ca3b5573303)
![Screenshot 2025-04-10 220513](https://github.com/user-attachments/assets/a33daee3-2e31-44be-8711-2dd665c4460c)
![Screenshot 2025-04-10 220537](https://github.com/user-attachments/assets/10ada5a9-9120-44a4-acb0-3a2c5bf28b95)
🏗️ Classes and Methods:
🔹 class Node
Represents a node in the linked list.

Members:

int data: stores the value of the node.

Node* next: pointer to the next node in the list.

Constructor:

Initializes the node with given data and sets next to NULL.

🔹 class linkedList
Manages the linked list operations.

Members:

Node* head: pointer to the head of the list.

int size: (defined but not used; can be removed or updated to track size dynamically).

🔧 Functions:
✅ insert_at_beginning(int data)
Inserts a new node with the given data at the beginning of the list.

🔍 search(int index)
Searches and prints the data at a specific index in the list.

Note: Indexing starts at 0.

❌ deleteRecord(int index)
Deletes the node at the specified index.

Handles edge cases like invalid index or empty list.

🔁 reverse()
Reverses the entire linked list.

📋 display()
Displays all the elements of the linked list.

🧪 Main Function (main)
Provides a menu-driven interface for user interaction.

🔘 Menu Options:
1.Insert data at the beginning

2.Search for an element by index

3.Delete element by index

4.Reverse the linked list

5.Display all elements

6.Exit the program
