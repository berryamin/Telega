// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "uploadcdnfileobject.h"

UploadCdnFileObject::UploadCdnFileObject(const UploadCdnFile &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_core(core)
{
}

UploadCdnFileObject::UploadCdnFileObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_core()
{
}

UploadCdnFileObject::~UploadCdnFileObject() {
}

void UploadCdnFileObject::setBytes(const QByteArray &bytes) {
    if(m_core.bytes() == bytes) return;
    m_core.setBytes(bytes);
    Q_EMIT bytesChanged();
    Q_EMIT coreChanged();
}

QByteArray UploadCdnFileObject::bytes() const {
    return m_core.bytes();
}

void UploadCdnFileObject::setRequestToken(const QByteArray &requestToken) {
    if(m_core.requestToken() == requestToken) return;
    m_core.setRequestToken(requestToken);
    Q_EMIT requestTokenChanged();
    Q_EMIT coreChanged();
}

QByteArray UploadCdnFileObject::requestToken() const {
    return m_core.requestToken();
}

UploadCdnFileObject &UploadCdnFileObject::operator =(const UploadCdnFile &b) {
    if(m_core == b) return *this;
    m_core = b;

    Q_EMIT bytesChanged();
    Q_EMIT requestTokenChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool UploadCdnFileObject::operator ==(const UploadCdnFile &b) const {
    return m_core == b;
}

void UploadCdnFileObject::setClassType(quint32 classType) {
    UploadCdnFile::UploadCdnFileClassType result;
    switch(classType) {
    case TypeUploadCdnFileReuploadNeeded:
        result = UploadCdnFile::typeUploadCdnFileReuploadNeeded;
        break;
    case TypeUploadCdnFile:
        result = UploadCdnFile::typeUploadCdnFile;
        break;
    default:
        result = UploadCdnFile::typeUploadCdnFileReuploadNeeded;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 UploadCdnFileObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case UploadCdnFile::typeUploadCdnFileReuploadNeeded:
        result = TypeUploadCdnFileReuploadNeeded;
        break;
    case UploadCdnFile::typeUploadCdnFile:
        result = TypeUploadCdnFile;
        break;
    default:
        result = TypeUploadCdnFileReuploadNeeded;
        break;
    }

    return result;
}

void UploadCdnFileObject::setCore(const UploadCdnFile &core) {
    operator =(core);
}

UploadCdnFile UploadCdnFileObject::core() const {
    return m_core;
}

