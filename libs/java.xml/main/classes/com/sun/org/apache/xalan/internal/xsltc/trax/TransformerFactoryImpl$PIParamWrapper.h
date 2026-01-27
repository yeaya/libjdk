#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_TransformerFactoryImpl$PIParamWrapper_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_TransformerFactoryImpl$PIParamWrapper_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.TransformerFactoryImpl$PIParamWrapper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

class TransformerFactoryImpl$PIParamWrapper : public ::java::lang::Object {
	$class(TransformerFactoryImpl$PIParamWrapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TransformerFactoryImpl$PIParamWrapper();
	void init$($String* media, $String* title, $String* charset);
	$String* _media = nullptr;
	$String* _title = nullptr;
	$String* _charset = nullptr;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_TransformerFactoryImpl$PIParamWrapper_h_