#include <com/sun/org/apache/xalan/internal/xsltc/compiler/sym.h>

#include <jcpp.h>

#undef ANCESTOR
#undef ANCESTORORSELF
#undef AND
#undef ATSIGN
#undef ATTRIBUTE
#undef CHILD
#undef COMMA
#undef COMMENT
#undef DCOLON
#undef DDOT
#undef DESCENDANT
#undef DESCENDANTORSELF
#undef DIV
#undef DOLLAR
#undef DOT
#undef DSLASH
#undef EOF
#undef EQ
#undef EXPRESSION
#undef FOLLOWING
#undef FOLLOWINGSIBLING
#undef GE
#undef GT
#undef ID
#undef INT
#undef KEY
#undef LBRACK
#undef LE
#undef LPAREN
#undef LT
#undef MINUS
#undef MOD
#undef NAMESPACE
#undef NE
#undef NODE
#undef OR
#undef PARENT
#undef PATTERN
#undef PI
#undef PIPARAM
#undef PLUS
#undef PRECEDING
#undef PRECEDINGSIBLING
#undef QNAME
#undef RBRACK
#undef REAL
#undef RPAREN
#undef SELF
#undef SLASH
#undef STAR
#undef TEXT
#undef VBAR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _sym_FieldInfo_[] = {
	{"Literal", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, Literal)},
	{"GE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, GE)},
	{"NAMESPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, NAMESPACE)},
	{"SLASH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, SLASH)},
	{"PI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, PI)},
	{"COMMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, COMMENT)},
	{"PIPARAM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, PIPARAM)},
	{"FOLLOWINGSIBLING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, FOLLOWINGSIBLING)},
	{"ATSIGN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, ATSIGN)},
	{"DSLASH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, DSLASH)},
	{"LPAREN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, LPAREN)},
	{"EXPRESSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, EXPRESSION)},
	{"INT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, INT)},
	{"CHILD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, CHILD)},
	{"MINUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, MINUS)},
	{"STAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, STAR)},
	{"DESCENDANTORSELF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, DESCENDANTORSELF)},
	{"RPAREN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, RPAREN)},
	{"AND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, AND)},
	{"LT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, LT)},
	{"OR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, OR)},
	{"COMMA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, COMMA)},
	{"DDOT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, DDOT)},
	{"DIV", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, DIV)},
	{"PLUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, PLUS)},
	{"DOT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, DOT)},
	{"ID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, ID)},
	{"LE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, LE)},
	{"QNAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, QNAME)},
	{"DESCENDANT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, DESCENDANT)},
	{"PRECEDINGSIBLING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, PRECEDINGSIBLING)},
	{"EOF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, EOF)},
	{"error", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, error)},
	{"SELF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, SELF)},
	{"VBAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, VBAR)},
	{"MOD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, MOD)},
	{"ANCESTORORSELF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, ANCESTORORSELF)},
	{"PRECEDING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, PRECEDING)},
	{"EQ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, EQ)},
	{"PATTERN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, PATTERN)},
	{"LBRACK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, LBRACK)},
	{"REAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, REAL)},
	{"ANCESTOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, ANCESTOR)},
	{"RBRACK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, RBRACK)},
	{"DCOLON", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, DCOLON)},
	{"DOLLAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, DOLLAR)},
	{"NE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, NE)},
	{"PARENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, PARENT)},
	{"FOLLOWING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, FOLLOWING)},
	{"KEY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, KEY)},
	{"TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, TEXT)},
	{"ATTRIBUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, ATTRIBUTE)},
	{"GT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, GT)},
	{"NODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(sym, NODE)},
	{}
};

$MethodInfo _sym_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(sym, init$, void)},
	{}
};

$ClassInfo _sym_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.sym",
	"java.lang.Object",
	nullptr,
	_sym_FieldInfo_,
	_sym_MethodInfo_
};

$Object* allocate$sym($Class* clazz) {
	return $of($alloc(sym));
}

void sym::init$() {
}

sym::sym() {
}

$Class* sym::load$($String* name, bool initialize) {
	$loadClass(sym, name, initialize, &_sym_ClassInfo_, allocate$sym);
	return class$;
}

$Class* sym::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com