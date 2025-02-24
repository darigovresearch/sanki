#ifndef DECK_H
#define DECK_H

#include "ui_deck.h"
#include <QDir>

// TODO: add edit functionality back
class deck : public QWidget
{
    Q_OBJECT

public:
    deck(QWidget *parent = nullptr);
    void start(QString path);
    QString mainPath;
    QString name;

public slots:
    void refreshDecksSlot();

signals:
    void refreshDecks();
    void selectedDeck(QString);

private slots:

    void on_ButtoneditDeck_clicked();

    void on_deck_selectionChanged();

    void on_ButtonfileSelect_clicked();

private:
     Ui::MainQwidget *ui;
};

#endif // DECK_H
