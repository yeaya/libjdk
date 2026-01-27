#ifndef _com_sun_org_apache_xml_internal_serializer_NamespaceMappings$MappingRecord_h_
#define _com_sun_org_apache_xml_internal_serializer_NamespaceMappings$MappingRecord_h_
//$ class com.sun.org.apache.xml.internal.serializer.NamespaceMappings$MappingRecord
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class NamespaceMappings;
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class NamespaceMappings$MappingRecord : public ::java::lang::Object {
	$class(NamespaceMappings$MappingRecord, $NO_CLASS_INIT, ::java::lang::Object)
public:
	NamespaceMappings$MappingRecord();
	void init$(::com::sun::org::apache::xml::internal::serializer::NamespaceMappings* this$0, $String* prefix, $String* uri, int32_t depth);
	::com::sun::org::apache::xml::internal::serializer::NamespaceMappings* this$0 = nullptr;
	$String* m_prefix = nullptr;
	$String* m_uri = nullptr;
	int32_t m_declarationDepth = 0;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_NamespaceMappings$MappingRecord_h_