#ifndef _com_sun_org_apache_xml_internal_serialize_DOMSerializerImpl_h_
#define _com_sun_org_apache_xml_internal_serialize_DOMSerializerImpl_h_
//$ class com.sun.org.apache.xml.internal.serialize.DOMSerializerImpl
//$ extends org.w3c.dom.ls.LSSerializer
//$ implements org.w3c.dom.DOMConfiguration

#include <org/w3c/dom/DOMConfiguration.h>
#include <org/w3c/dom/ls/LSSerializer.h>

#pragma push_macro("CDATA")
#undef CDATA
#pragma push_macro("COMMENTS")
#undef COMMENTS
#pragma push_macro("DISCARDDEFAULT")
#undef DISCARDDEFAULT
#pragma push_macro("DOM_ELEMENT_CONTENT_WHITESPACE")
#undef DOM_ELEMENT_CONTENT_WHITESPACE
#pragma push_macro("ENTITIES")
#undef ENTITIES
#pragma push_macro("INFOSET")
#undef INFOSET
#pragma push_macro("NAMESPACES")
#undef NAMESPACES
#pragma push_macro("NSDECL")
#undef NSDECL
#pragma push_macro("PRETTY_PRINT")
#undef PRETTY_PRINT
#pragma push_macro("SPLITCDATA")
#undef SPLITCDATA
#pragma push_macro("URI")
#undef URI
#pragma push_macro("WELLFORMED")
#undef WELLFORMED
#pragma push_macro("XMLDECL")
#undef XMLDECL

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class DOMErrorImpl;
							class DOMLocatorImpl;
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
						namespace serialize {
							class XML11Serializer;
							class XMLSerializer;
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
			class DOMStringList;
			class Node;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSOutput;
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
						namespace serialize {

class DOMSerializerImpl : public ::org::w3c::dom::ls::LSSerializer, public ::org::w3c::dom::DOMConfiguration {
	$class(DOMSerializerImpl, $NO_CLASS_INIT, ::org::w3c::dom::ls::LSSerializer, ::org::w3c::dom::DOMConfiguration)
public:
	DOMSerializerImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	$String* _getInputEncoding(::org::w3c::dom::Node* node);
	$String* _getXmlEncoding(::org::w3c::dom::Node* node);
	$String* _getXmlVersion(::org::w3c::dom::Node* node);
	virtual bool canSetParameter($String* name, Object$* state) override;
	void copySettings(::com::sun::org::apache::xml::internal::serialize::XMLSerializer* src, ::com::sun::org::apache::xml::internal::serialize::XMLSerializer* dest);
	virtual ::org::w3c::dom::DOMConfiguration* getDomConfig() override;
	virtual ::org::w3c::dom::ls::LSSerializerFilter* getFilter() override;
	virtual $String* getNewLine() override;
	virtual $Object* getParameter($String* name) override;
	virtual ::org::w3c::dom::DOMStringList* getParameterNames() override;
	void initSerializer(::com::sun::org::apache::xml::internal::serialize::XMLSerializer* ser);
	void prepareForSerialization(::com::sun::org::apache::xml::internal::serialize::XMLSerializer* ser, ::org::w3c::dom::Node* node);
	virtual void setFilter(::org::w3c::dom::ls::LSSerializerFilter* filter) override;
	virtual void setNewLine($String* newLine) override;
	virtual void setParameter($String* name, Object$* value) override;
	virtual $String* toString() override;
	void verify(::org::w3c::dom::Node* node, bool verifyNames, bool xml11Version);
	virtual bool write(::org::w3c::dom::Node* node, ::org::w3c::dom::ls::LSOutput* destination) override;
	virtual $String* writeToString(::org::w3c::dom::Node* wnode) override;
	virtual bool writeToURI(::org::w3c::dom::Node* node, $String* URI) override;
	::com::sun::org::apache::xml::internal::serialize::XMLSerializer* serializer = nullptr;
	::com::sun::org::apache::xml::internal::serialize::XML11Serializer* xml11Serializer = nullptr;
	::org::w3c::dom::DOMStringList* fRecognizedParameters = nullptr;
	int16_t features = 0;
	static const int16_t NAMESPACES = 1; // 1 << 0
	static const int16_t WELLFORMED = 2; // 1 << 1
	static const int16_t ENTITIES = 4; // 1 << 2
	static const int16_t CDATA = 8; // 1 << 3
	static const int16_t SPLITCDATA = 16; // 1 << 4
	static const int16_t COMMENTS = 32; // 1 << 5
	static const int16_t DISCARDDEFAULT = 64; // 1 << 6
	static const int16_t INFOSET = 128; // 1 << 7
	static const int16_t XMLDECL = 256; // 1 << 8
	static const int16_t NSDECL = 512; // 1 << 9
	static const int16_t DOM_ELEMENT_CONTENT_WHITESPACE = 1024; // 1 << 10
	static const int16_t PRETTY_PRINT = 2048; // 1 << 11
	::org::w3c::dom::DOMErrorHandler* fErrorHandler = nullptr;
	::com::sun::org::apache::xerces::internal::dom::DOMErrorImpl* fError = nullptr;
	::com::sun::org::apache::xerces::internal::dom::DOMLocatorImpl* fLocator = nullptr;
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CDATA")
#pragma pop_macro("COMMENTS")
#pragma pop_macro("DISCARDDEFAULT")
#pragma pop_macro("DOM_ELEMENT_CONTENT_WHITESPACE")
#pragma pop_macro("ENTITIES")
#pragma pop_macro("INFOSET")
#pragma pop_macro("NAMESPACES")
#pragma pop_macro("NSDECL")
#pragma pop_macro("PRETTY_PRINT")
#pragma pop_macro("SPLITCDATA")
#pragma pop_macro("URI")
#pragma pop_macro("WELLFORMED")
#pragma pop_macro("XMLDECL")

#endif // _com_sun_org_apache_xml_internal_serialize_DOMSerializerImpl_h_