// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_FNC_PHONE
#define LQTG_FNC_PHONE

#include "telegramfunctionobject.h"
#include "telegram/types/datajson.h"
#include "telegram/types/phonephonecall.h"
#include "telegram/types/inputuser.h"
#include <QtGlobal>
#include <QByteArray>
#include "telegram/types/phonecallprotocol.h"
#include "telegram/types/inputphonecall.h"
#include "telegram/types/updatestype.h"
#include "telegram/types/phonecalldiscardreason.h"
#include <QString>

namespace Tg {
namespace Functions {

class LIBQTELEGRAMSHARED_EXPORT Phone : public TelegramFunctionObject
{
public:
    enum PhoneFunction {
        fncPhoneGetCallConfig = 0x55451fa9,
        fncPhoneRequestCall = 0x5b95b3d4,
        fncPhoneAcceptCall = 0x3bd2b4a0,
        fncPhoneConfirmCall = 0x2efe1722,
        fncPhoneReceivedCall = 0x17d54f61,
        fncPhoneDiscardCall = 0x78d413a6,
        fncPhoneSetCallRating = 0x1c536a34,
        fncPhoneSaveCallDebug = 0x277add7e
    };

    Phone();
    virtual ~Phone();

    static bool getCallConfig(OutboundPkt *out);
    static DataJSON getCallConfigResult(InboundPkt *in);

    static bool requestCall(OutboundPkt *out, const InputUser &userId, qint32 randomId, const QByteArray &gAHash, const PhoneCallProtocol &protocol);
    static PhonePhoneCall requestCallResult(InboundPkt *in);

    static bool acceptCall(OutboundPkt *out, const InputPhoneCall &peer, const QByteArray &gB, const PhoneCallProtocol &protocol);
    static PhonePhoneCall acceptCallResult(InboundPkt *in);

    static bool confirmCall(OutboundPkt *out, const InputPhoneCall &peer, const QByteArray &gA, qint64 keyFingerprint, const PhoneCallProtocol &protocol);
    static PhonePhoneCall confirmCallResult(InboundPkt *in);

    static bool receivedCall(OutboundPkt *out, const InputPhoneCall &peer);
    static bool receivedCallResult(InboundPkt *in);

    static bool discardCall(OutboundPkt *out, const InputPhoneCall &peer, qint32 duration, const PhoneCallDiscardReason &reason, qint64 connectionId);
    static UpdatesType discardCallResult(InboundPkt *in);

    static bool setCallRating(OutboundPkt *out, const InputPhoneCall &peer, qint32 rating, const QString &comment);
    static UpdatesType setCallRatingResult(InboundPkt *in);

    static bool saveCallDebug(OutboundPkt *out, const InputPhoneCall &peer, const DataJSON &debug);
    static bool saveCallDebugResult(InboundPkt *in);

};

}
}

#endif // LQTG_FNC_PHONE
