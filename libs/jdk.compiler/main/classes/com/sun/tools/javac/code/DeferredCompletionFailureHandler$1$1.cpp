#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$1$1.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$1.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$DeferredCompleter.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $DeferredCompletionFailureHandler$1 = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$1;
using $DeferredCompletionFailureHandler$DeferredCompleter = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler$DeferredCompleter;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void DeferredCompletionFailureHandler$1$1::init$($DeferredCompletionFailureHandler$1* this$1, $Symbol$Completer* origCompleter) {
	$set(this, this$1, this$1);
	$DeferredCompletionFailureHandler$DeferredCompleter::init$(this$1->this$0, origCompleter);
}

void DeferredCompletionFailureHandler$1$1::complete($Symbol* sym) {
	$nc(this->this$1->class2Flip)->remove(sym);
	$DeferredCompletionFailureHandler$DeferredCompleter::complete(sym);
}

DeferredCompletionFailureHandler$1$1::DeferredCompletionFailureHandler$1$1() {
}

$Class* DeferredCompletionFailureHandler$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler$1;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredCompletionFailureHandler$1$1, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler$1;Lcom/sun/tools/javac/code/Symbol$Completer;)V", nullptr, 0, $method(DeferredCompletionFailureHandler$1$1, init$, void, $DeferredCompletionFailureHandler$1*, $Symbol$Completer*)},
		{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $virtualMethod(DeferredCompletionFailureHandler$1$1, complete, void, $Symbol*), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.DeferredCompletionFailureHandler$1",
		"classSymbolCompleteFailed",
		"(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$Completer;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$1$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$DeferredCompleter", "com.sun.tools.javac.code.DeferredCompletionFailureHandler", "DeferredCompleter", $PRIVATE},
		{"com.sun.tools.javac.code.Symbol$ClassSymbol", "com.sun.tools.javac.code.Symbol", "ClassSymbol", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Symbol$Completer", "com.sun.tools.javac.code.Symbol", "Completer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.DeferredCompletionFailureHandler$1$1",
		"com.sun.tools.javac.code.DeferredCompletionFailureHandler$DeferredCompleter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.DeferredCompletionFailureHandler"
	};
	$loadClass(DeferredCompletionFailureHandler$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredCompletionFailureHandler$1$1);
	});
	return class$;
}

$Class* DeferredCompletionFailureHandler$1$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com