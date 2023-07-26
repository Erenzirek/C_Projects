#include <iostream>
#include <string>
#include <vector>

class Book {
public:
    std::string title;
    std::string author;
    std::string publisher;
    std::string ISBN;
    int publicationYear;
    bool isBorrowed;

    // Constructor
    Book(const std::string& t, const std::string& a, const std::string& pub, const std::string& isbn, int year)
        : title(t), author(a), publisher(pub), ISBN(isbn), publicationYear(year), isBorrowed(false) {}
};

class Library {
private:
    std::vector<Book> catalog;

public:
    // add book 
    void addBook(const Book& book) {
        catalog.push_back(book);
    }

    // Erase the books 
    void removeBook(const std::string& title) {
        for (auto it = catalog.begin(); it != catalog.end(); ++it) {
            if (it->title == title) {
                catalog.erase(it);
                break;
            }
        }
    }

    // printst list of books 
    void listBooks() const {
        for (const auto& book : catalog) {
            std::cout << "Title: " << book.title << std::endl;
            std::cout << "Author: " << book.author << std::endl;
            std::cout << "Publisher: " << book.publisher << std::endl;
            std::cout << "ISBN: " << book.ISBN << std::endl;
            std::cout << "Publication Year: " << book.publicationYear << std::endl;
            std::cout << "Is Borrowed: " << (book.isBorrowed ? "Yes" : "No") << std::endl;
            std::cout << std::endl;
        }
    }

    // Menu Functions
    void menu() {
        int choice;
        do {
            std::cout << "MENU" << std::endl;
            std::cout << "1. Kitap Ekle" << std::endl;
            std::cout << "2. Kitap Sil" << std::endl;
            std::cout << "3. Kitaplarý Listele" << std::endl;
            std::cout << "0. Cikis" << std::endl;
            std::cout << "Seciminiz: ";
            std::cin >> choice;

            switch (choice) {
            case 1:
                addNewBook();
                break;
            case 2:
                removeBookByTitle();
                break;
            case 3:
                listBooks();
                break;
            case 0:
                std::cout << "Cikis yapiliyor..." << std::endl;
                break;
            default:
                std::cout << "Gecersiz secim. Tekrar deneyin." << std::endl;
                break;
            }

        } while (choice != 0);
    }

	// Adding Book 
private:
    void addNewBook() {
        std::string title, author, publisher, ISBN;
        int publicationYear;

        std::cout << "Kitap Adi: ";
        std::cin.ignore(); // Ýlk giriþten sonra kalan newline karakterini temizler
        std::getline(std::cin, title);

        std::cout << "Yazar Adi: ";
        std::getline(std::cin, author);

        std::cout << "Yayinevi: ";
        std::getline(std::cin, publisher);

        std::cout << "ISBN: ";
        std::getline(std::cin, ISBN);

        std::cout << "Yayin Tarihi: ";
        std::cin >> publicationYear;

        addBook(Book(title, author, publisher, ISBN, publicationYear));
        std::cout << "Kitap basariyla eklendi!" << std::endl;
    }

    // Kitap silmek için yardýmcý fonksiyon
    void removeBookByTitle() {
        std::string title;
        std::cout << "Silmek istediginiz kitabin adini girin: ";
        std::cin.ignore();
        std::getline(std::cin, title);

        removeBook(title);
        std::cout << "Kitap basariyla silindi!" << std::endl;
    }
};

int main() {
    Library library;
    library.menu();

    return 0;
}
