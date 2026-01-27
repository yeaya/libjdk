#ifndef _com_sun_org_apache_xalan_internal_xsltc_compiler_XPathLexer_h_
#define _com_sun_org_apache_xalan_internal_xsltc_compiler_XPathLexer_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.compiler.XPathLexer
//$ extends com.sun.java_cup.internal.runtime.Scanner

#include <com/sun/java_cup/internal/runtime/Scanner.h>
#include <java/lang/Array.h>

#pragma push_macro("YYEOF")
#undef YYEOF
#pragma push_macro("YYINITIAL")
#undef YYINITIAL
#pragma push_macro("YY_BOL")
#undef YY_BOL
#pragma push_macro("YY_BUFFER_SIZE")
#undef YY_BUFFER_SIZE
#pragma push_macro("YY_END")
#undef YY_END
#pragma push_macro("YY_EOF")
#undef YY_EOF
#pragma push_macro("YY_E_INTERNAL")
#undef YY_E_INTERNAL
#pragma push_macro("YY_E_MATCH")
#undef YY_E_MATCH
#pragma push_macro("YY_F")
#undef YY_F
#pragma push_macro("YY_NOT_ACCEPT")
#undef YY_NOT_ACCEPT
#pragma push_macro("YY_NO_ANCHOR")
#undef YY_NO_ANCHOR
#pragma push_macro("YY_NO_STATE")
#undef YY_NO_STATE
#pragma push_macro("YY_START")
#undef YY_START

namespace com {
	namespace sun {
		namespace java_cup {
			namespace internal {
				namespace runtime {
					class Symbol;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class BufferedReader;
		class InputStream;
		class Reader;
	}
}
namespace java {
	namespace lang {
		class Double;
		class Long;
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

class XPathLexer : public ::com::sun::java_cup::internal::runtime::Scanner {
	$class(XPathLexer, 0, ::com::sun::java_cup::internal::runtime::Scanner)
public:
	XPathLexer();
	void init$(::java::io::Reader* reader);
	void init$(::java::io::InputStream* instream);
	void init$();
	virtual ::com::sun::java_cup::internal::runtime::Symbol* disambiguateAxisOrFunction(int32_t ss);
	virtual ::com::sun::java_cup::internal::runtime::Symbol* disambiguateOperator(int32_t ss);
	virtual void initialize();
	static bool isWhitespace(int32_t c);
	virtual ::com::sun::java_cup::internal::runtime::Symbol* newSymbol(int32_t ss);
	virtual ::com::sun::java_cup::internal::runtime::Symbol* newSymbol(int32_t ss, $String* value);
	virtual ::com::sun::java_cup::internal::runtime::Symbol* newSymbol(int32_t ss, ::java::lang::Long* value);
	virtual ::com::sun::java_cup::internal::runtime::Symbol* newSymbol(int32_t ss, ::java::lang::Double* value);
	virtual ::com::sun::java_cup::internal::runtime::Symbol* next_token() override;
	static $Array<int32_t, 2>* unpackFromString(int32_t size1, int32_t size2, $String* st);
	int32_t yy_advance();
	$chars* yy_double($chars* buf);
	void yy_error(int32_t code, bool fatal);
	void yy_mark_end();
	void yy_mark_start();
	void yy_move_end();
	void yy_to_mark();
	void yybegin(int32_t state);
	int32_t yylength();
	$String* yytext();
	static const int32_t YY_BUFFER_SIZE = 512;
	static const int32_t YY_F = (-1);
	static const int32_t YY_NO_STATE = (-1);
	static const int32_t YY_NOT_ACCEPT = 0;
	static const int32_t YY_START = 1;
	static const int32_t YY_END = 2;
	static const int32_t YY_NO_ANCHOR = 4;
	static const int32_t YY_BOL = 0x00010000;
	static const int32_t YY_EOF = 0x00010001;
	static const int32_t YYEOF = (-1);
	int32_t last = 0;
	int32_t beforeLast = 0;
	::java::io::BufferedReader* yy_reader = nullptr;
	int32_t yy_buffer_index = 0;
	int32_t yy_buffer_read = 0;
	int32_t yy_buffer_start = 0;
	int32_t yy_buffer_end = 0;
	$chars* yy_buffer = nullptr;
	bool yy_at_bol = false;
	int32_t yy_lexical_state = 0;
	bool yy_eof_done = false;
	static const int32_t YYINITIAL = 0;
	$ints* yy_state_dtrans = nullptr;
	bool yy_last_was_cr = false;
	static const int32_t YY_E_INTERNAL = 0;
	static const int32_t YY_E_MATCH = 1;
	$StringArray* yy_error_string = nullptr;
	$ints* yy_acpt = nullptr;
	static $ints* yy_cmap;
	static $ints* yy_rmap;
	static $Array<int32_t, 2>* yy_nxt;
};

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("YYEOF")
#pragma pop_macro("YYINITIAL")
#pragma pop_macro("YY_BOL")
#pragma pop_macro("YY_BUFFER_SIZE")
#pragma pop_macro("YY_END")
#pragma pop_macro("YY_EOF")
#pragma pop_macro("YY_E_INTERNAL")
#pragma pop_macro("YY_E_MATCH")
#pragma pop_macro("YY_F")
#pragma pop_macro("YY_NOT_ACCEPT")
#pragma pop_macro("YY_NO_ANCHOR")
#pragma pop_macro("YY_NO_STATE")
#pragma pop_macro("YY_START")

#endif // _com_sun_org_apache_xalan_internal_xsltc_compiler_XPathLexer_h_