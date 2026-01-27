#include <org/xml/sax/DocumentHandler.h>

#include <org/xml/sax/AttributeList.h>
#include <org/xml/sax/Locator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AttributeList = ::org::xml::sax::AttributeList;
using $Locator = ::org::xml::sax::Locator;

namespace org {
	namespace xml {
		namespace sax {

$NamedAttribute DocumentHandler_Attribute_var$0[] = {
	{"since", 's', "1.5"},
	{}
};

$CompoundAttribute _DocumentHandler_Annotations_[] = {
	{"Ljava/lang/Deprecated;", DocumentHandler_Attribute_var$0},
	{}
};

$MethodInfo _DocumentHandler_MethodInfo_[] = {
	{"characters", "([CII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentHandler, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"endDocument", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentHandler, endDocument, void), "org.xml.sax.SAXException"},
	{"endElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentHandler, endElement, void, $String*), "org.xml.sax.SAXException"},
	{"ignorableWhitespace", "([CII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentHandler, ignorableWhitespace, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
	{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentHandler, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
	{"setDocumentLocator", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentHandler, setDocumentLocator, void, $Locator*)},
	{"startDocument", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentHandler, startDocument, void), "org.xml.sax.SAXException"},
	{"startElement", "(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentHandler, startElement, void, $String*, $AttributeList*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _DocumentHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.xml.sax.DocumentHandler",
	nullptr,
	nullptr,
	nullptr,
	_DocumentHandler_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DocumentHandler_Annotations_
};

$Object* allocate$DocumentHandler($Class* clazz) {
	return $of($alloc(DocumentHandler));
}

$Class* DocumentHandler::load$($String* name, bool initialize) {
	$loadClass(DocumentHandler, name, initialize, &_DocumentHandler_ClassInfo_, allocate$DocumentHandler);
	return class$;
}

$Class* DocumentHandler::class$ = nullptr;

		} // sax
	} // xml
} // org