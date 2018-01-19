// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "nearestdc.h"
#include "core/inboundpkt.h"
#include "core/outboundpkt.h"
#include "../coretypes.h"

#include <QDataStream>

NearestDc::NearestDc(NearestDcClassType classType, InboundPkt *in) :
    m_nearestDc(0),
    m_thisDc(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

NearestDc::NearestDc(InboundPkt *in) :
    m_nearestDc(0),
    m_thisDc(0),
    m_classType(typeNearestDc)
{
    fetch(in);
}

NearestDc::NearestDc(const NearestDc &another) :
    TelegramTypeObject(),
    m_nearestDc(0),
    m_thisDc(0),
    m_classType(typeNearestDc)
{
    operator=(another);
}

NearestDc::NearestDc(const Null &null) :
    TelegramTypeObject(null),
    m_nearestDc(0),
    m_thisDc(0),
    m_classType(typeNearestDc)
{
}

NearestDc::~NearestDc() {

}

void NearestDc::setCountry(const QString &country) {
    m_country = country;
}

QString NearestDc::country() const {
    return m_country;
}

void NearestDc::setNearestDc(qint32 nearestDc) {
    m_nearestDc = nearestDc;
}

qint32 NearestDc::nearestDc() const {
    return m_nearestDc;
}

void NearestDc::setThisDc(qint32 thisDc) {
    m_thisDc = thisDc;
}

qint32 NearestDc::thisDc() const {
    return m_thisDc;
}

bool NearestDc::operator ==(const NearestDc &b) const {
    return m_classType == b.m_classType &&
           m_country == b.m_country &&
           m_nearestDc == b.m_nearestDc &&
           m_thisDc == b.m_thisDc;
}

NearestDc &NearestDc::operator =(const NearestDc &b) {
    m_classType = b.m_classType;
    m_country = b.m_country;
    m_nearestDc = b.m_nearestDc;
    m_thisDc = b.m_thisDc;
    setNull(b.isNull());
    return *this;
}

void NearestDc::setClassType(NearestDc::NearestDcClassType classType) {
    m_classType = classType;
}

NearestDc::NearestDcClassType NearestDc::classType() const {
    return m_classType;
}

bool NearestDc::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeNearestDc: {
        m_country = in->fetchQString();
        m_thisDc = in->fetchInt();
        m_nearestDc = in->fetchInt();
        m_classType = static_cast<NearestDcClassType>(x);
        return true;
    }
        break;

    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool NearestDc::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeNearestDc: {
        out->appendQString(m_country);
        out->appendInt(m_thisDc);
        out->appendInt(m_nearestDc);
        return true;
    }
        break;

    default:
        return false;
    }
}

QMap<QString, QVariant> NearestDc::toMap() const {
    QMap<QString, QVariant> result;
    switch(static_cast<int>(m_classType)) {
    case typeNearestDc: {
        result["classType"] = "NearestDc::typeNearestDc";
        if( !m_country.isEmpty() ) result["country"] = QVariant::fromValue<QString>(m_country);
        if( thisDc() ) result["thisDc"] = QString::number(thisDc());
        if( nearestDc() ) result["nearestDc"] = QString::number(nearestDc());
        return result;
    }
        break;

    default:
        return result;
    }
}

NearestDc NearestDc::fromMap(const QMap<QString, QVariant> &map) {
    NearestDc result;
    if(map.value("classType").toString() == "NearestDc::typeNearestDc") {
        result.setClassType(typeNearestDc);
        QVariant _country_var = map.value("country");
        if( !_country_var.isNull() ) {
            _country_var.convert( QVariant::nameToType("QString") );
            result.setCountry( _country_var.value<QString>() );
        }

        QVariant _thisDc_var = map.value("thisDc");
        if( !_thisDc_var.isNull() ) {
            _thisDc_var.convert( QVariant::nameToType("qint32") );
            result.setThisDc( _thisDc_var.value<qint32>() );
        }

        QVariant _nearestDc_var = map.value("nearestDc");
        if( !_nearestDc_var.isNull() ) {
            _nearestDc_var.convert( QVariant::nameToType("qint32") );
            result.setNearestDc( _nearestDc_var.value<qint32>() );
        }

        return result;
    }
    return result;
}

NearestDc NearestDc::fromJson(const QString &json) {
    return NearestDc::fromMap(QJsonDocument::fromJson(json.toUtf8()).toVariant().toMap());
}

QByteArray NearestDc::getHash(QCryptographicHash::Algorithm alg) const {
    QByteArray data;
    QDataStream str(&data, QIODevice::WriteOnly);
    str << *this;
    return QCryptographicHash::hash(data, alg);
}

QDataStream &operator<<(QDataStream &stream, const NearestDc &item) {
    stream << static_cast<uint>(item.classType());
    switch(item.classType()) {
    case NearestDc::typeNearestDc:
        stream << item.country();
        stream << item.thisDc();
        stream << item.nearestDc();
        break;
    }
    return stream;
}

QDataStream &operator>>(QDataStream &stream, NearestDc &item) {
    uint type = 0;
    stream >> type;
    item.setClassType(static_cast<NearestDc::NearestDcClassType>(type));
    switch(type) {
    case NearestDc::typeNearestDc: {
        QString m_country;
        stream >> m_country;
        item.setCountry(m_country);
        qint32 m_this_dc;
        stream >> m_this_dc;
        item.setThisDc(m_this_dc);
        qint32 m_nearest_dc;
        stream >> m_nearest_dc;
        item.setNearestDc(m_nearest_dc);
    }
        break;
    }
    return stream;
}

/*QDebug operator<<(QDebug debug,  const NearestDc &item) {
    QDebugStateSaver saver(debug);
    Q_UNUSED(saver)
    debug.nospace() << "Telegram.NearestDc(";
    switch(item.classType()) {
    case NearestDc::typeNearestDc:
        debug.nospace() << "classType: typeNearestDc";
        debug.nospace() << ", country: " << item.country();
        debug.nospace() << ", thisDc: " << item.thisDc();
        debug.nospace() << ", nearestDc: " << item.nearestDc();
        break;
    }
    debug.nospace() << ")";
    return debug;
}
*/
