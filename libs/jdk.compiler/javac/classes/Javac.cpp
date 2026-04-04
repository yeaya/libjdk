#include <Javac.h>
#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/javac/main/Main.h>
#include <jcpp.h>

using $Main = ::com::sun::tools::javac::main::Main;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Javac::init$() {
}

void Javac::main($StringArray* args) {
	$var($Main, myMain, $new($Main, "javac"_s));
	myMain->compile(args);
}

Javac::Javac() {
}

$Class* Javac::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Javac, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(Javac, main, void, $StringArray*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Javac",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Javac, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Javac);
	});
	return class$;
}

$Class* Javac::class$ = nullptr;