#ifndef _javax_xml_transform_sax_TransformerHandler_h_
#define _javax_xml_transform_sax_TransformerHandler_h_
//$ interface javax.xml.transform.sax.TransformerHandler
//$ extends org.xml.sax.ContentHandler,org.xml.sax.ext.LexicalHandler,org.xml.sax.DTDHandler

#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>

namespace javax {
	namespace xml {
		namespace transform {
			class Result;
			class Transformer;
		}
	}
}

namespace javax {
	namespace xml {
		namespace transform {
			namespace sax {

class $import TransformerHandler : public ::org::xml::sax::ContentHandler, public ::org::xml::sax::ext::LexicalHandler, public ::org::xml::sax::DTDHandler {
	$interface(TransformerHandler, $NO_CLASS_INIT, ::org::xml::sax::ContentHandler, ::org::xml::sax::ext::LexicalHandler, ::org::xml::sax::DTDHandler)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* getSystemId() {return nullptr;}
	virtual ::javax::xml::transform::Transformer* getTransformer() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual void setResult(::javax::xml::transform::Result* result) {}
	virtual void setSystemId($String* systemID) {}
	virtual $String* toString() override;
};

			} // sax
		} // transform
	} // xml
} // javax

#endif // _javax_xml_transform_sax_TransformerHandler_h_