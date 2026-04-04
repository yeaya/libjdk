#include <javax/lang/model/type/PrimitiveType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$Class* PrimitiveType::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.type.PrimitiveType",
		nullptr,
		"javax.lang.model.type.TypeMirror"
	};
	$loadClass(PrimitiveType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrimitiveType);
	});
	return class$;
}

$Class* PrimitiveType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax