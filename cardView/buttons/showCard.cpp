#include "cardView/buttons/showCard.h"
#include "global.h"
#include "ui_showCard.h"

showCard::showCard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::showCard)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
    if(ereader) {
        ui->pushButton->setStyleSheet(ereaderVars::buttonNoFlashStylesheet);
        this->setFixedHeight(125);
    }
}

showCard::~showCard()
{
    delete ui;
}

void showCard::on_pushButton_clicked()
{
    emit clicked();
}

void showCard::setText(QString text)
{
    ui->pushButton->setText(text);
}
