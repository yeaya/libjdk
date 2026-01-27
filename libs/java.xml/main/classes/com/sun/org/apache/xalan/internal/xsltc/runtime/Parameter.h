#ifndef _com_sun_org_apache_xalan_internal_xsltc_runtime_Parameter_h_
#define _com_sun_org_apache_xalan_internal_xsltc_runtime_Parameter_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.runtime.Parameter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

class Parameter : public ::java::lang::Object {
	$class(Parameter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Parameter();
	void init$($String* name, Object$* value);
	void init$($String* name, Object$* value, bool isDefault);
	$String* _name = nullptr;
	$Object* _value = nullptr;
	bool _isDefault = false;
};

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_runtime_Parameter_h_