#include <javax/lang/model/type/ReferenceType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$Class* ReferenceType::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.type.ReferenceType",
		nullptr,
		"javax.lang.model.type.TypeMirror"
	};
	$loadClass(ReferenceType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceType);
	});
	return class$;
}

$Class* ReferenceType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax