#include <javax/lang/model/type/WildcardType.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$Class* WildcardType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getExtendsBound", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WildcardType, getExtendsBound, $TypeMirror*)},
		{"getSuperBound", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WildcardType, getSuperBound, $TypeMirror*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.type.WildcardType",
		nullptr,
		"javax.lang.model.type.TypeMirror",
		nullptr,
		methodInfos$$
	};
	$loadClass(WildcardType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WildcardType);
	});
	return class$;
}

$Class* WildcardType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax