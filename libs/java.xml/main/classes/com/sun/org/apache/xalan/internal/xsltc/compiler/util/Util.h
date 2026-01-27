#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_util_Util_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_util_Util_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.util.Util
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TRACE1")
#undef TRACE1
#pragma push_macro("TRACE2")
#undef TRACE2
#pragma push_macro("TRACE3")
#undef TRACE3

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {
							class Type;
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

class Util : public ::java::lang::Object {
	$class(Util, 0, ::java::lang::Object)
public:
	Util();
	void init$();
	static void TRACE1();
	static void TRACE2();
	static void TRACE3();
	static $String* baseName($String* name);
	static $String* escape($String* input);
	static ::com::sun::org::apache::bcel::internal::generic::Type* getJCRefType($String* signature);
	static $String* getLocalName($String* qname);
	static $String* getPrefix($String* qname);
	static $String* internalName($String* cname);
	static bool isLiteral($String* str);
	static bool isValidQNames($String* str);
	static $String* noExtName($String* name);
	static $String* pathName($String* name);
	static void println($String* s);
	static void println(char16_t ch);
	static $String* replace($String* base, char16_t ch, $String* str);
	static $String* replace($String* base, $String* delim, $StringArray* str);
	static $String* toJavaName($String* name);
	static char16_t filesep;
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

#pragma pop_macro("TRACE1")
#pragma pop_macro("TRACE2")
#pragma pop_macro("TRACE3")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_util_Util_h_