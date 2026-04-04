#include <javax/lang/model/element/PackageElement.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$Class* PackageElement::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT},
		{"getEnclosedElements", "()Ljava/util/List;", nullptr, $PUBLIC | $ABSTRACT},
		{"getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $ABSTRACT},
		{"getQualifiedName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
		{"getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
		{"isUnnamed", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PackageElement, isUnnamed, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.element.PackageElement",
		nullptr,
		"javax.lang.model.element.QualifiedNameable",
		nullptr,
		methodInfos$$
	};
	$loadClass(PackageElement, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PackageElement);
	});
	return class$;
}

$Class* PackageElement::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax