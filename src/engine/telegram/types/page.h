// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_PAGE
#define LQTG_TYPE_PAGE

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QList>
#include "pageblock.h"
#include "document.h"
#include "photo.h"

class LIBQTELEGRAMSHARED_EXPORT Page : public TelegramTypeObject
{
public:
    enum PageClassType {
        typePagePart = 0x8e3f9ebe,
        typePageFull = 0x556ec7aa
    };

    Page(PageClassType classType = typePagePart, InboundPkt *in = 0);
    Page(InboundPkt *in);
    Page(const Null&);
    Page(const Page &another);
    virtual ~Page();

    void setBlocks(const QList<PageBlock> &blocks);
    QList<PageBlock> blocks() const;

    void setDocuments(const QList<Document> &documents);
    QList<Document> documents() const;

    void setPhotos(const QList<Photo> &photos);
    QList<Photo> photos() const;

    void setClassType(PageClassType classType);
    PageClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static Page fromMap(const QMap<QString, QVariant> &map);
    static Page fromJson(const QString &json);

    bool operator ==(const Page &b) const;
    Page &operator =(const Page &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QList<PageBlock> m_blocks;
    QList<Document> m_documents;
    QList<Photo> m_photos;
    PageClassType m_classType;
};

Q_DECLARE_METATYPE(Page)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const Page &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, Page &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const Page &item);

#endif // LQTG_TYPE_PAGE
