#ifndef _javax_xml_transform_sax_SAXResult_h_
#define _javax_xml_transform_sax_SAXResult_h_
//$ class javax.xml.transform.sax.SAXResult
//$ extends javax.xml.transform.Result

#include <javax/xml/transform/Result.h>

#pragma push_macro("FEATURE")
#undef FEATURE

namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
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

namespace javax {
	namespace xml {
		namespace transform {
			namespace sax {

class $import SAXResult : public ::javax::xml::transform::Result {
	$class(SAXResult, 0, ::javax::xml::transform::Result)
public:
	SAXResult();
	void init$();
	void init$(::org::xml::sax::ContentHandler* handler);
	virtual ::org::xml::sax::ContentHandler* getHandler();
	virtual ::org::xml::sax::ext::LexicalHandler* getLexicalHandler();
	virtual $String* getSystemId() override;
	virtual void setHandler(::org::xml::sax::ContentHandler* handler);
	virtual void setLexicalHandler(::org::xml::sax::ext::LexicalHandler* handler);
	virtual void setSystemId($String* systemId) override;
	static $String* FEATURE;
	::org::xml::sax::ContentHandler* handler = nullptr;
	::org::xml::sax::ext::LexicalHandler* lexhandler = nullptr;
	$String* systemId = nullptr;
};

			} // sax
		} // transform
	} // xml
} // javax

#pragma pop_macro("FEATURE")

#endif // _javax_xml_transform_sax_SAXResult_h_