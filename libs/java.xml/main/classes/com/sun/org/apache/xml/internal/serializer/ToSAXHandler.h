#ifndef _com_sun_org_apache_xml_internal_serializer_ToSAXHandler_h_
#define _com_sun_org_apache_xml_internal_serializer_ToSAXHandler_h_
//$ class com.sun.org.apache.xml.internal.serializer.ToSAXHandler
//$ extends com.sun.org.apache.xml.internal.serializer.SerializerBase

#include <com/sun/org/apache/xml/internal/serializer/SerializerBase.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class TransformStateSetter;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
			class ContentHandler;
			class SAXParseException;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace ext {
				class LexicalHandler;
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

class ToSAXHandler : public ::com::sun::org::apache::xml::internal::serializer::SerializerBase {
	$class(ToSAXHandler, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::serializer::SerializerBase)
public:
	ToSAXHandler();
	using ::com::sun::org::apache::xml::internal::serializer::SerializerBase::endElement;
	using ::com::sun::org::apache::xml::internal::serializer::SerializerBase::characters;
	using ::com::sun::org::apache::xml::internal::serializer::SerializerBase::comment;
	void init$();
	void init$(::org::xml::sax::ContentHandler* hdlr, ::org::xml::sax::ext::LexicalHandler* lex, $String* encoding);
	void init$(::org::xml::sax::ContentHandler* handler, $String* encoding);
	virtual void addUniqueAttribute($String* qName, $String* value, int32_t flags) override;
	virtual void characters($String* chars) override;
	virtual void characters(::org::w3c::dom::Node* node) override;
	virtual void closeCDATA();
	virtual void closeStartTag();
	virtual void comment($String* comment) override;
	virtual void error(::org::xml::sax::SAXParseException* exc) override;
	virtual void fatalError(::org::xml::sax::SAXParseException* exc) override;
	virtual void flushPending() override;
	virtual bool getShouldOutputNSAttr();
	virtual void processingInstruction($String* target, $String* data) override;
	virtual bool reset() override;
	void resetToSAXHandler();
	virtual void setCdataSectionElements(::java::util::List* URI_and_localNames) override;
	virtual void setContentHandler(::org::xml::sax::ContentHandler* _saxHandler) override;
	virtual void setLexHandler(::org::xml::sax::ext::LexicalHandler* _lexHandler);
	virtual void setShouldOutputNSAttr(bool doOutputNSAttr);
	virtual void setTransformState(::com::sun::org::apache::xml::internal::serializer::TransformStateSetter* ts);
	virtual void startDTD($String* arg0, $String* arg1, $String* arg2) override;
	virtual void startDocumentInternal() override;
	virtual void startElement($String* arg0, $String* arg1, $String* arg2, ::org::xml::sax::Attributes* arg3) override;
	virtual void startElement($String* uri, $String* localName, $String* qName) override;
	virtual void startElement($String* qName) override;
	using ::com::sun::org::apache::xml::internal::serializer::SerializerBase::startPrefixMapping;
	virtual void warning(::org::xml::sax::SAXParseException* exc) override;
	::org::xml::sax::ContentHandler* m_saxHandler = nullptr;
	::org::xml::sax::ext::LexicalHandler* m_lexHandler = nullptr;
	bool m_shouldGenerateNSAttribute = false;
	::com::sun::org::apache::xml::internal::serializer::TransformStateSetter* m_state = nullptr;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_ToSAXHandler_h_