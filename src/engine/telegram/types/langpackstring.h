// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_LANGPACKSTRING
#define LQTG_TYPE_LANGPACKSTRING

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QString>
#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT LangPackString : public TelegramTypeObject
{
public:
    enum LangPackStringClassType {
        typeLangPackString = 0xcad181f6,
        typeLangPackStringPluralized = 0x6c47ac9f,
        typeLangPackStringDeleted = 0x2979eeb2
    };

    LangPackString(LangPackStringClassType classType = typeLangPackString, InboundPkt *in = 0);
    LangPackString(InboundPkt *in);
    LangPackString(const Null&);
    LangPackString(const LangPackString &another);
    virtual ~LangPackString();

    void setFewValue(const QString &fewValue);
    QString fewValue() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setKey(const QString &key);
    QString key() const;

    void setManyValue(const QString &manyValue);
    QString manyValue() const;

    void setOneValue(const QString &oneValue);
    QString oneValue() const;

    void setOtherValue(const QString &otherValue);
    QString otherValue() const;

    void setTwoValue(const QString &twoValue);
    QString twoValue() const;

    void setValue(const QString &value);
    QString value() const;

    void setZeroValue(const QString &zeroValue);
    QString zeroValue() const;

    void setClassType(LangPackStringClassType classType);
    LangPackStringClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static LangPackString fromMap(const QMap<QString, QVariant> &map);
    static LangPackString fromJson(const QString &json);

    bool operator ==(const LangPackString &b) const;
    LangPackString &operator =(const LangPackString &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    QString m_fewValue;
    qint32 m_flags;
    QString m_key;
    QString m_manyValue;
    QString m_oneValue;
    QString m_otherValue;
    QString m_twoValue;
    QString m_value;
    QString m_zeroValue;
    LangPackStringClassType m_classType;
};

Q_DECLARE_METATYPE(LangPackString)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const LangPackString &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, LangPackString &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const LangPackString &item);

#endif // LQTG_TYPE_LANGPACKSTRING
