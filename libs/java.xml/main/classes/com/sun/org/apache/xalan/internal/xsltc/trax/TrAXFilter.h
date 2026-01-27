#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_TrAXFilter_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_TrAXFilter_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.TrAXFilter
//$ extends org.xml.sax.helpers.XMLFilterImpl

#include <org/xml/sax/helpers/XMLFilterImpl.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {
								class TransformerHandlerImpl;
								class TransformerImpl;
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
		namespace transform {
			class ErrorListener;
			class Templates;
			class Transformer;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
			class InputSource;
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

class TrAXFilter : public ::org::xml::sax::helpers::XMLFilterImpl {
	$class(TrAXFilter, $NO_CLASS_INIT, ::org::xml::sax::helpers::XMLFilterImpl)
public:
	TrAXFilter();
	void init$(::javax::xml::transform::Templates* templates);
	void createParent();
	virtual ::javax::xml::transform::Transformer* getTransformer();
	virtual void parse(::org::xml::sax::InputSource* input) override;
	virtual void parse($String* systemId) override;
	virtual void setContentHandler(::org::xml::sax::ContentHandler* handler) override;
	virtual void setErrorListener(::javax::xml::transform::ErrorListener* handler);
	::javax::xml::transform::Templates* _templates = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerImpl* _transformer = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerHandlerImpl* _transformerHandler = nullptr;
	bool _overrideDefaultParser = false;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_TrAXFilter_h_