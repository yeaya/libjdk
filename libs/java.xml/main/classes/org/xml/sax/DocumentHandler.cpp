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

$Class* DocumentHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
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
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "1.5"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.xml.sax.DocumentHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(DocumentHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocumentHandler);
	});
	return class$;
}

$Class* DocumentHandler::class$ = nullptr;

		} // sax
	} // xml
} // org