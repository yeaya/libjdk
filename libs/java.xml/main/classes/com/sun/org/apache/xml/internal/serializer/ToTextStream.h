#ifndef _com_sun_org_apache_xml_internal_serializer_ToTextStream_h_
#define _com_sun_org_apache_xml_internal_serializer_ToTextStream_h_
//$ class com.sun.org.apache.xml.internal.serializer.ToTextStream
//$ extends com.sun.org.apache.xml.internal.serializer.ToStream

#include <com/sun/org/apache/xml/internal/serializer/ToStream.h>
#include <java/lang/Array.h>

namespace javax {
	namespace xml {
		namespace transform {
			class ErrorListener;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
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
						namespace serializer {

class ToTextStream : public ::com::sun::org::apache::xml::internal::serializer::ToStream {
	$class(ToTextStream, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::serializer::ToStream)
public:
	ToTextStream();
	using ::com::sun::org::apache::xml::internal::serializer::ToStream::characters;
	using ::com::sun::org::apache::xml::internal::serializer::ToStream::addAttribute;
	void init$();
	void init$(::javax::xml::transform::ErrorListener* l);
	virtual void addAttribute($String* uri, $String* localName, $String* rawName, $String* type, $String* value, bool XSLAttribute) override;
	virtual void addAttribute($String* name, $String* value) override;
	virtual void addUniqueAttribute($String* qName, $String* value, int32_t flags) override;
	virtual void cdata($chars* ch, int32_t start, int32_t length) override;
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	virtual void characters($String* characters) override;
	virtual void charactersRaw($chars* ch, int32_t start, int32_t length) override;
	virtual void comment($String* data) override;
	virtual void comment($chars* ch, int32_t start, int32_t length) override;
	virtual void endCDATA() override;
	virtual void endDocument() override;
	virtual void endElement($String* namespaceURI, $String* localName, $String* name) override;
	virtual void endElement($String* elemName) override;
	virtual void entityReference($String* name) override;
	virtual void flushPending() override;
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	virtual void namespaceAfterStartElement($String* prefix, $String* uri) override;
	virtual void processingInstruction($String* target, $String* data) override;
	virtual void startDocumentInternal() override;
	using ::com::sun::org::apache::xml::internal::serializer::ToStream::startElement;
	virtual void startElement($String* namespaceURI, $String* localName, $String* name, ::org::xml::sax::Attributes* atts) override;
	virtual void startElement($String* elementNamespaceURI, $String* elementLocalName, $String* elementName) override;
	virtual bool startPrefixMapping($String* prefix, $String* uri, bool shouldFlush) override;
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	using ::com::sun::org::apache::xml::internal::serializer::ToStream::writeNormalizedChars;
	void writeNormalizedChars($chars* ch, int32_t start, int32_t length, bool useLineSep);
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_ToTextStream_h_