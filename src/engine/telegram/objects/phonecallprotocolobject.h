// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_PHONECALLPROTOCOL_OBJECT
#define LQTG_TYPE_PHONECALLPROTOCOL_OBJECT

#include "telegramtypeqobject.h"
#include "telegram/types/phonecallprotocol.h"

#include <QPointer>

class LIBQTELEGRAMSHARED_EXPORT PhoneCallProtocolObject : public TelegramTypeQObject
{
    Q_OBJECT
    Q_ENUMS(PhoneCallProtocolClassType)
    Q_PROPERTY(qint32 flags READ flags WRITE setFlags NOTIFY flagsChanged)
    Q_PROPERTY(qint32 maxLayer READ maxLayer WRITE setMaxLayer NOTIFY maxLayerChanged)
    Q_PROPERTY(qint32 minLayer READ minLayer WRITE setMinLayer NOTIFY minLayerChanged)
    Q_PROPERTY(bool udpP2p READ udpP2p WRITE setUdpP2p NOTIFY udpP2pChanged)
    Q_PROPERTY(bool udpReflector READ udpReflector WRITE setUdpReflector NOTIFY udpReflectorChanged)
    Q_PROPERTY(PhoneCallProtocol core READ core WRITE setCore NOTIFY coreChanged)
    Q_PROPERTY(quint32 classType READ classType WRITE setClassType NOTIFY classTypeChanged)

public:
    enum PhoneCallProtocolClassType {
        TypePhoneCallProtocol
    };

    PhoneCallProtocolObject(const PhoneCallProtocol &core, QObject *parent = 0);
    PhoneCallProtocolObject(QObject *parent = 0);
    virtual ~PhoneCallProtocolObject();

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setMaxLayer(qint32 maxLayer);
    qint32 maxLayer() const;

    void setMinLayer(qint32 minLayer);
    qint32 minLayer() const;

    void setUdpP2p(bool udpP2p);
    bool udpP2p() const;

    void setUdpReflector(bool udpReflector);
    bool udpReflector() const;

    void setClassType(quint32 classType);
    quint32 classType() const;

    void setCore(const PhoneCallProtocol &core);
    PhoneCallProtocol core() const;

    PhoneCallProtocolObject &operator =(const PhoneCallProtocol &b);
    bool operator ==(const PhoneCallProtocol &b) const;

Q_SIGNALS:
    void coreChanged();
    void classTypeChanged();
    void flagsChanged();
    void maxLayerChanged();
    void minLayerChanged();
    void udpP2pChanged();
    void udpReflectorChanged();

private Q_SLOTS:

private:
    PhoneCallProtocol m_core;
};

#endif // LQTG_TYPE_PHONECALLPROTOCOL_OBJECT
