#include <com/sun/tools/javac/code/Scope$ImportFilter.h>
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

$Class* Scope$ImportFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"accepts", "(Lcom/sun/tools/javac/code/Scope;Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Scope$ImportFilter, accepts, bool, $Scope*, $Symbol*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Scope$ImportFilter", "com.sun.tools.javac.code.Scope", "ImportFilter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.code.Scope$ImportFilter",
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
	$loadClass(Scope$ImportFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scope$ImportFilter);
	});
	return class$;
}

$Class* Scope$ImportFilter::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com