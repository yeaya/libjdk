#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_FunctionCall$JavaType_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_FunctionCall$JavaType_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall$JavaType
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

class FunctionCall$JavaType : public ::java::lang::Object {
	$class(FunctionCall$JavaType, $NO_CLASS_INIT, ::java::lang::Object)
public:
	FunctionCall$JavaType();
	void init$($Class* type, int32_t distance);
	virtual bool equals(Object$* query) override;
	virtual int32_t hashCode() override;
	$Class* type = nullptr;
	int32_t distance = 0;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_FunctionCall$JavaType_h_