#ifndef _org_xml_sax_ext_DefaultHandler2_h_
#define _org_xml_sax_ext_DefaultHandler2_h_
//$ class org.xml.sax.ext.DefaultHandler2
//$ extends org.xml.sax.helpers.DefaultHandler
//$ implements org.xml.sax.ext.LexicalHandler,org.xml.sax.ext.DeclHandler,org.xml.sax.ext.EntityResolver2

#include <java/lang/Array.h>
#include <org/xml/sax/ext/DeclHandler.h>
#include <org/xml/sax/ext/EntityResolver2.h>
#include <org/xml/sax/ext/LexicalHandler.h>
#include <org/xml/sax/helpers/DefaultHandler.h>

namespace org {
	namespace xml {
		namespace sax {
			class InputSource;
		}
	}
}

namespace org {
	namespace xml {
		namespace sax {
			namespace ext {

class $export DefaultHandler2 : public ::org::xml::sax::helpers::DefaultHandler, public ::org::xml::sax::ext::LexicalHandler, public ::org::xml::sax::ext::DeclHandler, public ::org::xml::sax::ext::EntityResolver2 {
	$class(DefaultHandler2, $NO_CLASS_INIT, ::org::xml::sax::helpers::DefaultHandler, ::org::xml::sax::ext::LexicalHandler, ::org::xml::sax::ext::DeclHandler, ::org::xml::sax::ext::EntityResolver2)
public:
	DefaultHandler2();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void attributeDecl($String* eName, $String* aName, $String* type, $String* mode, $String* value) override;
	virtual void comment($chars* ch, int32_t start, int32_t length) override;
	virtual void elementDecl($String* name, $String* model) override;
	virtual void endCDATA() override;
	virtual void endDTD() override;
	virtual void endEntity($String* name) override;
	virtual void externalEntityDecl($String* name, $String* publicId, $String* systemId) override;
	virtual ::org::xml::sax::InputSource* getExternalSubset($String* name, $String* baseURI) override;
	virtual void internalEntityDecl($String* name, $String* value) override;
	virtual ::org::xml::sax::InputSource* resolveEntity($String* name, $String* publicId, $String* baseURI, $String* systemId) override;
	virtual ::org::xml::sax::InputSource* resolveEntity($String* publicId, $String* systemId) override;
	virtual void startCDATA() override;
	virtual void startDTD($String* name, $String* publicId, $String* systemId) override;
	virtual void startEntity($String* name) override;
	virtual $String* toString() override;
};

			} // ext
		} // sax
	} // xml
} // org

#endif // _org_xml_sax_ext_DefaultHandler2_h_