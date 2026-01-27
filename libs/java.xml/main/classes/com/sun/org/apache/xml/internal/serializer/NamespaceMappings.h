#ifndef _com_sun_org_apache_xml_internal_serializer_NamespaceMappings_h_
#define _com_sun_org_apache_xml_internal_serializer_NamespaceMappings_h_
//$ class com.sun.org.apache.xml.internal.serializer.NamespaceMappings
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EMPTYSTRING")
#undef EMPTYSTRING
#pragma push_macro("XML_PREFIX")
#undef XML_PREFIX

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class NamespaceMappings$MappingRecord;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
		class Stack;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
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

class NamespaceMappings : public ::java::lang::Object {
	$class(NamespaceMappings, 0, ::java::lang::Object)
public:
	NamespaceMappings();
	void init$();
	virtual $Object* clone() override;
	virtual $String* generateNextPrefix();
	virtual ::com::sun::org::apache::xml::internal::serializer::NamespaceMappings$MappingRecord* getMappingFromPrefix($String* prefix);
	virtual ::com::sun::org::apache::xml::internal::serializer::NamespaceMappings$MappingRecord* getMappingFromURI($String* uri);
	void initNamespaces();
	virtual $String* lookupNamespace($String* prefix);
	virtual $String* lookupPrefix($String* uri);
	virtual bool popNamespace($String* prefix);
	virtual void popNamespaces(int32_t elemDepth, ::org::xml::sax::ContentHandler* saxHandler);
	virtual bool pushNamespace($String* prefix, $String* uri, int32_t elemDepth);
	void reset();
	int32_t count = 0;
	::java::util::HashMap* m_namespaces = nullptr;
	::java::util::Stack* m_nodeStack = nullptr;
	static $String* EMPTYSTRING;
	static $String* XML_PREFIX;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EMPTYSTRING")
#pragma pop_macro("XML_PREFIX")

#endif // _com_sun_org_apache_xml_internal_serializer_NamespaceMappings_h_