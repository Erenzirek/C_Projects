#include <iostream>
#include <string>
#include <vector>

class Customer {
private:
    std::string name;
    std::string surname;
    int accountNumber;
public:
    Customer(const std::string& n, const std::string& s, int accNum)
        : name(n), surname(s), accountNumber(accNum) {}

    // Get ve set i�lemleri burada tan�mlanabilir.
};

class Account {
private:
    int balance;
public:
    Account() : balance(0) {}

    void deposit(int amount) {
        // Para yat�rma i�lemi
    }

    void withdraw(int amount) {
        // Para �ekme i�lemi
    }

    int getBalance() const {
        return balance;
    }
};

class Bank {
private:
    std::vector<Customer> customers;
    std::vector<Account> accounts;
public:
    void addCustomer(const std::string& name, const std::string& surname, int accNum) {
        // Yeni m��teri eklemek i�in kullan�lacak i�lev
    }

    void createAccount(int customerIndex) {
        // Yeni hesap olu�turma i�lemi
    }

    void deposit(int accountIndex, int amount) {
        // Belirli bir hesaba para yat�rma i�lemi
    }

    void withdraw(int accountIndex, int amount) {
        // Belirli bir hesaptan para �ekme i�lemi
    }

    void displayAccountDetails(int accountIndex) {
        // Hesap bilgilerini g�r�nt�leme i�lemi
    }

    void displayAllCustomers() {
        // T�m m��teri bilgilerini g�r�nt�leme i�lemi
    }

    void displayAllAccounts() {
        // T�m hesap bilgilerini g�r�nt�leme i�lemi
    }
};

int main() {
    // Ana program burada yer alacak.
    // Kullan�c�dan giri�ler alarak Banka Y�netim Sistemi i�lemleri ger�ekle�tirilecek.
    return 0;
}
