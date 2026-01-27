#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_ExtendedSAX_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_ExtendedSAX_h_
//$ interface com.sun.org.apache.xalan.internal.xsltc.dom.ExtendedSAX
//$ extends org.xml.sax.ContentHandler,org.xml.sax.ext.LexicalHandler,org.xml.sax.DTDHandler,org.xml.sax.ext.DeclHandler

#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/ext/DeclHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

class ExtendedSAX : public ::org::xml::sax::ContentHandler, public ::org::xml::sax::ext::LexicalHandler, public ::org::xml::sax::DTDHandler, public ::org::xml::sax::ext::DeclHandler {
	$interface(ExtendedSAX, $NO_CLASS_INIT, ::org::xml::sax::ContentHandler, ::org::xml::sax::ext::LexicalHandler, ::org::xml::sax::DTDHandler, ::org::xml::sax::ext::DeclHandler)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_ExtendedSAX_h_