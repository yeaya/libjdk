#ifndef _javax_xml_transform_SourceLocator_h_
#define _javax_xml_transform_SourceLocator_h_
//$ interface javax.xml.transform.SourceLocator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace transform {

class $import SourceLocator : public ::java::lang::Object {
	$interface(SourceLocator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getColumnNumber() {return 0;}
	virtual int32_t getLineNumber() {return 0;}
	virtual $String* getPublicId() {return nullptr;}
	virtual $String* getSystemId() {return nullptr;}
};

		} // transform
	} // xml
} // javax

#endif // _javax_xml_transform_SourceLocator_h_