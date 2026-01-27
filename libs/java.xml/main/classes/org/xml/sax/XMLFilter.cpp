#include <org/xml/sax/XMLFilter.h>

#include <org/xml/sax/XMLReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLReader = ::org::xml::sax::XMLReader;

namespace org {
	namespace xml {
		namespace sax {

$MethodInfo _XMLFilter_MethodInfo_[] = {
	{"getParent", "()Lorg/xml/sax/XMLReader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLFilter, getParent, $XMLReader*)},
	{"setParent", "(Lorg/xml/sax/XMLReader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLFilter, setParent, void, $XMLReader*)},
	{}
};

$ClassInfo _XMLFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.xml.sax.XMLFilter",
	nullptr,
	"org.xml.sax.XMLReader",
	nullptr,
	_XMLFilter_MethodInfo_
};

$Object* allocate$XMLFilter($Class* clazz) {
	return $of($alloc(XMLFilter));
}

$Class* XMLFilter::load$($String* name, bool initialize) {
	$loadClass(XMLFilter, name, initialize, &_XMLFilter_ClassInfo_, allocate$XMLFilter);
	return class$;
}

$Class* XMLFilter::class$ = nullptr;

		} // sax
	} // xml
} // org