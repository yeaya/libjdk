#ifndef _com_sun_org_apache_xerces_internal_util_EncodingMap_h_
#define _com_sun_org_apache_xerces_internal_util_EncodingMap_h_
//$ class com.sun.org.apache.xerces.internal.util.EncodingMap
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class EncodingMap : public ::java::lang::Object {
	$class(EncodingMap, 0, ::java::lang::Object)
public:
	EncodingMap();
	void init$();
	static $String* getIANA2JavaMapping($String* ianaEncoding);
	static $String* getJava2IANAMapping($String* javaEncoding);
	static ::java::util::Map* fIANA2JavaMap;
	static ::java::util::Map* fJava2IANAMap;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_EncodingMap_h_