#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_StringStack_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_StringStack_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.StringStack
//$ extends java.util.Stack

#include <java/util/Stack.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

class StringStack : public ::java::util::Stack {
	$class(StringStack, $NO_CLASS_INIT, ::java::util::Stack)
public:
	StringStack();
	void init$();
	$String* peekString();
	$String* popString();
	$String* pushString($String* val);
	using ::java::util::Stack::toArray;
	static const int64_t serialVersionUID = (int64_t)0xEB16608AE5493836;
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

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_StringStack_h_