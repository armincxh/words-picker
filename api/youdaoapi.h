#ifndef YOUDAOAPI_H
#define YOUDAOAPI_H

#include <QObject>
#include <QString>
#include <QNetworkReply>
#include <QUrl>

class YoudaoAPI:public QObject
{
    Q_OBJECT
public:
    YoudaoAPI();
    void translate(QString query = "deepin",
                      QString from = "EN",
                      QString to = "zh_CHS",
                      QString appKey = "179b7fabf47afb85",
                      QString key = "ndTLw0HSgoUhkpgP0jGK7ynUI1KHFwcd");
    void request();

private:
    QString MD5(QString src);
    int Randon();
    QUrl query_url;
    int query_count;

signals:
    void finish(QByteArray);

private slots:
    void reply(QNetworkReply *);
};

#endif // YOUDAOAPI_H
