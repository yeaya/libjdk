#include <com/sun/tools/javac/code/Scope$ScopeListener.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <jcpp.h>

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$Class* Scope$ScopeListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"symbolAdded", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Scope$ScopeListener, symbolAdded, void, $Symbol*, $Scope*)},
		{"symbolRemoved", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Scope;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Scope$ScopeListener, symbolRemoved, void, $Symbol*, $Scope*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Scope$ScopeListener", "com.sun.tools.javac.code.Scope", "ScopeListener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.code.Scope$ScopeListener",
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
		"com.sun.tools.javac.code.Scope"
	};
	$loadClass(Scope$ScopeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scope$ScopeListener);
	});
	return class$;
}

$Class* Scope$ScopeListener::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com