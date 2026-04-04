#include <javax/lang/model/type/ErrorType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$Class* ErrorType::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.type.ErrorType",
		nullptr,
		"javax.lang.model.type.DeclaredType"
	};
	$loadClass(ErrorType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ErrorType);
	});
	return class$;
}

$Class* ErrorType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax