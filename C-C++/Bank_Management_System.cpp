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

    // Get ve set iþlemleri burada tanýmlanabilir.
};

class Account {
private:
    int balance;
public:
    Account() : balance(0) {}

    void deposit(int amount) {
        // Para yatýrma iþlemi
    }

    void withdraw(int amount) {
        // Para çekme iþlemi
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
        // Yeni müþteri eklemek için kullanýlacak iþlev
    }

    void createAccount(int customerIndex) {
        // Yeni hesap oluþturma iþlemi
    }

    void deposit(int accountIndex, int amount) {
        // Belirli bir hesaba para yatýrma iþlemi
    }

    void withdraw(int accountIndex, int amount) {
        // Belirli bir hesaptan para çekme iþlemi
    }

    void displayAccountDetails(int accountIndex) {
        // Hesap bilgilerini görüntüleme iþlemi
    }

    void displayAllCustomers() {
        // Tüm müþteri bilgilerini görüntüleme iþlemi
    }

    void displayAllAccounts() {
        // Tüm hesap bilgilerini görüntüleme iþlemi
    }
};

int main() {
    // Ana program burada yer alacak.
    // Kullanýcýdan giriþler alarak Banka Yönetim Sistemi iþlemleri gerçekleþtirilecek.
    return 0;
}
