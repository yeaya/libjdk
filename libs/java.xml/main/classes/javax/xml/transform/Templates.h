#ifndef _javax_xml_transform_Templates_h_
#define _javax_xml_transform_Templates_h_
//$ interface javax.xml.transform.Templates
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Properties;
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class Transformer;
		}
	}
}

namespace javax {
	namespace xml {
		namespace transform {

class $export Templates : public ::java::lang::Object {
	$interface(Templates, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::Properties* getOutputProperties() {return nullptr;}
	virtual ::javax::xml::transform::Transformer* newTransformer() {return nullptr;}
};

		} // transform
	} // xml
} // javax

#endif // _javax_xml_transform_Templates_h_