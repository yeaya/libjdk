#include <com/sun/tools/javac/util/Dependencies$DummyDependencies.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Dependencies$CompletionCause.h>
#include <com/sun/tools/javac/util/Dependencies.h>
#include <jcpp.h>

using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Context = ::com::sun::tools::javac::util::Context;
using $Dependencies = ::com::sun::tools::javac::util::Dependencies;
using $Dependencies$CompletionCause = ::com::sun::tools::javac::util::Dependencies$CompletionCause;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void Dependencies$DummyDependencies::init$($Context* context) {
	$Dependencies::init$(context);
}

void Dependencies$DummyDependencies::push($Symbol$ClassSymbol* s, $Dependencies$CompletionCause* phase) {
}

void Dependencies$DummyDependencies::pop() {
}

Dependencies$DummyDependencies::Dependencies$DummyDependencies() {
}

$Class* Dependencies$DummyDependencies::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PRIVATE, $method(Dependencies$DummyDependencies, init$, void, $Context*)},
		{"pop", "()V", nullptr, $PUBLIC, $virtualMethod(Dependencies$DummyDependencies, pop, void)},
		{"push", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/Dependencies$CompletionCause;)V", nullptr, $PUBLIC, $virtualMethod(Dependencies$DummyDependencies, push, void, $Symbol$ClassSymbol*, $Dependencies$CompletionCause*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.Dependencies$DummyDependencies", "com.sun.tools.javac.util.Dependencies", "DummyDependencies", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.util.Dependencies$DummyDependencies",
		"com.sun.tools.javac.util.Dependencies",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.Dependencies"
	};
	$loadClass(Dependencies$DummyDependencies, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Dependencies$DummyDependencies);
	});
	return class$;
}

$Class* Dependencies$DummyDependencies::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com