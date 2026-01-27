#ifndef _com_sun_org_apache_xml_internal_serializer_ToXMLStream_h_
#define _com_sun_org_apache_xml_internal_serializer_ToXMLStream_h_
//$ class com.sun.org.apache.xml.internal.serializer.ToXMLStream
//$ extends com.sun.org.apache.xml.internal.serializer.ToStream

#include <com/sun/org/apache/xml/internal/serializer/ToStream.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class CharInfo;
						}
					}
				}
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class ErrorListener;
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

class ToXMLStream : public ::com::sun::org::apache::xml::internal::serializer::ToStream {
	$class(ToXMLStream, 0, ::com::sun::org::apache::xml::internal::serializer::ToStream)
public:
	ToXMLStream();
	using ::com::sun::org::apache::xml::internal::serializer::ToStream::characters;
	using ::com::sun::org::apache::xml::internal::serializer::ToStream::endElement;
	using ::com::sun::org::apache::xml::internal::serializer::ToStream::comment;
	using ::com::sun::org::apache::xml::internal::serializer::ToStream::addAttribute;
	void init$();
	void init$(::javax::xml::transform::ErrorListener* l);
	void CopyFrom(::com::sun::org::apache::xml::internal::serializer::ToXMLStream* xmlListener);
	virtual void addAttribute($String* uri, $String* localName, $String* rawName, $String* type, $String* value, bool xslAttribute) override;
	virtual void addUniqueAttribute($String* name, $String* value, int32_t flags) override;
	virtual void endDocument() override;
	virtual void endElement($String* elemName) override;
	void endPreserving();
	virtual void entityReference($String* name) override;
	$String* getXMLVersion();
	virtual void namespaceAfterStartElement($String* prefix, $String* uri) override;
	virtual void processingInstruction($String* target, $String* data) override;
	bool pushNamespace($String* prefix, $String* uri);
	virtual bool reset() override;
	void resetToXMLStream();
	virtual void startDocumentInternal() override;
	void startPreserving();
	bool m_cdataTagOpen = false;
	static ::com::sun::org::apache::xml::internal::serializer::CharInfo* m_xmlcharInfo;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_ToXMLStream_h_