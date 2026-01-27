#ifndef _com_sun_org_apache_xml_internal_serialize_LineSeparator_h_
#define _com_sun_org_apache_xml_internal_serialize_LineSeparator_h_
//$ class com.sun.org.apache.xml.internal.serialize.LineSeparator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

class LineSeparator : public ::java::lang::Object {
	$class(LineSeparator, 0, ::java::lang::Object)
public:
	LineSeparator();
	void init$();
	static $String* Unix;
	static $String* Windows;
	static $String* Macintosh;
	static $String* Web;
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serialize_LineSeparator_h_