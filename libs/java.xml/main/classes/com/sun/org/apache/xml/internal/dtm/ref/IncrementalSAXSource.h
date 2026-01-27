#ifndef _com_sun_org_apache_xml_internal_dtm_ref_IncrementalSAXSource_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_IncrementalSAXSource_h_
//$ interface com.sun.org.apache.xml.internal.dtm.ref.IncrementalSAXSource
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
			class DTDHandler;
			class InputSource;
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
						namespace dtm {
							namespace ref {

class IncrementalSAXSource : public ::java::lang::Object {
	$interface(IncrementalSAXSource, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* deliverMoreNodes(bool parsemore) {return nullptr;}
	virtual void setContentHandler(::org::xml::sax::ContentHandler* handler) {}
	virtual void setDTDHandler(::org::xml::sax::DTDHandler* handler) {}
	virtual void setLexicalHandler(::org::xml::sax::ext::LexicalHandler* handler) {}
	virtual void startParse(::org::xml::sax::InputSource* source) {}
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_IncrementalSAXSource_h_