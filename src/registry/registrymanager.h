#ifndef REGISTRIESDOWNLOADER_H
#define REGISTRIESDOWNLOADER_H

#include "src/file/json.h"

#include <QEventLoop>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrl>

#include <QDir>
#include <QFile>
#include <QFileInfo>

#include <QJsonDocument>
#include <QJsonObject>

#include <QApplication>
#include <QMessageBox>

namespace SoftwareRegistry
{
    class Manager
    {
    public:
        Manager();
        QJsonObject getServerStackSoftwareRegistry();
        // QJsonObject getPhpSoftwareRegistry();
    private:
        void download();
        void downloadRegistry(const QUrl &url, const QString &file);
        bool fileNotExistingOrOutdated(const QString &fileName);

    protected:
        QJsonDocument stackSoftwareRegistry;
        // QJsonDocument phpSoftwareRegistry;
    };
} // namespace SoftwareRegistry

#endif // REGISTRIESDOWNLOADER_H
