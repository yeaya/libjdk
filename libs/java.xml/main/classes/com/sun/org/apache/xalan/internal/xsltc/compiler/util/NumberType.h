#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_NumberType_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_NumberType_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.NumberType
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.util.Type

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

class NumberType : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type {
	$class(NumberType, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type)
public:
	NumberType();
	void init$();
	virtual bool isNumber() override;
	virtual bool isSimple() override;
};

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_NumberType_h_