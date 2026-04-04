#include <javax/lang/model/type/ArrayType.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$Class* ArrayType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getComponentType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ArrayType, getComponentType, $TypeMirror*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.type.ArrayType",
		nullptr,
		"javax.lang.model.type.ReferenceType",
		nullptr,
		methodInfos$$
	};
	$loadClass(ArrayType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayType);
	});
	return class$;
}

$Class* ArrayType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax