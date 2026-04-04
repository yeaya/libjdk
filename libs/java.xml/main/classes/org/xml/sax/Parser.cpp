#include <org/xml/sax/Parser.h>
#include <java/util/Locale.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/DocumentHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/InputSource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Locale = ::java::util::Locale;
using $DTDHandler = ::org::xml::sax::DTDHandler;
using $DocumentHandler = ::org::xml::sax::DocumentHandler;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $ErrorHandler = ::org::xml::sax::ErrorHandler;
using $InputSource = ::org::xml::sax::InputSource;

namespace org {
	namespace xml {
		namespace sax {

$Class* Parser::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"parse", "(Lorg/xml/sax/InputSource;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Parser, parse, void, $InputSource*), "org.xml.sax.SAXException,java.io.IOException"},
		{"parse", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Parser, parse, void, $String*), "org.xml.sax.SAXException,java.io.IOException"},
		{"setDTDHandler", "(Lorg/xml/sax/DTDHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Parser, setDTDHandler, void, $DTDHandler*)},
		{"setDocumentHandler", "(Lorg/xml/sax/DocumentHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Parser, setDocumentHandler, void, $DocumentHandler*)},
		{"setEntityResolver", "(Lorg/xml/sax/EntityResolver;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Parser, setEntityResolver, void, $EntityResolver*)},
		{"setErrorHandler", "(Lorg/xml/sax/ErrorHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Parser, setErrorHandler, void, $ErrorHandler*)},
		{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Parser, setLocale, void, $Locale*), "org.xml.sax.SAXException"},
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
		"org.xml.sax.Parser",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Parser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Parser);
	});
	return class$;
}

$Class* Parser::class$ = nullptr;

		} // sax
	} // xml
} // org