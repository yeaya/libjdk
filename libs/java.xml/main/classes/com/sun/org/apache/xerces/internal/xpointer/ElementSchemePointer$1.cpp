#include <com/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer$1.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer$Scanner.h>
#include <com/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer$Tokens.h>
#include <com/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer.h>
#include <jcpp.h>

#undef XPTRTOKEN_ELEM_CHILD
#undef XPTRTOKEN_ELEM_NCNAME

using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $ElementSchemePointer = ::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer;
using $ElementSchemePointer$Scanner = ::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer$Scanner;
using $ElementSchemePointer$Tokens = ::com::sun::org::apache::xerces::internal::xpointer::ElementSchemePointer$Tokens;
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

void ElementSchemePointer$1::init$($ElementSchemePointer* this$0, $SymbolTable* symbolTable) {
	$set(this, this$0, this$0);
	$ElementSchemePointer$Scanner::init$(this$0, symbolTable);
}

void ElementSchemePointer$1::addToken($ElementSchemePointer$Tokens* tokens, int32_t token) {
	$useLocalObjectStack();
	if (token == $ElementSchemePointer$Tokens::XPTRTOKEN_ELEM_CHILD || token == $ElementSchemePointer$Tokens::XPTRTOKEN_ELEM_NCNAME) {
		$ElementSchemePointer$Scanner::addToken(tokens, token);
		return;
	}
	this->this$0->reportError("InvalidElementSchemeToken"_s, $$new($ObjectArray, {$($nc(tokens)->getTokenString(token))}));
}

ElementSchemePointer$1::ElementSchemePointer$1() {
}

$Class* ElementSchemePointer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer;", nullptr, $FINAL | $SYNTHETIC, $field(ElementSchemePointer$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer;Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, 0, $method(ElementSchemePointer$1, init$, void, $ElementSchemePointer*, $SymbolTable*)},
		{"addToken", "(Lcom/sun/org/apache/xerces/internal/xpointer/ElementSchemePointer$Tokens;I)V", nullptr, $PROTECTED, $virtualMethod(ElementSchemePointer$1, addToken, void, $ElementSchemePointer$Tokens*, int32_t), "com.sun.org.apache.xerces.internal.xni.XNIException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer",
		"parseXPointer",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer$1", nullptr, nullptr, 0},
		{"com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer$Scanner", "com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer", "Scanner", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer$1",
		"com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer$Scanner",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.xpointer.ElementSchemePointer"
	};
	$loadClass(ElementSchemePointer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ElementSchemePointer$1);
	});
	return class$;
}

$Class* ElementSchemePointer$1::class$ = nullptr;

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com