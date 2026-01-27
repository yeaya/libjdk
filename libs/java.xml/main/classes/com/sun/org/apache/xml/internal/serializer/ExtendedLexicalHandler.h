#ifndef _com_sun_org_apache_xml_internal_serializer_ExtendedLexicalHandler_h_
#define _com_sun_org_apache_xml_internal_serializer_ExtendedLexicalHandler_h_
//$ interface com.sun.org.apache.xml.internal.serializer.ExtendedLexicalHandler
//$ extends org.xml.sax.ext.LexicalHandler

#include <org/xml/sax/ext/LexicalHandler.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

class ExtendedLexicalHandler : public ::org::xml::sax::ext::LexicalHandler {
	$interface(ExtendedLexicalHandler, $NO_CLASS_INIT, ::org::xml::sax::ext::LexicalHandler)
public:
	using ::org::xml::sax::ext::LexicalHandler::comment;
	virtual void comment($String* comment) {}
};

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_ExtendedLexicalHandler_h_