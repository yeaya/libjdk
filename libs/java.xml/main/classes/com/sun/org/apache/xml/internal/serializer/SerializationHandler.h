#ifndef _com_sun_org_apache_xml_internal_serializer_SerializationHandler_h_
#define _com_sun_org_apache_xml_internal_serializer_SerializationHandler_h_
//$ interface com.sun.org.apache.xml.internal.serializer.SerializationHandler
//$ extends com.sun.org.apache.xml.internal.serializer.ExtendedContentHandler,com.sun.org.apache.xml.internal.serializer.ExtendedLexicalHandler,com.sun.org.apache.xml.internal.serializer.XSLOutputAttributes,org.xml.sax.ext.DeclHandler,org.xml.sax.DTDHandler,org.xml.sax.ErrorHandler,com.sun.org.apache.xml.internal.serializer.DOMSerializer,com.sun.org.apache.xml.internal.serializer.Serializer

#include <com/sun/org/apache/xml/internal/serializer/DOMSerializer.h>
#include <com/sun/org/apache/xml/internal/serializer/ExtendedContentHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/ExtendedLexicalHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/Serializer.h>
#include <com/sun/org/apache/xml/internal/serializer/XSLOutputAttributes.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/ext/DeclHandler.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class NamespaceMappings;
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
			class Transformer;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
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

class SerializationHandler : public ::com::sun::org::apache::xml::internal::serializer::ExtendedContentHandler, public ::com::sun::org::apache::xml::internal::serializer::ExtendedLexicalHandler, public ::com::sun::org::apache::xml::internal::serializer::XSLOutputAttributes, public ::org::xml::sax::ext::DeclHandler, public ::org::xml::sax::DTDHandler, public ::org::xml::sax::ErrorHandler, public ::com::sun::org::apache::xml::internal::serializer::DOMSerializer, public ::com::sun::org::apache::xml::internal::serializer::Serializer {
	$interface(SerializationHandler, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::serializer::ExtendedContentHandler, ::com::sun::org::apache::xml::internal::serializer::ExtendedLexicalHandler, ::com::sun::org::apache::xml::internal::serializer::XSLOutputAttributes, ::org::xml::sax::ext::DeclHandler, ::org::xml::sax::DTDHandler, ::org::xml::sax::ErrorHandler, ::com::sun::org::apache::xml::internal::serializer::DOMSerializer, ::com::sun::org::apache::xml::internal::serializer::Serializer)
public:
	using ::com::sun::org::apache::xml::internal::serializer::ExtendedContentHandler::characters;
	virtual $Object* clone() override;
	virtual void close() {}
	using ::com::sun::org::apache::xml::internal::serializer::ExtendedContentHandler::endElement;
	using ::com::sun::org::apache::xml::internal::serializer::ExtendedLexicalHandler::comment;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void flushPending() {}
	virtual ::javax::xml::transform::Transformer* getTransformer() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual void serialize(::org::w3c::dom::Node* node) override {}
	virtual void setContentHandler(::org::xml::sax::ContentHandler* ch) {}
	virtual void setDTDEntityExpansion(bool expand) {}
	virtual bool setEscaping(bool escape) {return false;}
	virtual void setIndentAmount(int32_t spaces) {}
	virtual void setIsStandalone(bool b) {}
	virtual void setNamespaceMappings(::com::sun::org::apache::xml::internal::serializer::NamespaceMappings* mappings) {}
	virtual void setTransformer(::javax::xml::transform::Transformer* transformer) {}
	using ::com::sun::org::apache::xml::internal::serializer::ExtendedContentHandler::startElement;
	using ::com::sun::org::apache::xml::internal::serializer::ExtendedContentHandler::startPrefixMapping;
	virtual $String* toString() override;
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_SerializationHandler_h_