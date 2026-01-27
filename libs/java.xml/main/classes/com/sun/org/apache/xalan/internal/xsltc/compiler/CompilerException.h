#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_CompilerException_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_CompilerException_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.CompilerException
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

class CompilerException : public ::java::lang::Exception {
	$class(CompilerException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	CompilerException();
	void init$();
	void init$(::java::lang::Exception* e);
	void init$($String* message);
	virtual $String* getMessage() override;
	static const int64_t serialVersionUID = (int64_t)0x180CA366CDA21987;
	$String* _msg = nullptr;
	CompilerException(const CompilerException& e);
	virtual void throw$() override;
	inline CompilerException* operator ->() {
		return (CompilerException*)throwing$;
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

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_CompilerException_h_