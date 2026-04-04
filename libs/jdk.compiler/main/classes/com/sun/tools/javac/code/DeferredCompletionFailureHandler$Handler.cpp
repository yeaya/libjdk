#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler$Handler.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <jcpp.h>

using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$Completer = ::com::sun::tools::javac::code::Symbol$Completer;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$Class* DeferredCompletionFailureHandler$Handler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"classSymbolCompleteFailed", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$Completer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeferredCompletionFailureHandler$Handler, classSymbolCompleteFailed, void, $Symbol$ClassSymbol*, $Symbol$Completer*)},
		{"classSymbolRemoved", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeferredCompletionFailureHandler$Handler, classSymbolRemoved, void, $Symbol$ClassSymbol*)},
		{"handleAPICompletionFailure", "(Lcom/sun/tools/javac/code/Symbol$CompletionFailure;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeferredCompletionFailureHandler$Handler, handleAPICompletionFailure, void, $Symbol$CompletionFailure*)},
		{"install", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeferredCompletionFailureHandler$Handler, install, void)},
		{"uninstall", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DeferredCompletionFailureHandler$Handler, uninstall, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.DeferredCompletionFailureHandler$Handler", "com.sun.tools.javac.code.DeferredCompletionFailureHandler", "Handler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.code.DeferredCompletionFailureHandler$Handler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.DeferredCompletionFailureHandler"
	};
	$loadClass(DeferredCompletionFailureHandler$Handler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredCompletionFailureHandler$Handler);
	});
	return class$;
}

$Class* DeferredCompletionFailureHandler$Handler::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com