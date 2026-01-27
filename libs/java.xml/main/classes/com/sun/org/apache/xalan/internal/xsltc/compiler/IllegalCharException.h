#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_IllegalCharException_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_IllegalCharException_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.IllegalCharException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

class IllegalCharException : public ::java::lang::Exception {
	$class(IllegalCharException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	IllegalCharException();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0xF6BD7FC717D02FA6;
	IllegalCharException(const IllegalCharException& e);
	virtual void throw$() override;
	inline IllegalCharException* operator ->() {
		return (IllegalCharException*)throwing$;
	}
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_IllegalCharException_h_