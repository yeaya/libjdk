#ifndef _com_sun_org_apache_xml_internal_serializer_ElemContext_h_
#define _com_sun_org_apache_xml_internal_serializer_ElemContext_h_
//$ class com.sun.org.apache.xml.internal.serializer.ElemContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class ElemDesc;
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

class ElemContext : public ::java::lang::Object {
	$class(ElemContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ElemContext();
	void init$();
	void init$(::com::sun::org::apache::xml::internal::serializer::ElemContext* previous);
	::com::sun::org::apache::xml::internal::serializer::ElemContext* pop();
	::com::sun::org::apache::xml::internal::serializer::ElemContext* push();
	::com::sun::org::apache::xml::internal::serializer::ElemContext* push($String* uri, $String* localName, $String* qName);
	int32_t m_currentElemDepth = 0;
	::com::sun::org::apache::xml::internal::serializer::ElemDesc* m_elementDesc = nullptr;
	$String* m_elementLocalName = nullptr;
	$String* m_elementName = nullptr;
	$String* m_elementURI = nullptr;
	bool m_isCdataSection = false;
	bool m_isRaw = false;
	::com::sun::org::apache::xml::internal::serializer::ElemContext* m_next = nullptr;
	::com::sun::org::apache::xml::internal::serializer::ElemContext* m_prev = nullptr;
	bool m_startTagOpen = false;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_ElemContext_h_