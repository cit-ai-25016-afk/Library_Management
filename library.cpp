#include <iostream>
using namespace std;

struct Book
{
    int id;
    string name;
    string author;
};

Book b[100];
int numBooks , n=0;

// Add a book
void addBook()
{
cout << "How many books? ";
cin >> numBooks;

for(int i = 0; i < numBooks; i++){
        if(n >= 100)
{
    cout << "Library is Full\n";
    return;
}

            cout<<"\n Book " <<i+1<<endl;
        cout << "Enter Book ID: ";
        cin >> b[n].id;

        cout << "Enter Book Name: ";
        cin >> b[n].name;

        cout << "Enter Author Name: ";
        cin >> b[n].author;

        n++;

        cout << "Book Added Successfully\n";
    }
}

// Book display
void showBooks()
{
    if(n == 0){
        cout << "No Books Available\n";
        return; }

    for(int i = 0; i < n; i++){
        cout << "\n Book " << i + 1 << endl;
        cout << "ID: " << b[i].id << endl;
        cout << "Name: " << b[i].name << endl;
        cout << "Author: " << b[i].author << endl; }
}

// Search for a book
void searchBook()
{
    int id;
    cout << "\n Enter Book ID: ";
    cin >> id;

    for(int i = 0; i < n; i++){
        if(b[i].id == id){
            cout << "Book Found:\n";
            cout << "Name: " << b[i].name << endl;
            cout << "Author: " << b[i].author << endl;
            return; }}

    cout << "Book Not Found\n";
}

// Delete book
void deleteBook()
{
    int id;
    cout << "\n Enter Book ID to delete: ";
    cin >> id;

    for(int i = 0; i < n; i++){
        if(b[i].id == id){
            for(int j = i; j < n - 1; j++){
                b[j] = b[j + 1];} // Moving elements


            n--;
            cout << "Book Deleted Successfully\n";
            return; }}

    cout << "Book Not Found\n";
}

int main()
{
    int choice;

    do {
        cout << " \n Library System \n";
        cout << "1. Add Book\n";
        cout << "2. Show Books\n";
        cout << "3. Search Book\n";
        cout << "4. Delete Book\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                addBook();
                break;

            case 2:
                showBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                deleteBook();
                break;

            case 5:
                cout << "Good Bye\n";
                break;

            default:
                cout << "Invalid Choice\n"; }}
    while(choice != 5);

    return 0;
}
