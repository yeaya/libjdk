#include <javax/xml/transform/sax/SAXTransformerFactory.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/Templates.h>
#include <javax/xml/transform/TransformerFactory.h>
#include <javax/xml/transform/sax/TemplatesHandler.h>
#include <javax/xml/transform/sax/TransformerHandler.h>
#include <org/xml/sax/XMLFilter.h>
#include <jcpp.h>

#undef FEATURE
#undef FEATURE_XMLFILTER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Source = ::javax::xml::transform::Source;
using $Templates = ::javax::xml::transform::Templates;
using $TransformerFactory = ::javax::xml::transform::TransformerFactory;
using $TemplatesHandler = ::javax::xml::transform::sax::TemplatesHandler;
using $TransformerHandler = ::javax::xml::transform::sax::TransformerHandler;
using $XMLFilter = ::org::xml::sax::XMLFilter;

namespace javax {
	namespace xml {
		namespace transform {
			namespace sax {

$String* SAXTransformerFactory::FEATURE = nullptr;
$String* SAXTransformerFactory::FEATURE_XMLFILTER = nullptr;

void SAXTransformerFactory::init$() {
	$TransformerFactory::init$();
}

SAXTransformerFactory::SAXTransformerFactory() {
}

void SAXTransformerFactory::clinit$($Class* clazz) {
	$assignStatic(SAXTransformerFactory::FEATURE, "http://javax.xml.transform.sax.SAXTransformerFactory/feature"_s);
	$assignStatic(SAXTransformerFactory::FEATURE_XMLFILTER, "http://javax.xml.transform.sax.SAXTransformerFactory/feature/xmlfilter"_s);
}

$Class* SAXTransformerFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FEATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SAXTransformerFactory, FEATURE)},
		{"FEATURE_XMLFILTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SAXTransformerFactory, FEATURE_XMLFILTER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(SAXTransformerFactory, init$, void)},
		{"newTemplatesHandler", "()Ljavax/xml/transform/sax/TemplatesHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SAXTransformerFactory, newTemplatesHandler, $TemplatesHandler*), "javax.xml.transform.TransformerConfigurationException"},
		{"newTransformerHandler", "(Ljavax/xml/transform/Source;)Ljavax/xml/transform/sax/TransformerHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SAXTransformerFactory, newTransformerHandler, $TransformerHandler*, $Source*), "javax.xml.transform.TransformerConfigurationException"},
		{"newTransformerHandler", "(Ljavax/xml/transform/Templates;)Ljavax/xml/transform/sax/TransformerHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SAXTransformerFactory, newTransformerHandler, $TransformerHandler*, $Templates*), "javax.xml.transform.TransformerConfigurationException"},
		{"newTransformerHandler", "()Ljavax/xml/transform/sax/TransformerHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SAXTransformerFactory, newTransformerHandler, $TransformerHandler*), "javax.xml.transform.TransformerConfigurationException"},
		{"newXMLFilter", "(Ljavax/xml/transform/Source;)Lorg/xml/sax/XMLFilter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SAXTransformerFactory, newXMLFilter, $XMLFilter*, $Source*), "javax.xml.transform.TransformerConfigurationException"},
		{"newXMLFilter", "(Ljavax/xml/transform/Templates;)Lorg/xml/sax/XMLFilter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SAXTransformerFactory, newXMLFilter, $XMLFilter*, $Templates*), "javax.xml.transform.TransformerConfigurationException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.xml.transform.sax.SAXTransformerFactory",
		"javax.xml.transform.TransformerFactory",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SAXTransformerFactory, name, initialize, &classInfo$$, SAXTransformerFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SAXTransformerFactory);
	});
	return class$;
}

$Class* SAXTransformerFactory::class$ = nullptr;

			} // sax
		} // transform
	} // xml
} // javax