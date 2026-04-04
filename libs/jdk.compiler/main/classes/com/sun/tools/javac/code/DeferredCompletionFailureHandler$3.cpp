#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$3.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <jcpp.h>

using $DeferredCompletionFailureHandler = ::com::sun::tools::javac::code::DeferredCompletionFailureHandler;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
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

void DeferredCompletionFailureHandler$3::init$($DeferredCompletionFailureHandler* this$0) {
	$set(this, this$0, this$0);
}

void DeferredCompletionFailureHandler$3::install() {
}

void DeferredCompletionFailureHandler$3::handleAPICompletionFailure($Symbol$CompletionFailure* cf) {
	$throw(cf);
}

void DeferredCompletionFailureHandler$3::classSymbolCompleteFailed($Symbol$ClassSymbol* sym, $Symbol$Completer* origCompleter) {
}

void DeferredCompletionFailureHandler$3::classSymbolRemoved($Symbol$ClassSymbol* sym) {
}

void DeferredCompletionFailureHandler$3::uninstall() {
}

DeferredCompletionFailureHandler$3::DeferredCompletionFailureHandler$3() {
}

$Class* DeferredCompletionFailureHandler$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;", nullptr, $FINAL | $SYNTHETIC, $field(DeferredCompletionFailureHandler$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/DeferredCompletionFailureHandler;)V", nullptr, 0, $method(DeferredCompletionFailureHandler$3, init$, void, $DeferredCompletionFailureHandler*)},
		{"classSymbolCompleteFailed", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$Completer;)V", nullptr, $PUBLIC, $virtualMethod(DeferredCompletionFailureHandler$3, classSymbolCompleteFailed, void, $Symbol$ClassSymbol*, $Symbol$Completer*)},
		{"classSymbolRemoved", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC, $virtualMethod(DeferredCompletionFailureHandler$3, classSymbolRemoved, void, $Symbol$ClassSymbol*)},
		{"handleAPICompletionFailure", "(Lcom/sun/tools/javac/code/Symbol$CompletionFailure;)V", nullptr, $PUBLIC, $virtualMethod(DeferredCompletionFailureHandler$3, handleAPICompletionFailure, void, $Symbol$CompletionFailure*)},
		{"install", "()V", nullptr, $PUBLIC, $virtualMethod(DeferredCompletionFailureHandler$3, install, void)},
		{"uninstall", "()V", nullptr, $PUBLIC, $virtualMethod(DeferredCompletionFailureHandler$3, uninstall, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.DeferredCompletionFailureHandler",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$3", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$Handler", "com.sun.tools.javac.code.DeferredCompletionFailureHandler", "Handler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.DeferredCompletionFailureHandler$3",
		"java.lang.Object",
		"com.sun.tools.javac.code.DeferredCompletionFailureHandler$Handler",
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
	$loadClass(DeferredCompletionFailureHandler$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredCompletionFailureHandler$3);
	});
	return class$;
}

$Class* DeferredCompletionFailureHandler$3::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com