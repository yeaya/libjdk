#ifndef _com_sun_org_apache_xml_internal_serializer_ToHTMLStream_h_
#define _com_sun_org_apache_xml_internal_serializer_ToHTMLStream_h_
//$ class com.sun.org.apache.xml.internal.serializer.ToHTMLStream
//$ extends com.sun.org.apache.xml.internal.serializer.ToStream

#include <com/sun/org/apache/xml/internal/serializer/ToStream.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class CharInfo;
							class ElemDesc;
							class ToHTMLStream$Trie;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class Writer;
	}
}
namespace java {
	namespace util {
		class Properties;
	}
}
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

class ToHTMLStream : public ::com::sun::org::apache::xml::internal::serializer::ToStream {
	$class(ToHTMLStream, 0, ::com::sun::org::apache::xml::internal::serializer::ToStream)
public:
	ToHTMLStream();
	using ::com::sun::org::apache::xml::internal::serializer::ToStream::characters;
	using ::com::sun::org::apache::xml::internal::serializer::ToStream::comment;
	void init$();
	void init$(::javax::xml::transform::ErrorListener* l);
	virtual void addUniqueAttribute($String* name, $String* value, int32_t flags) override;
	virtual void attributeDecl($String* eName, $String* aName, $String* type, $String* valueDefault, $String* value) override;
	virtual void cdata($chars* ch, int32_t start, int32_t length) override;
	virtual void characters($chars* chars, int32_t start, int32_t length) override;
	virtual void closeStartTag() override;
	virtual void comment($chars* ch, int32_t start, int32_t length) override;
	virtual void elementDecl($String* name, $String* model) override;
	virtual void endDTD() override;
	virtual void endDocument() override;
	virtual void endElement($String* namespaceURI, $String* localName, $String* name) override;
	virtual void endElement($String* elemName) override;
	virtual void entityReference($String* name) override;
	virtual void externalEntityDecl($String* name, $String* publicId, $String* systemId) override;
	static ::com::sun::org::apache::xml::internal::serializer::ElemDesc* getElemDesc($String* name);
	::com::sun::org::apache::xml::internal::serializer::ElemDesc* getElemDesc2($String* name);
	bool getOmitMetaTag();
	bool getSpecialEscapeURLs();
	static void initTagReference(::com::sun::org::apache::xml::internal::serializer::ToHTMLStream$Trie* m_elementFlags);
	void initToHTMLStream();
	virtual void internalEntityDecl($String* name, $String* value) override;
	bool isASCIIDigit(char16_t c);
	bool isHHSign($String* str);
	static $String* makeHHString(int32_t i);
	virtual void namespaceAfterStartElement($String* prefix, $String* uri) override;
	void processAttribute(::java::io::Writer* writer, $String* name, $String* value, ::com::sun::org::apache::xml::internal::serializer::ElemDesc* elemDesc);
	virtual void processAttributes(::java::io::Writer* writer, int32_t nAttrs) override;
	virtual void processingInstruction($String* target, $String* data) override;
	virtual bool reset() override;
	void setOmitMetaTag(bool bool$);
	virtual void setOutputFormat(::java::util::Properties* format) override;
	void setSpecialEscapeURLs(bool bool$);
	virtual bool shouldFormatOutput() override;
	virtual bool shouldIndentForText() override;
	virtual void startDTD($String* name, $String* publicId, $String* systemId) override;
	virtual void startDocumentInternal() override;
	using ::com::sun::org::apache::xml::internal::serializer::ToStream::startElement;
	virtual void startElement($String* namespaceURI, $String* localName, $String* name, ::org::xml::sax::Attributes* atts) override;
	virtual void writeAttrString(::java::io::Writer* writer, $String* string, $String* encoding) override;
	void writeAttrURI(::java::io::Writer* writer, $String* string, bool doURLEscaping);
	bool m_inDTD = false;
	bool m_isprevblock = false;
	static ::com::sun::org::apache::xml::internal::serializer::CharInfo* m_htmlcharInfo;
	static ::com::sun::org::apache::xml::internal::serializer::ToHTMLStream$Trie* m_elementFlags;
	static ::com::sun::org::apache::xml::internal::serializer::ElemDesc* m_dummy;
	bool m_specialEscapeURLs = false;
	bool m_omitMetaTag = false;
	::com::sun::org::apache::xml::internal::serializer::ToHTMLStream$Trie* m_htmlInfo = nullptr;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_ToHTMLStream_h_