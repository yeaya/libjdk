#include <com/sun/org/apache/xml/internal/serializer/ToXMLStream.h>

#include <com/sun/org/apache/xml/internal/serializer/CharInfo.h>
#include <com/sun/org/apache/xml/internal/serializer/ElemContext.h>
#include <com/sun/org/apache/xml/internal/serializer/EncodingInfo.h>
#include <com/sun/org/apache/xml/internal/serializer/Encodings.h>
#include <com/sun/org/apache/xml/internal/serializer/ExtendedContentHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/Method.h>
#include <com/sun/org/apache/xml/internal/serializer/NamespaceMappings.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerBase.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerConstants.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerTrace.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream$BoolStack.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream$CharacterBuffer.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/Messages.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/MsgKey.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/Utils.h>
#include <java/io/IOException.h>
#include <java/io/Writer.h>
#include <java/util/List.h>
#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/Result.h>
#include <javax/xml/transform/SourceLocator.h>
#include <javax/xml/transform/Transformer.h>
#include <javax/xml/transform/TransformerException.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef EMPTYSTRING
#undef ER_ILLEGAL_ATTRIBUTE_POSITION
#undef ER_XML_VERSION_NOT_SUPPORTED
#undef NO_BAD_CHARS
#undef PI_DISABLE_OUTPUT_ESCAPING
#undef PI_ENABLE_OUTPUT_ESCAPING
#undef XML
#undef XMLVERSION10
#undef XMLVERSION11
#undef XML_ENTITIES_RESOURCE

using $CharInfo = ::com::sun::org::apache::xml::internal::serializer::CharInfo;
using $Encodings = ::com::sun::org::apache::xml::internal::serializer::Encodings;
using $ExtendedContentHandler = ::com::sun::org::apache::xml::internal::serializer::ExtendedContentHandler;
using $Method = ::com::sun::org::apache::xml::internal::serializer::Method;
using $NamespaceMappings = ::com::sun::org::apache::xml::internal::serializer::NamespaceMappings;
using $SerializerConstants = ::com::sun::org::apache::xml::internal::serializer::SerializerConstants;
using $ToStream = ::com::sun::org::apache::xml::internal::serializer::ToStream;
using $Messages = ::com::sun::org::apache::xml::internal::serializer::utils::Messages;
using $MsgKey = ::com::sun::org::apache::xml::internal::serializer::utils::MsgKey;
using $Utils = ::com::sun::org::apache::xml::internal::serializer::utils::Utils;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $Writer = ::java::io::Writer;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $Result = ::javax::xml::transform::Result;
using $Transformer = ::javax::xml::transform::Transformer;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _ToXMLStream_FieldInfo_[] = {
	{"m_cdataTagOpen", "Z", nullptr, 0, $field(ToXMLStream, m_cdataTagOpen)},
	{"m_xmlcharInfo", "Lcom/sun/org/apache/xml/internal/serializer/CharInfo;", nullptr, $PRIVATE | $STATIC, $staticField(ToXMLStream, m_xmlcharInfo)},
	{}
};

$MethodInfo _ToXMLStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ToXMLStream, init$, void)},
	{"<init>", "(Ljavax/xml/transform/ErrorListener;)V", nullptr, $PUBLIC, $method(ToXMLStream, init$, void, $ErrorListener*)},
	{"CopyFrom", "(Lcom/sun/org/apache/xml/internal/serializer/ToXMLStream;)V", nullptr, $PUBLIC, $method(ToXMLStream, CopyFrom, void, ToXMLStream*)},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(ToXMLStream, addAttribute, void, $String*, $String*, $String*, $String*, $String*, bool), "org.xml.sax.SAXException"},
	{"addUniqueAttribute", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(ToXMLStream, addUniqueAttribute, void, $String*, $String*, int32_t), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC, $virtualMethod(ToXMLStream, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLStream, endElement, void, $String*), "org.xml.sax.SAXException"},
	{"endPreserving", "()V", nullptr, $PUBLIC, $method(ToXMLStream, endPreserving, void), "org.xml.sax.SAXException"},
	{"entityReference", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLStream, entityReference, void, $String*), "org.xml.sax.SAXException"},
	{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(ToXMLStream, getXMLVersion, $String*)},
	{"namespaceAfterStartElement", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLStream, namespaceAfterStartElement, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToXMLStream, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"pushNamespace", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PROTECTED, $method(ToXMLStream, pushNamespace, bool, $String*, $String*)},
	{"reset", "()Z", nullptr, $PUBLIC, $virtualMethod(ToXMLStream, reset, bool)},
	{"resetToXMLStream", "()V", nullptr, $PRIVATE, $method(ToXMLStream, resetToXMLStream, void)},
	{"startDocumentInternal", "()V", nullptr, $PUBLIC, $virtualMethod(ToXMLStream, startDocumentInternal, void), "org.xml.sax.SAXException"},
	{"startPreserving", "()V", nullptr, $PUBLIC, $method(ToXMLStream, startPreserving, void), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _ToXMLStream_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.ToXMLStream",
	"com.sun.org.apache.xml.internal.serializer.ToStream",
	nullptr,
	_ToXMLStream_FieldInfo_,
	_ToXMLStream_MethodInfo_
};

$Object* allocate$ToXMLStream($Class* clazz) {
	return $of($alloc(ToXMLStream));
}

$CharInfo* ToXMLStream::m_xmlcharInfo = nullptr;

void ToXMLStream::init$() {
	ToXMLStream::init$(nullptr);
}

void ToXMLStream::init$($ErrorListener* l) {
	$ToStream::init$(l);
	this->m_cdataTagOpen = false;
	$set(this, m_charInfo, ToXMLStream::m_xmlcharInfo);
	initCDATA();
	$set(this, m_prefixMap, $new($NamespaceMappings));
}

void ToXMLStream::CopyFrom(ToXMLStream* xmlListener) {
	$useLocalCurrentObjectStackCache();
	$set(this, m_writer, $nc(xmlListener)->m_writer);
	$var($String, encoding, xmlListener->getEncoding());
	setEncoding(encoding);
	setOmitXMLDeclaration(xmlListener->getOmitXMLDeclaration());
	this->m_ispreserveSpace = xmlListener->m_ispreserveSpace;
	$set(this, m_preserveSpaces, xmlListener->m_preserveSpaces);
	this->m_childNodeNum = xmlListener->m_childNodeNum;
	$set(this, m_childNodeNumStack, xmlListener->m_childNodeNumStack);
	$set(this, m_charactersBuffer, xmlListener->m_charactersBuffer);
	this->m_inEntityRef = xmlListener->m_inEntityRef;
	this->m_isprevtext = xmlListener->m_isprevtext;
	this->m_doIndent = xmlListener->m_doIndent;
	setIndentAmount(xmlListener->getIndentAmount());
	this->m_startNewLine = xmlListener->m_startNewLine;
	this->m_needToOutputDocTypeDecl = xmlListener->m_needToOutputDocTypeDecl;
	setDoctypeSystem($(xmlListener->getDoctypeSystem()));
	setDoctypePublic($(xmlListener->getDoctypePublic()));
	setStandalone($(xmlListener->getStandalone()));
	setMediaType($(xmlListener->getMediaType()));
	this->m_maxCharacter = xmlListener->m_maxCharacter;
	$set(this, m_encodingInfo, xmlListener->m_encodingInfo);
	this->m_spaceBeforeClose = xmlListener->m_spaceBeforeClose;
	this->m_cdataStartCalled = xmlListener->m_cdataStartCalled;
}

void ToXMLStream::startDocumentInternal() {
	$useLocalCurrentObjectStackCache();
	if (this->m_needToCallStartDocument) {
		$ToStream::startDocumentInternal();
		this->m_needToCallStartDocument = false;
		if (isInEntityRef()) {
			return;
		}
		this->m_needToOutputDocTypeDecl = true;
		this->m_startNewLine = false;
		if (getOmitXMLDeclaration() == false) {
			$var($String, encoding, $Encodings::getMimeEncoding($(getEncoding())));
			$var($String, version, getVersion());
			if (version == nullptr) {
				$assign(version, "1.0"_s);
			}
			$var($String, standalone, nullptr);
			if (this->m_standaloneWasSpecified) {
				$assign(standalone, $str({" standalone=\""_s, $(getStandalone()), "\""_s}));
			} else {
				$assign(standalone, ""_s);
			}
			try {
				$var($Writer, writer, this->m_writer);
				$nc(writer)->write("<?xml version=\""_s);
				writer->write(version);
				writer->write("\" encoding=\""_s);
				writer->write(encoding);
				writer->write((int32_t)u'\"');
				writer->write(standalone);
				writer->write("?>"_s);
				if (this->m_doIndent || this->m_isStandalone) {
					bool var$0 = this->m_standaloneWasSpecified || getDoctypePublic() != nullptr;
					if (var$0 || getDoctypeSystem() != nullptr || this->m_isStandalone) {
						writer->write(this->m_lineSep, 0, this->m_lineSepLen);
					}
				}
			} catch ($IOException& e) {
				$throwNew($SAXException, static_cast<$Exception*>(e));
			}
		}
	}
}

void ToXMLStream::endDocument() {
	if (this->m_doIndent) {
		flushCharactersBuffer(false);
	}
	flushPending();
	if (this->m_doIndent && !this->m_isprevtext) {
		try {
			outputLineSep();
		} catch ($IOException& e) {
			$throwNew($SAXException, static_cast<$Exception*>(e));
		}
	}
	flushWriter();
	if (this->m_tracer != nullptr) {
		$ToStream::fireEndDoc();
	}
}

void ToXMLStream::startPreserving() {
}

void ToXMLStream::endPreserving() {
}

void ToXMLStream::processingInstruction($String* target, $String* data) {
	$useLocalCurrentObjectStackCache();
	if (isInEntityRef()) {
		return;
	}
	if (this->m_doIndent) {
		++this->m_childNodeNum;
		flushCharactersBuffer(false);
	}
	flushPending();
	$init($Result);
	if ($nc(target)->equals($Result::PI_DISABLE_OUTPUT_ESCAPING)) {
		startNonEscaping();
	} else {
		if (target->equals($Result::PI_ENABLE_OUTPUT_ESCAPING)) {
			endNonEscaping();
		} else {
			try {
				if ($nc(this->m_elemContext)->m_startTagOpen) {
					closeStartTag();
					$nc(this->m_elemContext)->m_startTagOpen = false;
				} else if (this->m_needToCallStartDocument) {
					startDocumentInternal();
				}
				if (shouldIndent()) {
					indent();
				}
				$var($Writer, writer, this->m_writer);
				$nc(writer)->write("<?"_s);
				writer->write(target);
				bool var$0 = $nc(data)->length() > 0;
				if (var$0 && !$Character::isSpaceChar(data->charAt(0))) {
					writer->write((int32_t)u' ');
				}
				int32_t indexOfQLT = $nc(data)->indexOf("?>"_s);
				if (indexOfQLT >= 0) {
					if (indexOfQLT > 0) {
						writer->write($(data->substring(0, indexOfQLT)));
					}
					writer->write("? >"_s);
					if ((indexOfQLT + 2) < data->length()) {
						writer->write($(data->substring(indexOfQLT + 2)));
					}
				} else {
					writer->write(data);
				}
				writer->write((int32_t)u'?');
				writer->write((int32_t)u'>');
				if ($nc(this->m_elemContext)->m_currentElemDepth <= 0 && this->m_isStandalone) {
					writer->write(this->m_lineSep, 0, this->m_lineSepLen);
				}
				this->m_startNewLine = true;
			} catch ($IOException& e) {
				$throwNew($SAXException, static_cast<$Exception*>(e));
			}
		}
	}
	if (this->m_tracer != nullptr) {
		$ToStream::fireEscapingEvent(target, data);
	}
}

void ToXMLStream::entityReference($String* name) {
	if ($nc(this->m_elemContext)->m_startTagOpen) {
		closeStartTag();
		$nc(this->m_elemContext)->m_startTagOpen = false;
	}
	try {
		if (shouldIndent()) {
			indent();
		}
		$var($Writer, writer, this->m_writer);
		$nc(writer)->write((int32_t)u'&');
		writer->write(name);
		writer->write((int32_t)u';');
	} catch ($IOException& e) {
		$throwNew($SAXException, static_cast<$Exception*>(e));
	}
	if (this->m_tracer != nullptr) {
		$ToStream::fireEntityReference(name);
	}
}

void ToXMLStream::addUniqueAttribute($String* name, $String* value, int32_t flags) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->m_elemContext)->m_startTagOpen) {
		try {
			$var($String, patchedName, patchName(name));
			$var($Writer, writer, this->m_writer);
			if (((int32_t)(flags & (uint32_t)$ExtendedContentHandler::NO_BAD_CHARS)) > 0 && $nc(ToXMLStream::m_xmlcharInfo)->onlyQuotAmpLtGt) {
				$nc(writer)->write((int32_t)u' ');
				writer->write(patchedName);
				writer->write("=\""_s);
				writer->write(value);
				writer->write((int32_t)u'\"');
			} else {
				$nc(writer)->write((int32_t)u' ');
				writer->write(patchedName);
				writer->write("=\""_s);
				writeAttrString(writer, value, $(this->getEncoding()));
				writer->write((int32_t)u'\"');
			}
		} catch ($IOException& e) {
			$throwNew($SAXException, static_cast<$Exception*>(e));
		}
	}
}

void ToXMLStream::addAttribute($String* uri, $String* localName, $String* rawName$renamed, $String* type, $String* value, bool xslAttribute) {
	$useLocalCurrentObjectStackCache();
	$var($String, rawName, rawName$renamed);
	if ($nc(this->m_elemContext)->m_startTagOpen) {
		bool was_added = addAttributeAlways(uri, localName, rawName, type, value, xslAttribute);
		if (was_added && !xslAttribute && !$nc(rawName)->startsWith("xmlns"_s)) {
			$var($String, prefixUsed, ensureAttributesNamespaceIsDeclared(uri, localName, rawName));
			if (prefixUsed != nullptr && rawName != nullptr && !rawName->startsWith(prefixUsed)) {
				$assign(rawName, $str({prefixUsed, ":"_s, localName}));
			}
		}
		addAttributeAlways(uri, localName, rawName, type, value, xslAttribute);
	} else {
		$init($Utils);
		$init($MsgKey);
		$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_ILLEGAL_ATTRIBUTE_POSITION, $$new($ObjectArray, {$of(localName)})));
		try {
			$var($Transformer, tran, $ToStream::getTransformer());
			$var($ErrorListener, errHandler, $nc(tran)->getErrorListener());
			if (nullptr != errHandler && this->m_sourceLocator != nullptr) {
				errHandler->warning($$new($TransformerException, msg, this->m_sourceLocator));
			} else {
				$nc($System::out)->println(msg);
			}
		} catch ($Exception& e) {
		}
	}
}

void ToXMLStream::endElement($String* elemName) {
	endElement(nullptr, nullptr, elemName);
}

void ToXMLStream::namespaceAfterStartElement($String* prefix, $String* uri) {
	if ($nc(this->m_elemContext)->m_elementURI == nullptr) {
		$var($String, prefix1, getPrefixPart($nc(this->m_elemContext)->m_elementName));
		$init($SerializerConstants);
		if (prefix1 == nullptr && $nc($SerializerConstants::EMPTYSTRING)->equals(prefix)) {
			$set($nc(this->m_elemContext), m_elementURI, uri);
		}
	}
	startPrefixMapping(prefix, uri, false);
	return;
}

bool ToXMLStream::pushNamespace($String* prefix, $String* uri) {
	try {
		if ($nc(this->m_prefixMap)->pushNamespace(prefix, uri, $nc(this->m_elemContext)->m_currentElemDepth)) {
			startPrefixMapping(prefix, uri);
			return true;
		}
	} catch ($SAXException& e) {
	}
	return false;
}

bool ToXMLStream::reset() {
	bool wasReset = false;
	if ($ToStream::reset()) {
		resetToXMLStream();
		wasReset = true;
	}
	return wasReset;
}

void ToXMLStream::resetToXMLStream() {
	this->m_cdataTagOpen = false;
}

$String* ToXMLStream::getXMLVersion() {
	$useLocalCurrentObjectStackCache();
	$var($String, xmlVersion, getVersion());
	$init($SerializerConstants);
	if (xmlVersion == nullptr || $nc(xmlVersion)->equals($SerializerConstants::XMLVERSION10)) {
		$assign(xmlVersion, $SerializerConstants::XMLVERSION10);
	} else {
		if (xmlVersion->equals($SerializerConstants::XMLVERSION11)) {
			$assign(xmlVersion, $SerializerConstants::XMLVERSION11);
		} else {
			$init($Utils);
			$init($MsgKey);
			$var($String, msg, $nc($Utils::messages)->createMessage($MsgKey::ER_XML_VERSION_NOT_SUPPORTED, $$new($ObjectArray, {$of(xmlVersion)})));
			try {
				$var($Transformer, tran, $ToStream::getTransformer());
				$var($ErrorListener, errHandler, $nc(tran)->getErrorListener());
				if (nullptr != errHandler && this->m_sourceLocator != nullptr) {
					errHandler->warning($$new($TransformerException, msg, this->m_sourceLocator));
				} else {
					$nc($System::out)->println(msg);
				}
			} catch ($Exception& e) {
			}
			$assign(xmlVersion, $SerializerConstants::XMLVERSION10);
		}
	}
	return xmlVersion;
}

void clinit$ToXMLStream($Class* class$) {
	$init($CharInfo);
	$init($Method);
	$assignStatic(ToXMLStream::m_xmlcharInfo, $CharInfo::getCharInfoInternal($CharInfo::XML_ENTITIES_RESOURCE, $Method::XML));
}

ToXMLStream::ToXMLStream() {
}

$Class* ToXMLStream::load$($String* name, bool initialize) {
	$loadClass(ToXMLStream, name, initialize, &_ToXMLStream_ClassInfo_, clinit$ToXMLStream, allocate$ToXMLStream);
	return class$;
}

$Class* ToXMLStream::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com