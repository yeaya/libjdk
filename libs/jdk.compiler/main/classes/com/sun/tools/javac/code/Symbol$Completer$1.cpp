#include <com/sun/tools/javac/code/Symbol$Completer$1.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Symbol$Completer$1::init$() {
}

void Symbol$Completer$1::complete($Symbol* sym) {
}

bool Symbol$Completer$1::isTerminal() {
	return true;
}

Symbol$Completer$1::Symbol$Completer$1() {
}

$Class* Symbol$Completer$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Symbol$Completer$1, init$, void)},
		{"complete", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $virtualMethod(Symbol$Completer$1, complete, void, $Symbol*)},
		{"isTerminal", "()Z", nullptr, $PUBLIC, $virtualMethod(Symbol$Completer$1, isTerminal, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Symbol$Completer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Symbol$Completer", "com.sun.tools.javac.code.Symbol", "Completer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.code.Symbol$Completer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Symbol$Completer$1",
		"java.lang.Object",
		"com.sun.tools.javac.code.Symbol$Completer",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Symbol"
	};
	$loadClass(Symbol$Completer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Symbol$Completer$1);
	});
	return class$;
}

$Class* Symbol$Completer$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com