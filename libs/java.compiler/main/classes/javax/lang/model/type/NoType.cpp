#include <javax/lang/model/type/NoType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$Class* NoType::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.type.NoType",
		nullptr,
		"javax.lang.model.type.TypeMirror"
	};
	$loadClass(NoType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoType);
	});
	return class$;
}

$Class* NoType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax