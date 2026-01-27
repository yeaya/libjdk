#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_RelativeLocationPath_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_RelativeLocationPath_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.RelativeLocationPath
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.Expression

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

class RelativeLocationPath : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression {
	$class(RelativeLocationPath, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression)
public:
	RelativeLocationPath();
	void init$();
	virtual int32_t getAxis() {return 0;}
	virtual void setAxis(int32_t axis) {}
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_RelativeLocationPath_h_