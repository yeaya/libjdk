#ifndef _com_sun_org_apache_xml_internal_serialize_TextSerializer_h_
#define _com_sun_org_apache_xml_internal_serialize_TextSerializer_h_
//$ class com.sun.org.apache.xml.internal.serialize.TextSerializer
//$ extends com.sun.org.apache.xml.internal.serialize.BaseMarkupSerializer

#include <com/sun/org/apache/xml/internal/serialize/BaseMarkupSerializer.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {
							class ElementState;
							class OutputFormat;
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

class TextSerializer : public ::com::sun::org::apache::xml::internal::serialize::BaseMarkupSerializer {
	$class(TextSerializer, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::serialize::BaseMarkupSerializer)
public:
	TextSerializer();
	using ::com::sun::org::apache::xml::internal::serialize::BaseMarkupSerializer::characters;
	void init$();
	virtual void characters($chars* chars, int32_t start, int32_t length) override;
	virtual void characters($String* text, bool unescaped);
	virtual void comment($String* text) override;
	virtual void comment($chars* chars, int32_t start, int32_t length) override;
	virtual ::com::sun::org::apache::xml::internal::serialize::ElementState* content() override;
	virtual void endElement($String* namespaceURI, $String* localName, $String* rawName) override;
	virtual void endElement($String* tagName) override;
	virtual void endElementIO($String* tagName);
	virtual $String* getEntityRef(int32_t ch) override;
	virtual void processingInstructionIO($String* target, $String* code) override;
	virtual void serializeElement(::org::w3c::dom::Element* elem) override;
	virtual void serializeNode(::org::w3c::dom::Node* node) override;
	virtual void setOutputFormat(::com::sun::org::apache::xml::internal::serialize::OutputFormat* format) override;
	using ::com::sun::org::apache::xml::internal::serialize::BaseMarkupSerializer::startDocument;
	virtual void startDocument($String* rootTagName);
	virtual void startElement($String* namespaceURI, $String* localName, $String* rawName, ::org::xml::sax::Attributes* attrs) override;
	virtual void startElement($String* tagName, ::org::xml::sax::AttributeList* attrs) override;
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serialize_TextSerializer_h_