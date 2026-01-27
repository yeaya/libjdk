#ifndef _com_sun_org_apache_xml_internal_serializer_dom3_DOM3SerializerImpl_h_
#define _com_sun_org_apache_xml_internal_serializer_dom3_DOM3SerializerImpl_h_
//$ class com.sun.org.apache.xml.internal.serializer.dom3.DOM3SerializerImpl
//$ extends com.sun.org.apache.xml.internal.serializer.DOM3Serializer

#include <com/sun/org/apache/xml/internal/serializer/DOM3Serializer.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class SerializationHandler;
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class DOMErrorHandler;
			class Node;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSSerializerFilter;
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
							namespace dom3 {

class DOM3SerializerImpl : public ::com::sun::org::apache::xml::internal::serializer::DOM3Serializer {
	$class(DOM3SerializerImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::serializer::DOM3Serializer)
public:
	DOM3SerializerImpl();
	void init$(::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler);
	virtual ::org::w3c::dom::DOMErrorHandler* getErrorHandler() override;
	virtual ::org::w3c::dom::ls::LSSerializerFilter* getNodeFilter() override;
	virtual void serializeDOM3(::org::w3c::dom::Node* node) override;
	virtual void setErrorHandler(::org::w3c::dom::DOMErrorHandler* handler) override;
	virtual void setNewLine($String* newLine) override;
	virtual void setNodeFilter(::org::w3c::dom::ls::LSSerializerFilter* filter) override;
	void setSerializationHandler(::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler);
	::org::w3c::dom::DOMErrorHandler* fErrorHandler = nullptr;
	::org::w3c::dom::ls::LSSerializerFilter* fSerializerFilter = nullptr;
	$String* fNewLine = nullptr;
	::com::sun::org::apache::xml::internal::serializer::SerializationHandler* fSerializationHandler = nullptr;
};

							} // dom3
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_dom3_DOM3SerializerImpl_h_