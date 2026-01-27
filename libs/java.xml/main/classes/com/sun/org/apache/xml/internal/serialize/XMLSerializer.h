#ifndef _com_sun_org_apache_xml_internal_serialize_XMLSerializer_h_
#define _com_sun_org_apache_xml_internal_serialize_XMLSerializer_h_
//$ class com.sun.org.apache.xml.internal.serialize.XMLSerializer
//$ extends com.sun.org.apache.xml.internal.serialize.BaseMarkupSerializer

#include <com/sun/org/apache/xml/internal/serialize/BaseMarkupSerializer.h>
#include <java/lang/Array.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("PREFIX")
#undef PREFIX

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class NamespaceSupport;
							class SymbolTable;
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
							class OutputFormat;
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
namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
			class Element;
			class Node;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class AttributeList;
			class Attributes;
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

class XMLSerializer : public ::com::sun::org::apache::xml::internal::serialize::BaseMarkupSerializer {
	$class(XMLSerializer, 0, ::com::sun::org::apache::xml::internal::serialize::BaseMarkupSerializer)
public:
	XMLSerializer();
	void init$();
	void init$(::com::sun::org::apache::xml::internal::serialize::OutputFormat* format);
	void init$(::java::io::Writer* writer, ::com::sun::org::apache::xml::internal::serialize::OutputFormat* format);
	void init$(::java::io::OutputStream* output, ::com::sun::org::apache::xml::internal::serialize::OutputFormat* format);
	virtual void checkUnboundNamespacePrefixedNode(::org::w3c::dom::Node* node) override;
	virtual void endElement($String* namespaceURI, $String* localName, $String* rawName) override;
	virtual void endElement($String* tagName) override;
	virtual void endElementIO($String* namespaceURI, $String* localName, $String* rawName);
	::org::xml::sax::Attributes* extractNamespaces(::org::xml::sax::Attributes* attrs);
	virtual $String* getEntityRef(int32_t ch) override;
	void printAttribute($String* name, $String* value, bool isSpecified, ::org::w3c::dom::Attr* attr);
	using ::com::sun::org::apache::xml::internal::serialize::BaseMarkupSerializer::printEscaped;
	virtual void printEscaped($String* source) override;
	void printNamespaceAttr($String* prefix, $String* uri);
	virtual void printText($String* text, bool preserveSpace, bool unescaped) override;
	virtual void printText($chars* chars, int32_t start, int32_t length, bool preserveSpace, bool unescaped) override;
	virtual void printXMLChar(int32_t ch);
	virtual bool reset() override;
	virtual void serializeElement(::org::w3c::dom::Element* elem) override;
	virtual void setNamespaces(bool namespaces);
	virtual void setOutputFormat(::com::sun::org::apache::xml::internal::serialize::OutputFormat* format) override;
	using ::com::sun::org::apache::xml::internal::serialize::BaseMarkupSerializer::startDocument;
	virtual void startDocument($String* rootTagName);
	virtual void startElement($String* namespaceURI, $String* localName, $String* rawName, ::org::xml::sax::Attributes* attrs) override;
	virtual void startElement($String* tagName, ::org::xml::sax::AttributeList* attrs) override;
	static const bool DEBUG = false;
	::com::sun::org::apache::xerces::internal::util::NamespaceSupport* fNSBinder = nullptr;
	::com::sun::org::apache::xerces::internal::util::NamespaceSupport* fLocalNSBinder = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	static $String* PREFIX;
	bool fNamespaces = false;
	bool fNamespacePrefixes = false;
	bool fPreserveSpace = false;
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("PREFIX")

#endif // _com_sun_org_apache_xml_internal_serialize_XMLSerializer_h_