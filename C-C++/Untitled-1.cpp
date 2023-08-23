#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QWidget>
#include <QStringList>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    QVBoxLayout *layout = new QVBoxLayout(&window);

    QLabel *label = new QLabel("Kelimeyi Tahmin Edin:");
    QLineEdit *lineEdit = new QLineEdit;
    QPushButton *button = new QPushButton("Tahmin Et");
    QLabel *displayLabel = new QLabel;

    QString kelime = "programming";
    QString tahmin = kelime;
    tahmin.fill('_', kelime.length());

    displayLabel->setText(tahmin);

    QObject::connect(button, &QPushButton::clicked, [kelime, &lineEdit, &displayLabel, &tahmin]() {
        QString harf = lineEdit->text().toLower();

        if (harf.length() == 1) {
            bool dogruTahmin = false;

            for (int i = 0; i < kelime.length(); ++i) {
                if (kelime.at(i).toLower() == harf) {
                    tahmin[i] = kelime.at(i);
                    dogruTahmin = true;
                }
            }

            if (!dogruTahmin) {
                QMessageBox::information(nullptr, "Sonuç", "Harf yanlış. Tekrar deneyin!");
            } else {
                displayLabel->setText(tahmin);

                if (tahmin == kelime) {
                    QMessageBox::information(nullptr, "Sonuç", "Tebrikler! Kelimeyi doğru tahmin ettiniz.");
                }
            }
        } else {
            QMessageBox::warning(nullptr, "Hata", "Yanlış giriş. Lütfen tek bir harf girin.");
        }

        lineEdit->clear();
    });

    layout->addWidget(label);
    layout->addWidget(lineEdit);
    layout->addWidget(button);
    layout->addWidget(displayLabel);

    window.setLayout(layout);
    window.show();

    return app.exec();
}
