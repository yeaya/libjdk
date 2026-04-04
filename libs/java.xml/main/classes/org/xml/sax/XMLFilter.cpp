#include <org/xml/sax/XMLFilter.h>
#include <org/xml/sax/XMLReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLReader = ::org::xml::sax::XMLReader;

namespace org {
	namespace xml {
		namespace sax {

$Class* XMLFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getParent", "()Lorg/xml/sax/XMLReader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLFilter, getParent, $XMLReader*)},
		{"setParent", "(Lorg/xml/sax/XMLReader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLFilter, setParent, void, $XMLReader*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.xml.sax.XMLFilter",
		nullptr,
		"org.xml.sax.XMLReader",
		nullptr,
		methodInfos$$
	};
	$loadClass(XMLFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLFilter);
	});
	return class$;
}

$Class* XMLFilter::class$ = nullptr;

		} // sax
	} // xml
} // org