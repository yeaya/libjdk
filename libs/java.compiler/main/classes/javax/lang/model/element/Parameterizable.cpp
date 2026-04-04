#include <javax/lang/model/element/Parameterizable.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$Class* Parameterizable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getTypeParameters", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/element/TypeParameterElement;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Parameterizable, getTypeParameters, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.element.Parameterizable",
		nullptr,
		"javax.lang.model.element.Element",
		nullptr,
		methodInfos$$
	};
	$loadClass(Parameterizable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Parameterizable);
	});
	return class$;
}

$Class* Parameterizable::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax