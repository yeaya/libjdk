#include <com/sun/tools/sjavac/server/Terminable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

$Class* Terminable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"shutdown", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Terminable, shutdown, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.sjavac.server.Terminable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Terminable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Terminable);
	});
	return class$;
}

$Class* Terminable::class$ = nullptr;

				} // server
			} // sjavac
		} // tools
	} // sun
} // com