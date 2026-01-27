#ifndef _com_sun_org_apache_xml_internal_utils_StylesheetPIHandler_h_
#define _com_sun_org_apache_xml_internal_utils_StylesheetPIHandler_h_
//$ class com.sun.org.apache.xml.internal.utils.StylesheetPIHandler
//$ extends org.xml.sax.helpers.DefaultHandler

#include <org/xml/sax/helpers/DefaultHandler.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class Source;
			class URIResolver;
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
						namespace utils {

class $import StylesheetPIHandler : public ::org::xml::sax::helpers::DefaultHandler {
	$class(StylesheetPIHandler, $NO_CLASS_INIT, ::org::xml::sax::helpers::DefaultHandler)
public:
	StylesheetPIHandler();
	void init$($String* baseID, $String* media, $String* title, $String* charset);
	virtual ::javax::xml::transform::Source* getAssociatedStylesheet();
	virtual $String* getBaseId();
	virtual ::javax::xml::transform::URIResolver* getURIResolver();
	virtual void processingInstruction($String* target, $String* data) override;
	virtual void setBaseId($String* baseId);
	virtual void setURIResolver(::javax::xml::transform::URIResolver* resolver);
	virtual void startElement($String* namespaceURI, $String* localName, $String* qName, ::org::xml::sax::Attributes* atts) override;
	$String* m_baseID = nullptr;
	$String* m_media = nullptr;
	$String* m_title = nullptr;
	$String* m_charset = nullptr;
	::java::util::List* m_stylesheets = nullptr;
	::javax::xml::transform::URIResolver* m_uriResolver = nullptr;
};

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_utils_StylesheetPIHandler_h_