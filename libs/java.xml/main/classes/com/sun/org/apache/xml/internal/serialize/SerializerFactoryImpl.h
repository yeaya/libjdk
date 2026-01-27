#ifndef _com_sun_org_apache_xml_internal_serialize_SerializerFactoryImpl_h_
#define _com_sun_org_apache_xml_internal_serialize_SerializerFactoryImpl_h_
//$ class com.sun.org.apache.xml.internal.serialize.SerializerFactoryImpl
//$ extends com.sun.org.apache.xml.internal.serialize.SerializerFactory

#include <com/sun/org/apache/xml/internal/serialize/SerializerFactory.h>

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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

class SerializerFactoryImpl : public ::com::sun::org::apache::xml::internal::serialize::SerializerFactory {
	$class(SerializerFactoryImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::serialize::SerializerFactory)
public:
	SerializerFactoryImpl();
	void init$($String* method);
	::com::sun::org::apache::xml::internal::serialize::Serializer* getSerializer(::com::sun::org::apache::xml::internal::serialize::OutputFormat* format);
	virtual $String* getSupportedMethod() override;
	virtual ::com::sun::org::apache::xml::internal::serialize::Serializer* makeSerializer(::com::sun::org::apache::xml::internal::serialize::OutputFormat* format) override;
	virtual ::com::sun::org::apache::xml::internal::serialize::Serializer* makeSerializer(::java::io::Writer* writer, ::com::sun::org::apache::xml::internal::serialize::OutputFormat* format) override;
	virtual ::com::sun::org::apache::xml::internal::serialize::Serializer* makeSerializer(::java::io::OutputStream* output, ::com::sun::org::apache::xml::internal::serialize::OutputFormat* format) override;
	$String* _method = nullptr;
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serialize_SerializerFactoryImpl_h_