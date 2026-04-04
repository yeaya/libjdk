#include <javax/lang/model/type/NullType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$Class* NullType::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.type.NullType",
		nullptr,
		"javax.lang.model.type.ReferenceType"
	};
	$loadClass(NullType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NullType);
	});
	return class$;
}

$Class* NullType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax