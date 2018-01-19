// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_FOUNDGIF
#define LQTG_TYPE_FOUNDGIF

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QString>
#include "document.h"
#include <QtGlobal>
#include "photo.h"

class LIBQTELEGRAMSHARED_EXPORT FoundGif : public TelegramTypeObject
{
public:
    enum FoundGifClassType {
        typeFoundGif = 0x162ecc1f,
        typeFoundGifCached = 0x9c750409
    };

    FoundGif(FoundGifClassType classType = typeFoundGif, InboundPkt *in = 0);
    FoundGif(InboundPkt *in);
    FoundGif(const Null&);
    FoundGif(const FoundGif &another);
    virtual ~FoundGif();

    void setContentType(const QString &contentType);
    QString contentType() const;

    void setContentUrl(const QString &contentUrl);
    QString contentUrl() const;

    void setDocument(const Document &document);
    Document document() const;

    void setH(qint32 h);
    qint32 h() const;

    void setPhoto(const Photo &photo);
    Photo photo() const;

    void setThumbUrl(const QString &thumbUrl);
    QString thumbUrl() const;

    void setUrl(const QString &url);
    QString url() const;

    void setW(qint32 w);
    qint32 w() const;

    void setClassType(FoundGifClassType classType);
    FoundGifClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static FoundGif fromMap(const QMap<QString, QVariant> &map);
    static FoundGif fromJson(const QString &json);

    bool operator ==(const FoundGif &b) const;
    FoundGif &operator =(const FoundGif &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QString m_contentType;
    QString m_contentUrl;
    Document m_document;
    qint32 m_h;
    Photo m_photo;
    QString m_thumbUrl;
    QString m_url;
    qint32 m_w;
    FoundGifClassType m_classType;
};

Q_DECLARE_METATYPE(FoundGif)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const FoundGif &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, FoundGif &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const FoundGif &item);

#endif // LQTG_TYPE_FOUNDGIF
