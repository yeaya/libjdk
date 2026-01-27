#include <com/sun/org/apache/xml/internal/serializer/ToTextStream.h>

#include <com/sun/org/apache/xml/internal/serializer/CharInfo.h>
#include <com/sun/org/apache/xml/internal/serializer/EncodingInfo.h>
#include <com/sun/org/apache/xml/internal/serializer/Encodings.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerBase.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerTrace.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/Messages.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/MsgKey.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/Utils.h>
#include <java/io/IOException.h>
#include <java/io/Writer.h>
#include <javax/xml/transform/ErrorListener.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef ER_ILLEGAL_CHARACTER
#undef S_LINEFEED

using $CharInfo = ::com::sun::org::apache::xml::internal::serializer::CharInfo;
using $EncodingInfo = ::com::sun::org::apache::xml::internal::serializer::EncodingInfo;
using $Encodings = ::com::sun::org::apache::xml::internal::serializer::Encodings;
using $ToStream = ::com::sun::org::apache::xml::internal::serializer::ToStream;
using $Messages = ::com::sun::org::apache::xml::internal::serializer::utils::Messages;
using $MsgKey = ::com::sun::org::apache::xml::internal::serializer::utils::MsgKey;
using $Utils = ::com::sun::org::apache::xml::internal::serializer::utils::Utils;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $Attributes = ::org::xml::sax::Attributes;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$MethodInfo _ToTextStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ToTextStream, init$, void)},
	{"<init>", "(Ljavax/xml/transform/ErrorListener;)V", nullptr, $PUBLIC, $method(ToTextStream, init$, void, $ErrorListener*)},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, addAttribute, void, $String*, $String*, $String*, $String*, $String*, bool)},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, addAttribute, void, $String*, $String*)},
	{"addUniqueAttribute", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, addUniqueAttribute, void, $String*, $String*, int32_t), "org.xml.sax.SAXException"},
	{"cdata", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, cdata, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"characters", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"characters", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, characters, void, $String*), "org.xml.sax.SAXException"},
	{"charactersRaw", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, charactersRaw, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"comment", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, comment, void, $String*), "org.xml.sax.SAXException"},
	{"comment", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, comment, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"endCDATA", "()V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, endCDATA, void), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, endElement, void, $String*), "org.xml.sax.SAXException"},
	{"entityReference", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, entityReference, void, $String*), "org.xml.sax.SAXException"},
	{"flushPending", "()V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, flushPending, void), "org.xml.sax.SAXException"},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"namespaceAfterStartElement", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, namespaceAfterStartElement, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"startDocumentInternal", "()V", nullptr, $PROTECTED, $virtualMethod(ToTextStream, startDocumentInternal, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, startElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;Z)Z", nullptr, $PUBLIC, $virtualMethod(ToTextStream, startPrefixMapping, bool, $String*, $String*, bool), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToTextStream, startPrefixMapping, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"writeNormalizedChars", "([CIIZ)V", nullptr, 0, $method(ToTextStream, writeNormalizedChars, void, $chars*, int32_t, int32_t, bool), "java.io.IOException,org.xml.sax.SAXException"},
	{}
};

$ClassInfo _ToTextStream_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.ToTextStream",
	"com.sun.org.apache.xml.internal.serializer.ToStream",
	nullptr,
	nullptr,
	_ToTextStream_MethodInfo_
};

$Object* allocate$ToTextStream($Class* clazz) {
	return $of($alloc(ToTextStream));
}

void ToTextStream::init$() {
	ToTextStream::init$(nullptr);
}

void ToTextStream::init$($ErrorListener* l) {
	$ToStream::init$(l);
}

void ToTextStream::startDocumentInternal() {
	$ToStream::startDocumentInternal();
	this->m_needToCallStartDocument = false;
}

void ToTextStream::endDocument() {
	flushPending();
	flushWriter();
	if (this->m_tracer != nullptr) {
		$ToStream::fireEndDoc();
	}
}

void ToTextStream::startElement($String* namespaceURI, $String* localName, $String* name, $Attributes* atts) {
	if (this->m_tracer != nullptr) {
		$ToStream::fireStartElem(name);
		this->firePseudoAttributes();
	}
	return;
}

void ToTextStream::endElement($String* namespaceURI, $String* localName, $String* name) {
	if (this->m_tracer != nullptr) {
		$ToStream::fireEndElem(name);
	}
}

void ToTextStream::characters($chars* ch, int32_t start, int32_t length) {
	flushPending();
	try {
		if (inTemporaryOutputState()) {
			$nc(this->m_writer)->write(ch, start, length);
		} else {
			writeNormalizedChars(ch, start, length, this->m_lineSepUse);
		}
		if (this->m_tracer != nullptr) {
			$ToStream::fireCharEvent(ch, start, length);
		}
	} catch ($IOException& ioe) {
		$throwNew($SAXException, static_cast<$Exception*>(ioe));
	}
}

void ToTextStream::charactersRaw($chars* ch, int32_t start, int32_t length) {
	try {
		writeNormalizedChars(ch, start, length, this->m_lineSepUse);
	} catch ($IOException& ioe) {
		$throwNew($SAXException, static_cast<$Exception*>(ioe));
	}
}

void ToTextStream::writeNormalizedChars($chars* ch, int32_t start, int32_t length, bool useLineSep) {
	$useLocalCurrentObjectStackCache();
	$var($String, encoding, getEncoding());
	$var($Writer, writer, this->m_writer);
	int32_t end = start + length;
	char16_t S_LINEFEED = $CharInfo::S_LINEFEED;
	for (int32_t i = start; i < end; ++i) {
		char16_t c = $nc(ch)->get(i);
		if (S_LINEFEED == c && useLineSep) {
			$nc(writer)->write(this->m_lineSep, 0, this->m_lineSepLen);
		} else if ($nc(this->m_encodingInfo)->isInEncoding(c)) {
			$nc(writer)->write((int32_t)c);
		} else {
			bool var$1 = $Encodings::isHighUTF16Surrogate(c);
			if (var$1 || $Encodings::isLowUTF16Surrogate(c)) {
				int32_t codePoint = writeUTF16Surrogate(c, ch, i, end);
				if (codePoint >= 0) {
					if ($Encodings::isHighUTF16Surrogate(c)) {
						++i;
					}
					if (codePoint > 0) {
						$var($String, integralValue, $Integer::toString(codePoint));
						$init($Utils);
						$init($MsgKey);
						$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_ILLEGAL_CHARACTER, $$new($ObjectArray, {
							$of(integralValue),
							$of(encoding)
						})));
						$nc($System::err)->println(msg);
					}
				}
			} else if (encoding != nullptr) {
				$nc(writer)->write((int32_t)u'&');
				writer->write((int32_t)u'#');
				writer->write($($Integer::toString(c)));
				writer->write((int32_t)u';');
				$var($String, integralValue, $Integer::toString(c));
				$init($Utils);
				$init($MsgKey);
				$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_ILLEGAL_CHARACTER, $$new($ObjectArray, {
					$of(integralValue),
					$of(encoding)
				})));
				$nc($System::err)->println(msg);
			} else {
				$nc(writer)->write((int32_t)c);
			}
		}
	}
}

void ToTextStream::cdata($chars* ch, int32_t start, int32_t length) {
	try {
		writeNormalizedChars(ch, start, length, this->m_lineSepUse);
		if (this->m_tracer != nullptr) {
			$ToStream::fireCDATAEvent(ch, start, length);
		}
	} catch ($IOException& ioe) {
		$throwNew($SAXException, static_cast<$Exception*>(ioe));
	}
}

void ToTextStream::ignorableWhitespace($chars* ch, int32_t start, int32_t length) {
	try {
		writeNormalizedChars(ch, start, length, this->m_lineSepUse);
	} catch ($IOException& ioe) {
		$throwNew($SAXException, static_cast<$Exception*>(ioe));
	}
}

void ToTextStream::processingInstruction($String* target, $String* data) {
	flushPending();
	if (this->m_tracer != nullptr) {
		$ToStream::fireEscapingEvent(target, data);
	}
}

void ToTextStream::comment($String* data) {
	int32_t length = $nc(data)->length();
	if (length > $nc(this->m_charsBuff)->length) {
		$set(this, m_charsBuff, $new($chars, length * 2 + 1));
	}
	data->getChars(0, length, this->m_charsBuff, 0);
	comment(this->m_charsBuff, 0, length);
}

void ToTextStream::comment($chars* ch, int32_t start, int32_t length) {
	flushPending();
	if (this->m_tracer != nullptr) {
		$ToStream::fireCommentEvent(ch, start, length);
	}
}

void ToTextStream::entityReference($String* name) {
	if (this->m_tracer != nullptr) {
		$ToStream::fireEntityReference(name);
	}
}

void ToTextStream::addAttribute($String* uri, $String* localName, $String* rawName, $String* type, $String* value, bool XSLAttribute) {
}

void ToTextStream::endCDATA() {
}

void ToTextStream::endElement($String* elemName) {
	if (this->m_tracer != nullptr) {
		$ToStream::fireEndElem(elemName);
	}
}

void ToTextStream::startElement($String* elementNamespaceURI, $String* elementLocalName, $String* elementName) {
	if (this->m_needToCallStartDocument) {
		startDocumentInternal();
	}
	if (this->m_tracer != nullptr) {
		$ToStream::fireStartElem(elementName);
		this->firePseudoAttributes();
	}
	return;
}

void ToTextStream::characters($String* characters) {
	int32_t length = $nc(characters)->length();
	if (length > $nc(this->m_charsBuff)->length) {
		$set(this, m_charsBuff, $new($chars, length * 2 + 1));
	}
	characters->getChars(0, length, this->m_charsBuff, 0);
	this->characters(this->m_charsBuff, 0, length);
}

void ToTextStream::addAttribute($String* name, $String* value) {
}

void ToTextStream::addUniqueAttribute($String* qName, $String* value, int32_t flags) {
}

bool ToTextStream::startPrefixMapping($String* prefix, $String* uri, bool shouldFlush) {
	return false;
}

void ToTextStream::startPrefixMapping($String* prefix, $String* uri) {
}

void ToTextStream::namespaceAfterStartElement($String* prefix, $String* uri) {
}

void ToTextStream::flushPending() {
	if (this->m_needToCallStartDocument) {
		startDocumentInternal();
		this->m_needToCallStartDocument = false;
	}
}

ToTextStream::ToTextStream() {
}

$Class* ToTextStream::load$($String* name, bool initialize) {
	$loadClass(ToTextStream, name, initialize, &_ToTextStream_ClassInfo_, allocate$ToTextStream);
	return class$;
}

$Class* ToTextStream::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com