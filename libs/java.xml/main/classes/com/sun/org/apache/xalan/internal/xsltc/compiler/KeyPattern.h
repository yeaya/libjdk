#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_KeyPattern_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_KeyPattern_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.KeyPattern
//$ extends com.sun.org.apache.xalan.internal.xsltc.compiler.IdKeyPattern

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/IdKeyPattern.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

class KeyPattern : public ::com::sun::org::apache::xalan::internal::xsltc::compiler::IdKeyPattern {
	$class(KeyPattern, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::compiler::IdKeyPattern)
public:
	KeyPattern();
	void init$($String* index, $String* value);
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_KeyPattern_h_