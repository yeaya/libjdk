#include <javax/lang/model/type/IntersectionType.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$Class* IntersectionType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getBounds", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;", $PUBLIC | $ABSTRACT, $virtualMethod(IntersectionType, getBounds, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.type.IntersectionType",
		nullptr,
		"javax.lang.model.type.TypeMirror",
		nullptr,
		methodInfos$$
	};
	$loadClass(IntersectionType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntersectionType);
	});
	return class$;
}

$Class* IntersectionType::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax