#include <org/xml/sax/ContentHandler.h>

#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/Locator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attributes = ::org::xml::sax::Attributes;
using $Locator = ::org::xml::sax::Locator;

namespace org {
	namespace xml {
		namespace sax {

$MethodInfo _ContentHandler_MethodInfo_[] = {
	{"characters", "([CII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentHandler, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"declaration", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ContentHandler, declaration, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentHandler, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentHandler, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
	{"endPrefixMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentHandler, endPrefixMapping, void, $String*), "org.xml.sax.SAXException"},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentHandler, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentHandler, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentHandler, setDocumentLocator, void, $Locator*)},
	{"skippedEntity", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentHandler, skippedEntity, void, $String*), "org.xml.sax.SAXException"},
	{"startDocument", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentHandler, startDocument, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentHandler, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
	{"startPrefixMapping", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentHandler, startPrefixMapping, void, $String*, $String*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _ContentHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.xml.sax.ContentHandler",
	nullptr,
	nullptr,
	nullptr,
	_ContentHandler_MethodInfo_
};

$Object* allocate$ContentHandler($Class* clazz) {
	return $of($alloc(ContentHandler));
}

void ContentHandler::declaration($String* version, $String* encoding, $String* standalone) {
}

$Class* ContentHandler::load$($String* name, bool initialize) {
	$loadClass(ContentHandler, name, initialize, &_ContentHandler_ClassInfo_, allocate$ContentHandler);
	return class$;
}

$Class* ContentHandler::class$ = nullptr;

		} // sax
	} // xml
} // org