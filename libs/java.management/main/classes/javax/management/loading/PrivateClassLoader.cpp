#include <javax/management/loading/PrivateClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace management {
		namespace loading {

$Class* PrivateClassLoader::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.loading.PrivateClassLoader"
	};
	$loadClass(PrivateClassLoader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivateClassLoader);
	});
	return class$;
}

$Class* PrivateClassLoader::class$ = nullptr;

		} // loading
	} // management
} // javax