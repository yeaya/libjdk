#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_StAXEvent2SAX$1_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_StAXEvent2SAX$1_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.StAXEvent2SAX$1
//$ extends org.xml.sax.ext.Locator2

#include <org/xml/sax/ext/Locator2.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {
								class StAXEvent2SAX;
							}
						}
					}
				}
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			namespace events {
				class XMLEvent;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

class StAXEvent2SAX$1 : public ::org::xml::sax::ext::Locator2 {
	$class(StAXEvent2SAX$1, $NO_CLASS_INIT, ::org::xml::sax::ext::Locator2)
public:
	StAXEvent2SAX$1();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::trax::StAXEvent2SAX* this$0, ::javax::xml::stream::events::XMLEvent* val$event);
	virtual int32_t getColumnNumber() override;
	virtual $String* getEncoding() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getPublicId() override;
	virtual $String* getSystemId() override;
	virtual $String* getXMLVersion() override;
	::com::sun::org::apache::xalan::internal::xsltc::trax::StAXEvent2SAX* this$0 = nullptr;
	::javax::xml::stream::events::XMLEvent* val$event = nullptr;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_StAXEvent2SAX$1_h_