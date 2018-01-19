// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_GAME
#define LQTG_TYPE_GAME

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>
#include <QString>
#include "document.h"
#include "photo.h"

class LIBQTELEGRAMSHARED_EXPORT Game : public TelegramTypeObject
{
public:
    enum GameClassType {
        typeGame = 0xbdf9653b
    };

    Game(GameClassType classType = typeGame, InboundPkt *in = 0);
    Game(InboundPkt *in);
    Game(const Null&);
    Game(const Game &another);
    virtual ~Game();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setDescription(const QString &description);
    QString description() const;

    void setDocument(const Document &document);
    Document document() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setId(qint64 id);
    qint64 id() const;

    void setPhoto(const Photo &photo);
    Photo photo() const;

    void setShortName(const QString &shortName);
    QString shortName() const;

    void setTitle(const QString &title);
    QString title() const;

    void setClassType(GameClassType classType);
    GameClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static Game fromMap(const QMap<QString, QVariant> &map);
    static Game fromJson(const QString &json);

    bool operator ==(const Game &b) const;
    Game &operator =(const Game &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint64 m_accessHash;
    QString m_description;
    Document m_document;
    qint32 m_flags;
    qint64 m_id;
    Photo m_photo;
    QString m_shortName;
    QString m_title;
    GameClassType m_classType;
};

Q_DECLARE_METATYPE(Game)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const Game &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, Game &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const Game &item);

#endif // LQTG_TYPE_GAME
