#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_TransformerImpl$MessageHandler_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_TransformerImpl$MessageHandler_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.TransformerImpl$MessageHandler
//$ extends com.sun.org.apache.xalan.internal.xsltc.runtime.MessageHandler

#include <com/sun/org/apache/xalan/internal/xsltc/runtime/MessageHandler.h>

namespace javax {
	namespace xml {
		namespace transform {
			class ErrorListener;
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

class TransformerImpl$MessageHandler : public ::com::sun::org::apache::xalan::internal::xsltc::runtime::MessageHandler {
	$class(TransformerImpl$MessageHandler, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::runtime::MessageHandler)
public:
	TransformerImpl$MessageHandler();
	void init$(::javax::xml::transform::ErrorListener* errorListener);
	virtual void displayMessage($String* msg) override;
	virtual ::javax::xml::transform::ErrorListener* getErrorListener() override;
	::javax::xml::transform::ErrorListener* _errorListener = nullptr;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_TransformerImpl$MessageHandler_h_