#include <com/sun/tools/sjavac/server/Sjavac.h>
#include <com/sun/tools/javac/main/Main$Result.h>
#include <jcpp.h>

using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

$Class* Sjavac::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"compile", "([Ljava/lang/String;)Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sjavac, compile, $Main$Result*, $StringArray*)},
		{"shutdown", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sjavac, shutdown, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.sjavac.server.Sjavac",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Sjavac, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sjavac);
	});
	return class$;
}

$Class* Sjavac::class$ = nullptr;

				} // server
			} // sjavac
		} // tools
	} // sun
} // com