#include <javax/lang/model/type/UnionType.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$Class* UnionType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAlternatives", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;", $PUBLIC | $ABSTRACT, $virtualMethod(UnionType, getAlternatives, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.type.UnionType",
		nullptr,
		"javax.lang.model.type.TypeMirror",
		nullptr,
		methodInfos$$
	};
	$loadClass(UnionType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnionType);
	});
	return class$;
}

$Class* UnionType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax