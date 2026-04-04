#include <com/sun/tools/javac/code/Symbol$Completer.h>
#include <com/sun/tools/javac/code/Symbol$Completer$1.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <jcpp.h>

#undef NULL_COMPLETER

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$Completer$1 = ::com::sun::tools::javac::code::Symbol$Completer$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

Symbol$Completer* Symbol$Completer::NULL_COMPLETER = nullptr;

bool Symbol$Completer::isTerminal() {
	return false;
}

void Symbol$Completer::clinit$($Class* clazz) {
	$assignStatic(Symbol$Completer::NULL_COMPLETER, $new($Symbol$Completer$1));
}

$Class* Symbol$Completer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NULL_COMPLETER", "Lcom/sun/tools/javac/code/Symbol$Completer;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Symbol$Completer, NULL_COMPLETER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Symbol$Completer, complete, void, $Symbol*), "com.sun.tools.javac.code.Symbol$CompletionFailure"},
		{"isTerminal", "()Z", nullptr, $PUBLIC, $virtualMethod(Symbol$Completer, isTerminal, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Symbol$Completer", "com.sun.tools.javac.code.Symbol", "Completer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.code.Symbol$Completer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.code.Symbol$Completer",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Symbol"
	};
	$loadClass(Symbol$Completer, name, initialize, &classInfo$$, Symbol$Completer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Symbol$Completer);
	});
	return class$;
}

$Class* Symbol$Completer::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com