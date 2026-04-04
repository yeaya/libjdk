#include <com/sun/tools/javac/util/Context$Factory.h>
#include <com/sun/tools/javac/util/Context.h>
#include <jcpp.h>

using $Context = ::com::sun::tools::javac::util::Context;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$Class* Context$Factory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"make", "(Lcom/sun/tools/javac/util/Context;)Ljava/lang/Object;", "(Lcom/sun/tools/javac/util/Context;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(Context$Factory, make, $Object*, $Context*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.Context$Factory", "com.sun.tools.javac.util.Context", "Factory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.util.Context$Factory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.Context"
	};
	$loadClass(Context$Factory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Context$Factory);
	});
	return class$;
}

$Class* Context$Factory::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com