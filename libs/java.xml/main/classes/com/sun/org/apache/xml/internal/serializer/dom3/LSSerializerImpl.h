#ifndef _com_sun_org_apache_xml_internal_serializer_dom3_LSSerializerImpl_h_
#define _com_sun_org_apache_xml_internal_serializer_dom3_LSSerializerImpl_h_
//$ class com.sun.org.apache.xml.internal.serializer.dom3.LSSerializerImpl
//$ extends org.w3c.dom.DOMConfiguration
//$ implements org.w3c.dom.ls.LSSerializer

#include <java/lang/Array.h>
#include <org/w3c/dom/DOMConfiguration.h>
#include <org/w3c/dom/ls/LSSerializer.h>

#pragma push_macro("CANONICAL")
#undef CANONICAL
#pragma push_macro("CDATA")
#undef CDATA
#pragma push_macro("CHARNORMALIZE")
#undef CHARNORMALIZE
#pragma push_macro("COMMENTS")
#undef COMMENTS
#pragma push_macro("DISCARDDEFAULT")
#undef DISCARDDEFAULT
#pragma push_macro("DTNORMALIZE")
#undef DTNORMALIZE
#pragma push_macro("ELEM_CONTENT_WHITESPACE")
#undef ELEM_CONTENT_WHITESPACE
#pragma push_macro("ENTITIES")
#undef ENTITIES
#pragma push_macro("IGNORE_CHAR_DENORMALIZE")
#undef IGNORE_CHAR_DENORMALIZE
#pragma push_macro("INFOSET")
#undef INFOSET
#pragma push_macro("IS_STANDALONE")
#undef IS_STANDALONE
#pragma push_macro("NAMESPACEDECLS")
#undef NAMESPACEDECLS
#pragma push_macro("NAMESPACES")
#undef NAMESPACES
#pragma push_macro("NORMALIZECHARS")
#undef NORMALIZECHARS
#pragma push_macro("PRETTY_PRINT")
#undef PRETTY_PRINT
#pragma push_macro("SCHEMAVALIDATE")
#undef SCHEMAVALIDATE
#pragma push_macro("SPLITCDATA")
#undef SPLITCDATA
#pragma push_macro("VALIDATE")
#undef VALIDATE
#pragma push_macro("WELLFORMED")
#undef WELLFORMED
#pragma push_macro("XMLDECL")
#undef XMLDECL

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class DOM3Serializer;
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
namespace jdk {
	namespace xml {
		namespace internal {
			class JdkProperty;
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
						namespace serializer {
							namespace dom3 {

class LSSerializerImpl : public ::org::w3c::dom::DOMConfiguration, public ::org::w3c::dom::ls::LSSerializer {
	$class(LSSerializerImpl, $NO_CLASS_INIT, ::org::w3c::dom::DOMConfiguration, ::org::w3c::dom::ls::LSSerializer)
public:
	LSSerializerImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool canSetParameter($String* name, Object$* value) override;
	virtual ::org::w3c::dom::DOMConfiguration* getDomConfig() override;
	::org::w3c::dom::DOMErrorHandler* getErrorHandler();
	virtual ::org::w3c::dom::ls::LSSerializerFilter* getFilter() override;
	$String* getInputEncoding(::org::w3c::dom::Node* nodeArg);
	virtual $String* getNewLine() override;
	virtual $Object* getParameter($String* name) override;
	virtual ::org::w3c::dom::DOMStringList* getParameterNames() override;
	$String* getXMLEncoding(::org::w3c::dom::Node* nodeArg);
	$String* getXMLVersion(::org::w3c::dom::Node* nodeArg);
	void initializeSerializerProps();
	virtual void setFilter(::org::w3c::dom::ls::LSSerializerFilter* filter) override;
	virtual void setNewLine($String* newLine) override;
	virtual void setParameter($String* name, Object$* value) override;
	virtual $String* toString() override;
	virtual bool write(::org::w3c::dom::Node* nodeArg, ::org::w3c::dom::ls::LSOutput* destination) override;
	virtual $String* writeToString(::org::w3c::dom::Node* nodeArg) override;
	virtual bool writeToURI(::org::w3c::dom::Node* nodeArg, $String* uri) override;
	::com::sun::org::apache::xml::internal::serializer::Serializer* fXMLSerializer = nullptr;
	int32_t fFeatures = 0;
	::com::sun::org::apache::xml::internal::serializer::DOM3Serializer* fDOMSerializer = nullptr;
	::org::w3c::dom::ls::LSSerializerFilter* fSerializerFilter = nullptr;
	::org::w3c::dom::Node* fVisitedNode = nullptr;
	$String* fEndOfLine = nullptr;
	::org::w3c::dom::DOMErrorHandler* fDOMErrorHandler = nullptr;
	::java::util::Properties* fDOMConfigProperties = nullptr;
	$String* fEncoding = nullptr;
	::jdk::xml::internal::JdkProperty* fIsStandalone = nullptr;
	static const int32_t CANONICAL = 1; // 1 << 0
	static const int32_t CDATA = 2; // 1 << 1
	static const int32_t CHARNORMALIZE = 4; // 1 << 2
	static const int32_t COMMENTS = 8; // 1 << 3
	static const int32_t DTNORMALIZE = 16; // 1 << 4
	static const int32_t ELEM_CONTENT_WHITESPACE = 32; // 1 << 5
	static const int32_t ENTITIES = 64; // 1 << 6
	static const int32_t INFOSET = 128; // 1 << 7
	static const int32_t NAMESPACES = 256; // 1 << 8
	static const int32_t NAMESPACEDECLS = 512; // 1 << 9
	static const int32_t NORMALIZECHARS = 1024; // 1 << 10
	static const int32_t SPLITCDATA = 2048; // 1 << 11
	static const int32_t VALIDATE = 4096; // 1 << 12
	static const int32_t SCHEMAVALIDATE = 8192; // 1 << 13
	static const int32_t WELLFORMED = 16384; // 1 << 14
	static const int32_t DISCARDDEFAULT = 32768; // 1 << 15
	static const int32_t PRETTY_PRINT = 65536; // 1 << 16
	static const int32_t IGNORE_CHAR_DENORMALIZE = 131072; // 1 << 17
	static const int32_t XMLDECL = 262144; // 1 << 18
	static const int32_t IS_STANDALONE = 524288; // 1 << 19
	$StringArray* fRecognizedParameters = nullptr;
};

							} // dom3
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CANONICAL")
#pragma pop_macro("CDATA")
#pragma pop_macro("CHARNORMALIZE")
#pragma pop_macro("COMMENTS")
#pragma pop_macro("DISCARDDEFAULT")
#pragma pop_macro("DTNORMALIZE")
#pragma pop_macro("ELEM_CONTENT_WHITESPACE")
#pragma pop_macro("ENTITIES")
#pragma pop_macro("IGNORE_CHAR_DENORMALIZE")
#pragma pop_macro("INFOSET")
#pragma pop_macro("IS_STANDALONE")
#pragma pop_macro("NAMESPACEDECLS")
#pragma pop_macro("NAMESPACES")
#pragma pop_macro("NORMALIZECHARS")
#pragma pop_macro("PRETTY_PRINT")
#pragma pop_macro("SCHEMAVALIDATE")
#pragma pop_macro("SPLITCDATA")
#pragma pop_macro("VALIDATE")
#pragma pop_macro("WELLFORMED")
#pragma pop_macro("XMLDECL")

#endif // _com_sun_org_apache_xml_internal_serializer_dom3_LSSerializerImpl_h_