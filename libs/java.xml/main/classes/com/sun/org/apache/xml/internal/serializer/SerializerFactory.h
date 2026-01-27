#ifndef _com_sun_org_apache_xml_internal_serializer_SerializerFactory_h_
#define _com_sun_org_apache_xml_internal_serializer_SerializerFactory_h_
//$ class com.sun.org.apache.xml.internal.serializer.SerializerFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class Serializer;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Properties;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class SerializerFactory : public ::java::lang::Object {
	$class(SerializerFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SerializerFactory();
	void init$();
	static ::com::sun::org::apache::xml::internal::serializer::Serializer* getSerializer(::java::util::Properties* format);
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_SerializerFactory_h_