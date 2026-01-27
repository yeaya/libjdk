#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$1.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Scanner.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Tokens.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPathException.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <jcpp.h>

#undef EXPRTOKEN_ATSIGN
#undef EXPRTOKEN_AXISNAME_ATTRIBUTE
#undef EXPRTOKEN_AXISNAME_CHILD
#undef EXPRTOKEN_DOUBLE_COLON
#undef EXPRTOKEN_NAMETEST_ANY
#undef EXPRTOKEN_NAMETEST_NAMESPACE
#undef EXPRTOKEN_NAMETEST_QNAME
#undef EXPRTOKEN_OPERATOR_DOUBLE_SLASH
#undef EXPRTOKEN_OPERATOR_SLASH
#undef EXPRTOKEN_OPERATOR_UNION
#undef EXPRTOKEN_PERIOD

using $XPath = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath;
using $XPath$Scanner = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Scanner;
using $XPath$Tokens = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Tokens;
using $XPathException = ::com::sun::org::apache::xerces::internal::impl::xpath::XPathException;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {

$FieldInfo _XPath$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath;", nullptr, $FINAL | $SYNTHETIC, $field(XPath$1, this$0)},
	{}
};

$MethodInfo _XPath$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath;Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, 0, $method(XPath$1, init$, void, $XPath*, $SymbolTable*)},
	{"addToken", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$Tokens;I)V", nullptr, $PROTECTED, $virtualMethod(XPath$1, addToken, void, $XPath$Tokens*, int32_t), "com.sun.org.apache.xerces.internal.impl.xpath.XPathException"},
	{}
};

$EnclosingMethodInfo _XPath$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xerces.internal.impl.xpath.XPath",
	"parseExpression",
	"(Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;)[Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$LocationPath;"
};

$InnerClassInfo _XPath$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.XPath$1", nullptr, nullptr, 0},
	{"com.sun.org.apache.xerces.internal.impl.xpath.XPath$Scanner", "com.sun.org.apache.xerces.internal.impl.xpath.XPath", "Scanner", $PRIVATE | $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.XPath$LocationPath", "com.sun.org.apache.xerces.internal.impl.xpath.XPath", "LocationPath", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XPath$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.XPath$1",
	"com.sun.org.apache.xerces.internal.impl.xpath.XPath$Scanner",
	nullptr,
	_XPath$1_FieldInfo_,
	_XPath$1_MethodInfo_,
	nullptr,
	&_XPath$1_EnclosingMethodInfo_,
	_XPath$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.XPath"
};

$Object* allocate$XPath$1($Class* clazz) {
	return $of($alloc(XPath$1));
}

void XPath$1::init$($XPath* this$0, $SymbolTable* symbolTable) {
	$set(this, this$0, this$0);
	$XPath$Scanner::init$(symbolTable);
}

void XPath$1::addToken($XPath$Tokens* tokens, int32_t token) {
	if (token == $XPath$Tokens::EXPRTOKEN_ATSIGN || token == $XPath$Tokens::EXPRTOKEN_AXISNAME_ATTRIBUTE || token == $XPath$Tokens::EXPRTOKEN_NAMETEST_QNAME || token == $XPath$Tokens::EXPRTOKEN_OPERATOR_SLASH || token == $XPath$Tokens::EXPRTOKEN_PERIOD || token == $XPath$Tokens::EXPRTOKEN_NAMETEST_ANY || token == $XPath$Tokens::EXPRTOKEN_NAMETEST_NAMESPACE || token == $XPath$Tokens::EXPRTOKEN_OPERATOR_DOUBLE_SLASH || token == $XPath$Tokens::EXPRTOKEN_OPERATOR_UNION || token == $XPath$Tokens::EXPRTOKEN_AXISNAME_CHILD || token == $XPath$Tokens::EXPRTOKEN_DOUBLE_COLON) {
		$XPath$Scanner::addToken(tokens, token);
		return;
	}
	$throwNew($XPathException, "c-general-xpath"_s);
}

XPath$1::XPath$1() {
}

$Class* XPath$1::load$($String* name, bool initialize) {
	$loadClass(XPath$1, name, initialize, &_XPath$1_ClassInfo_, allocate$XPath$1);
	return class$;
}

$Class* XPath$1::class$ = nullptr;

							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com