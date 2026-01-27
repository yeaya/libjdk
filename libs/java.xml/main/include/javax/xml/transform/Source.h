#ifndef _javax_xml_transform_Source_h_
#define _javax_xml_transform_Source_h_
//$ interface javax.xml.transform.Source
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace transform {

class $import Source : public ::java::lang::Object {
	$interface(Source, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getSystemId() {return nullptr;}
	virtual bool isEmpty();
	virtual void setSystemId($String* systemId) {}
};

		} // transform
	} // xml
} // javax

#endif // _javax_xml_transform_Source_h_