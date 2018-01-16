// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_INPUTGEOPOINT
#define LQTG_TYPE_INPUTGEOPOINT

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>

class LIBQTELEGRAMSHARED_EXPORT InputGeoPoint : public TelegramTypeObject
{
public:
    enum InputGeoPointClassType {
        typeInputGeoPointEmpty = 0xe4c123d6,
        typeInputGeoPoint = 0xf3b7acc9
    };

    InputGeoPoint(InputGeoPointClassType classType = typeInputGeoPointEmpty, InboundPkt *in = 0);
    InputGeoPoint(InboundPkt *in);
    InputGeoPoint(const Null&);
    InputGeoPoint(const InputGeoPoint &another);
    virtual ~InputGeoPoint();

    void setLat(qreal lat);
    qreal lat() const;

    void setLongValue(qreal longValue);
    qreal longValue() const;

    void setClassType(InputGeoPointClassType classType);
    InputGeoPointClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static InputGeoPoint fromMap(const QMap<QString, QVariant> &map);
    static InputGeoPoint fromJson(const QString &json);

    bool operator ==(const InputGeoPoint &b) const;
    InputGeoPoint &operator =(const InputGeoPoint &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qreal m_lat;
    qreal m_longValue;
    InputGeoPointClassType m_classType;
};

Q_DECLARE_METATYPE(InputGeoPoint)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const InputGeoPoint &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, InputGeoPoint &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const InputGeoPoint &item);

#endif // LQTG_TYPE_INPUTGEOPOINT
