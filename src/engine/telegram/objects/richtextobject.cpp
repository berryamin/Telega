// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "richtextobject.h"

RichTextObject::RichTextObject(const RichText &core, QObject *parent) :
    TelegramTypeQObject(parent),
    m_textRich(0),
    m_core(core)
{
    m_textRich = new RichTextObject(m_core.textRich(), this);
    connect(m_textRich.data(), SIGNAL(coreChanged()), this, SLOT(coreTextRichChanged()));
}

RichTextObject::RichTextObject(QObject *parent) :
    TelegramTypeQObject(parent),
    m_textRich(0),
    m_core()
{
    m_textRich = new RichTextObject(m_core.textRich(), this);
    connect(m_textRich.data(), SIGNAL(coreChanged()), this, SLOT(coreTextRichChanged()));
}

RichTextObject::~RichTextObject() {
}

void RichTextObject::setEmail(const QString &email) {
    if(m_core.email() == email) return;
    m_core.setEmail(email);
    Q_EMIT emailChanged();
    Q_EMIT coreChanged();
}

QString RichTextObject::email() const {
    return m_core.email();
}

void RichTextObject::setTextString(const QString &textString) {
    if(m_core.textString() == textString) return;
    m_core.setTextString(textString);
    Q_EMIT textStringChanged();
    Q_EMIT coreChanged();
}

QString RichTextObject::textString() const {
    return m_core.textString();
}

void RichTextObject::setTextRich(RichTextObject* textRich) {
    if(m_textRich == textRich) return;
    if(m_textRich) delete m_textRich;
    m_textRich = textRich;
    if(m_textRich) {
        m_textRich->setParent(this);
        m_core.setTextRich(m_textRich->core());
        connect(m_textRich.data(), SIGNAL(coreChanged()), this, SLOT(coreTextRichChanged()));
    }
    Q_EMIT textRichChanged();
    Q_EMIT coreChanged();
}

RichTextObject*  RichTextObject::textRich() const {
    return m_textRich;
}

void RichTextObject::setTexts(const QList<RichText> &texts) {
    if(m_core.texts() == texts) return;
    m_core.setTexts(texts);
    Q_EMIT textsChanged();
    Q_EMIT coreChanged();
}

QList<RichText> RichTextObject::texts() const {
    return m_core.texts();
}

void RichTextObject::setUrl(const QString &url) {
    if(m_core.url() == url) return;
    m_core.setUrl(url);
    Q_EMIT urlChanged();
    Q_EMIT coreChanged();
}

QString RichTextObject::url() const {
    return m_core.url();
}

void RichTextObject::setWebpageId(qint64 webpageId) {
    if(m_core.webpageId() == webpageId) return;
    m_core.setWebpageId(webpageId);
    Q_EMIT webpageIdChanged();
    Q_EMIT coreChanged();
}

qint64 RichTextObject::webpageId() const {
    return m_core.webpageId();
}

RichTextObject &RichTextObject::operator =(const RichText &b) {
    if(m_core == b) return *this;
    m_core = b;
    m_textRich->setCore(b.textRich());

    Q_EMIT emailChanged();
    Q_EMIT textStringChanged();
    Q_EMIT textRichChanged();
    Q_EMIT textsChanged();
    Q_EMIT urlChanged();
    Q_EMIT webpageIdChanged();
    Q_EMIT coreChanged();
    return *this;
}

bool RichTextObject::operator ==(const RichText &b) const {
    return m_core == b;
}

void RichTextObject::setClassType(quint32 classType) {
    RichText::RichTextClassType result;
    switch(classType) {
    case TypeTextEmpty:
        result = RichText::typeTextEmpty;
        break;
    case TypeTextPlain:
        result = RichText::typeTextPlain;
        break;
    case TypeTextBold:
        result = RichText::typeTextBold;
        break;
    case TypeTextItalic:
        result = RichText::typeTextItalic;
        break;
    case TypeTextUnderline:
        result = RichText::typeTextUnderline;
        break;
    case TypeTextStrike:
        result = RichText::typeTextStrike;
        break;
    case TypeTextFixed:
        result = RichText::typeTextFixed;
        break;
    case TypeTextUrl:
        result = RichText::typeTextUrl;
        break;
    case TypeTextEmail:
        result = RichText::typeTextEmail;
        break;
    case TypeTextConcat:
        result = RichText::typeTextConcat;
        break;
    default:
        result = RichText::typeTextEmpty;
        break;
    }

    if(m_core.classType() == result) return;
    m_core.setClassType(result);
    Q_EMIT classTypeChanged();
    Q_EMIT coreChanged();
}

quint32 RichTextObject::classType() const {
    int result;
    switch(static_cast<qint64>(m_core.classType())) {
    case RichText::typeTextEmpty:
        result = TypeTextEmpty;
        break;
    case RichText::typeTextPlain:
        result = TypeTextPlain;
        break;
    case RichText::typeTextBold:
        result = TypeTextBold;
        break;
    case RichText::typeTextItalic:
        result = TypeTextItalic;
        break;
    case RichText::typeTextUnderline:
        result = TypeTextUnderline;
        break;
    case RichText::typeTextStrike:
        result = TypeTextStrike;
        break;
    case RichText::typeTextFixed:
        result = TypeTextFixed;
        break;
    case RichText::typeTextUrl:
        result = TypeTextUrl;
        break;
    case RichText::typeTextEmail:
        result = TypeTextEmail;
        break;
    case RichText::typeTextConcat:
        result = TypeTextConcat;
        break;
    default:
        result = TypeTextEmpty;
        break;
    }

    return result;
}

void RichTextObject::setCore(const RichText &core) {
    operator =(core);
}

RichText RichTextObject::core() const {
    return m_core;
}

void RichTextObject::coreTextRichChanged() {
    if(m_core.textRich() == m_textRich->core()) return;
    m_core.setTextRich(m_textRich->core());
    Q_EMIT textRichChanged();
    Q_EMIT coreChanged();
}

