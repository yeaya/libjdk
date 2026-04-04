#include <com/sun/tools/javac/comp/Resolve$RecoveryLoadClass.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/comp/Resolve.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$Class* Resolve$RecoveryLoadClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"loadClass", "(Lcom/sun/tools/javac/comp/Env;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;Lcom/sun/tools/javac/util/Name;)Lcom/sun/tools/javac/code/Symbol;", $PUBLIC | $ABSTRACT, $virtualMethod(Resolve$RecoveryLoadClass, loadClass, $Symbol*, $Env*, $Name*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$RecoveryLoadClass", "com.sun.tools.javac.comp.Resolve", "RecoveryLoadClass", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.comp.Resolve$RecoveryLoadClass",
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
		"com.sun.tools.javac.comp.Resolve"
	};
	$loadClass(Resolve$RecoveryLoadClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$RecoveryLoadClass);
	});
	return class$;
}

$Class* Resolve$RecoveryLoadClass::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com