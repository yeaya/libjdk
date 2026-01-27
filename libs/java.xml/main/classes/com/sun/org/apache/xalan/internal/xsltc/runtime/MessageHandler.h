#ifndef _com_sun_org_apache_xalan_internal_xsltc_runtime_MessageHandler_h_
#define _com_sun_org_apache_xalan_internal_xsltc_runtime_MessageHandler_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.runtime.MessageHandler
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
							namespace runtime {

class MessageHandler : public ::java::lang::Object {
	$class(MessageHandler, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MessageHandler();
	void init$();
	virtual void displayMessage($String* msg);
	virtual ::javax::xml::transform::ErrorListener* getErrorListener();
};

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_runtime_MessageHandler_h_