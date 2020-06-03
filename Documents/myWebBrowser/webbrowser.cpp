#include "webbrowser.h"
#include "ui_webbrowser.h"
#include <QUrl>
#include <QtWebEngineCore>

WebBrowser::WebBrowser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WebBrowser)
{
    ui->setupUi(this);
    ui->webView->load(QUrl("https://www.google.com"));
    ui->webView->show();
    ui->prevButton->setIcon(QIcon(":/buttons/go-previous.png"));
    ui->nextButton->setIcon(QIcon(":/buttons/go-next.png"));
    ui->refreshButton->setIcon(QIcon(":/buttons/view-refresh.png"));
    QString style = "QPushButton {border:none; width:25px; height:25px;} QPushButton:hover {background-color: rgb(233, 223, 220);}";
    ui->prevButton->setStyleSheet(style);
    ui->nextButton->setStyleSheet(style);
    ui->refreshButton->setStyleSheet(style);
    connect(ui->addressBar, &QLineEdit::returnPressed, this, &WebBrowser::onAddressBarEnterPressed);

}

void WebBrowser::onAddressBarEnterPressed()
{
    ui->webView->load(QUrl(ui->addressBar->text()));
}
void WebBrowser::onUrlChanged(const QUrl & url)
{
    ui->addressBar->setText(url.toString());
}
void WebBrowser::titleChanged()
{
    ui->webView->setWindowTitle("Web Browser");
}
void QWebEngineHistory::back()
{

}
void QWebEngineHistory::forward()
{

}
WebBrowser::~WebBrowser()
{
    delete ui;
}
