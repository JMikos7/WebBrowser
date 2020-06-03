#ifndef WEBBROWSER_H
#define WEBBROWSER_H

#include <QMainWindow>
#include <QWebEngineHistory>

QT_BEGIN_NAMESPACE
namespace Ui { class WebBrowser; }
QT_END_NAMESPACE

class WebBrowser : public QMainWindow
{
    Q_OBJECT

public:
    WebBrowser(QWidget *parent = nullptr);
    ~WebBrowser();

private slots:
    void onAddressBarEnterPressed();
    void onUrlChanged(const QUrl & url);
    void titleChanged();
private:
    Ui::WebBrowser *ui;
};


#endif // WEBBROWSER_H
