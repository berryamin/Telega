// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTFILE
#define LQTG_TYPE_INPUTFILE

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT InputFile : public TelegramTypeObject
{
public:
    enum InputFileClassType {
        typeInputFile = 0xf52ff27f,
        typeInputFileBig = 0xfa4f0bb5
    };

    InputFile(InputFileClassType classType = typeInputFile, InboundPkt *in = 0);
    InputFile(InboundPkt *in);
    InputFile(const Null&);
    InputFile(const InputFile &another);
    virtual ~InputFile();

    void setId(qint64 id);
    qint64 id() const;

    void setMd5Checksum(const QString &md5Checksum);
    QString md5Checksum() const;

    void setName(const QString &name);
    QString name() const;

    void setParts(qint32 parts);
    qint32 parts() const;

    void setClassType(InputFileClassType classType);
    InputFileClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static InputFile fromMap(const QMap<QString, QVariant> &map);
    static InputFile fromJson(const QString &json);

    bool operator ==(const InputFile &b) const;
    InputFile &operator =(const InputFile &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint64 m_id;
    QString m_md5Checksum;
    QString m_name;
    qint32 m_parts;
    InputFileClassType m_classType;
};

Q_DECLARE_METATYPE(InputFile)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const InputFile &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, InputFile &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const InputFile &item);

#endif // LQTG_TYPE_INPUTFILE
