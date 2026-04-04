#include <com/sun/org/apache/xerces/internal/xpointer/XPointerHandler$1.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xpointer/XPointerHandler$Scanner.h>
#include <com/sun/org/apache/xerces/internal/xpointer/XPointerHandler$Tokens.h>
#include <com/sun/org/apache/xerces/internal/xpointer/XPointerHandler.h>
#include <jcpp.h>

#undef XPTRTOKEN_CLOSE_PAREN
#undef XPTRTOKEN_OPEN_PAREN
#undef XPTRTOKEN_SCHEMEDATA
#undef XPTRTOKEN_SCHEMENAME
#undef XPTRTOKEN_SHORTHAND

using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XPointerHandler = ::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler;
using $XPointerHandler$Scanner = ::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler$Scanner;
using $XPointerHandler$Tokens = ::com::sun::org::apache::xerces::internal::xpointer::XPointerHandler$Tokens;
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
						namespace xpointer {

void XPointerHandler$1::init$($XPointerHandler* this$0, $SymbolTable* symbolTable) {
	$set(this, this$0, this$0);
	$XPointerHandler$Scanner::init$(this$0, symbolTable);
}

void XPointerHandler$1::addToken($XPointerHandler$Tokens* tokens, int32_t token) {
	$useLocalObjectStack();
	if (token == $XPointerHandler$Tokens::XPTRTOKEN_OPEN_PAREN || token == $XPointerHandler$Tokens::XPTRTOKEN_CLOSE_PAREN || token == $XPointerHandler$Tokens::XPTRTOKEN_SCHEMENAME || token == $XPointerHandler$Tokens::XPTRTOKEN_SCHEMEDATA || token == $XPointerHandler$Tokens::XPTRTOKEN_SHORTHAND) {
		$XPointerHandler$Scanner::addToken(tokens, token);
		return;
	}
	this->this$0->reportError("InvalidXPointerToken"_s, $$new($ObjectArray, {$($nc(tokens)->getTokenString(token))}));
}

XPointerHandler$1::XPointerHandler$1() {
}

$Class* XPointerHandler$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xerces/internal/xpointer/XPointerHandler;", nullptr, $FINAL | $SYNTHETIC, $field(XPointerHandler$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/xpointer/XPointerHandler;Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, 0, $method(XPointerHandler$1, init$, void, $XPointerHandler*, $SymbolTable*)},
		{"addToken", "(Lcom/sun/org/apache/xerces/internal/xpointer/XPointerHandler$Tokens;I)V", nullptr, $PROTECTED, $virtualMethod(XPointerHandler$1, addToken, void, $XPointerHandler$Tokens*, int32_t), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xerces.internal.xpointer.XPointerHandler",
		"parseXPointer",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.xpointer.XPointerHandler$1", nullptr, nullptr, 0},
		{"com.sun.org.apache.xerces.internal.xpointer.XPointerHandler$Scanner", "com.sun.org.apache.xerces.internal.xpointer.XPointerHandler", "Scanner", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.xpointer.XPointerHandler$1",
		"com.sun.org.apache.xerces.internal.xpointer.XPointerHandler$Scanner",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.xpointer.XPointerHandler"
	};
	$loadClass(XPointerHandler$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPointerHandler$1);
	});
	return class$;
}

$Class* XPointerHandler$1::class$ = nullptr;

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com