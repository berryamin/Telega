// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_WEBDOCUMENT_OBJECT
#define LQTG_TYPE_WEBDOCUMENT_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/webdocument.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT WebDocumentObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(WebDocumentClassType)
    Q_PROPERTY(qint64 accessHash READ accessHash WRITE setAccessHash NOTIFY accessHashChanged)
    Q_PROPERTY(QList<DocumentAttribute> attributes READ attributes WRITE setAttributes NOTIFY attributesChanged)
    Q_PROPERTY(qint32 dcId READ dcId WRITE setDcId NOTIFY dcIdChanged)
    Q_PROPERTY(QString mimeType READ mimeType WRITE setMimeType NOTIFY mimeTypeChanged)
    Q_PROPERTY(qint32 size READ size WRITE setSize NOTIFY sizeChanged)
    Q_PROPERTY(QString url READ url WRITE setUrl NOTIFY urlChanged)
    Q_PROPERTY(WebDocument core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum WebDocumentClassType {
        TypeWebDocument
    };

    WebDocumentObject(const WebDocument &core, QObject *parent = 0);
    WebDocumentObject(QObject *parent = 0);
    virtual ~WebDocumentObject();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setAttributes(const QList<DocumentAttribute> &attributes);
    QList<DocumentAttribute> attributes() const;

    void setDcId(qint32 dcId);
    qint32 dcId() const;

    void setMimeType(const QString &mimeType);
    QString mimeType() const;

    void setSize(qint32 size);
    qint32 size() const;

    void setUrl(const QString &url);
    QString url() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const WebDocument &core);
    WebDocument core() const;

    WebDocumentObject &operator =(const WebDocument &b);
    bool operator ==(const WebDocument &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void accessHashChanged();
    void attributesChanged();
    void dcIdChanged();
    void mimeTypeChanged();
    void sizeChanged();
    void urlChanged();

private Q_SLOTS:

private:
    WebDocument m_core;
};

#endif // LQTG_TYPE_WEBDOCUMENT_OBJECT
