#ifndef _com_sun_org_apache_xml_internal_serialize_SerializerFactory_h_
#define _com_sun_org_apache_xml_internal_serialize_SerializerFactory_h_
//$ class com.sun.org.apache.xml.internal.serialize.SerializerFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {
							class OutputFormat;
							class Serializer;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
		class Writer;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

class SerializerFactory : public ::java::lang::Object {
	$class(SerializerFactory, 0, ::java::lang::Object)
public:
	SerializerFactory();
	void init$();
	static ::com::sun::org::apache::xml::internal::serialize::SerializerFactory* getSerializerFactory($String* method);
	virtual $String* getSupportedMethod() {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::serialize::Serializer* makeSerializer(::com::sun::org::apache::xml::internal::serialize::OutputFormat* format) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::serialize::Serializer* makeSerializer(::java::io::Writer* writer, ::com::sun::org::apache::xml::internal::serialize::OutputFormat* format) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::serialize::Serializer* makeSerializer(::java::io::OutputStream* output, ::com::sun::org::apache::xml::internal::serialize::OutputFormat* format) {return nullptr;}
	static void registerSerializerFactory(::com::sun::org::apache::xml::internal::serialize::SerializerFactory* factory);
	static $String* FactoriesProperty;
	static ::java::util::Map* _factories;
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serialize_SerializerFactory_h_