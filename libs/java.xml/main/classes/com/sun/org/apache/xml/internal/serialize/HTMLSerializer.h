#ifndef _com_sun_org_apache_xml_internal_serialize_HTMLSerializer_h_
#define _com_sun_org_apache_xml_internal_serialize_HTMLSerializer_h_
//$ class com.sun.org.apache.xml.internal.serialize.HTMLSerializer
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
			class Element;
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

class HTMLSerializer : public ::com::sun::org::apache::xml::internal::serialize::BaseMarkupSerializer {
	$class(HTMLSerializer, 0, ::com::sun::org::apache::xml::internal::serialize::BaseMarkupSerializer)
public:
	HTMLSerializer();
	void init$(bool xhtml, ::com::sun::org::apache::xml::internal::serialize::OutputFormat* format);
	void init$();
	void init$(::com::sun::org::apache::xml::internal::serialize::OutputFormat* format);
	void init$(::java::io::Writer* writer, ::com::sun::org::apache::xml::internal::serialize::OutputFormat* format);
	void init$(::java::io::OutputStream* output, ::com::sun::org::apache::xml::internal::serialize::OutputFormat* format);
	virtual void characters($chars* chars, int32_t start, int32_t length) override;
	virtual void characters($String* text) override;
	virtual void endElement($String* namespaceURI, $String* localName, $String* rawName) override;
	virtual void endElement($String* tagName) override;
	virtual void endElementIO($String* namespaceURI, $String* localName, $String* rawName);
	virtual $String* escapeURI($String* uri);
	virtual $String* getEntityRef(int32_t ch) override;
	virtual void serializeElement(::org::w3c::dom::Element* elem) override;
	virtual void setOutputFormat(::com::sun::org::apache::xml::internal::serialize::OutputFormat* format) override;
	virtual void setXHTMLNamespace($String* newNamespace);
	using ::com::sun::org::apache::xml::internal::serialize::BaseMarkupSerializer::startDocument;
	virtual void startDocument($String* rootTagName);
	virtual void startElement($String* namespaceURI, $String* localName, $String* rawName, ::org::xml::sax::Attributes* attrs) override;
	virtual void startElement($String* tagName, ::org::xml::sax::AttributeList* attrs) override;
	bool _xhtml = false;
	static $String* XHTMLNamespace;
	$String* fUserXHTMLNamespace = nullptr;
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serialize_HTMLSerializer_h_