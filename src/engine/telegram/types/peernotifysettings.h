// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_PEERNOTIFYSETTINGS
#define LQTG_TYPE_PEERNOTIFYSETTINGS

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QVariant>
#include "../coretypes.h"

#include <QDataStream>

#include <QtGlobal>
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT PeerNotifySettings : public TelegramTypeObject
{
public:
    enum PeerNotifySettingsClassType {
        typePeerNotifySettingsEmpty = 0x70a68512,
        typePeerNotifySettings = 0x9acda4c0
    };

    PeerNotifySettings(PeerNotifySettingsClassType classType = typePeerNotifySettingsEmpty, InboundPkt *in = 0);
    PeerNotifySettings(InboundPkt *in);
    PeerNotifySettings(const Null&);
    PeerNotifySettings(const PeerNotifySettings &another);
    virtual ~PeerNotifySettings();

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setMuteUntil(qint32 muteUntil);
    qint32 muteUntil() const;

    void setShowPreviews(bool showPreviews);
    bool showPreviews() const;

    void setSilent(bool silent);
    bool silent() const;

    void setSound(const QString &sound);
    QString sound() const;

    void setClassType(PeerNotifySettingsClassType classType);
    PeerNotifySettingsClassType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    QMap<QString, QVariant> toMap() const;
    static PeerNotifySettings fromMap(const QMap<QString, QVariant> &map);
    static PeerNotifySettings fromJson(const QString &json);

    bool operator ==(const PeerNotifySettings &b) const;
    PeerNotifySettings &operator =(const PeerNotifySettings &b);

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

    QByteArray getHash(QCryptographicHash::Algorithm alg = QCryptographicHash::Md5) const;

private:
    qint32 m_flags;
    qint32 m_muteUntil;
    QString m_sound;
    PeerNotifySettingsClassType m_classType;
};

Q_DECLARE_METATYPE(PeerNotifySettings)

QDataStream LIBQTELEGRAMSHARED_EXPORT &operator<<(QDataStream &stream, const PeerNotifySettings &item);
QDataStream LIBQTELEGRAMSHARED_EXPORT &operator>>(QDataStream &stream, PeerNotifySettings &item);

QDebug LIBQTELEGRAMSHARED_EXPORT operator<<(QDebug debug,  const PeerNotifySettings &item);

#endif // LQTG_TYPE_PEERNOTIFYSETTINGS
