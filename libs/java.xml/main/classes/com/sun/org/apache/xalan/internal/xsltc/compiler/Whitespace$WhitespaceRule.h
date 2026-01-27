#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_Whitespace$WhitespaceRule_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_Whitespace$WhitespaceRule_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.Whitespace$WhitespaceRule
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

class Whitespace$WhitespaceRule : public ::java::lang::Object {
	$class(Whitespace$WhitespaceRule, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Whitespace$WhitespaceRule();
	void init$(int32_t action, $String* element, int32_t precedence);
	int32_t compareTo(::com::sun::org::apache::xalan::internal::xsltc::compiler::Whitespace$WhitespaceRule* other);
	int32_t getAction();
	$String* getElement();
	$String* getNamespace();
	int32_t getPriority();
	int32_t getStrength();
	int32_t _action = 0;
	$String* _namespace = nullptr;
	$String* _element = nullptr;
	int32_t _type = 0;
	int32_t _priority = 0;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_Whitespace$WhitespaceRule_h_