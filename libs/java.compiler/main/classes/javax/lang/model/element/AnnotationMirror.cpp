#include <javax/lang/model/element/AnnotationMirror.h>
#include <java/util/Map.h>
#include <javax/lang/model/type/DeclaredType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $DeclaredType = ::javax::lang::model::type::DeclaredType;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$Class* AnnotationMirror::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAnnotationType", "()Ljavax/lang/model/type/DeclaredType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationMirror, getAnnotationType, $DeclaredType*)},
		{"getElementValues", "()Ljava/util/Map;", "()Ljava/util/Map<+Ljavax/lang/model/element/ExecutableElement;+Ljavax/lang/model/element/AnnotationValue;>;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationMirror, getElementValues, $Map*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.element.AnnotationMirror",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AnnotationMirror, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotationMirror);
	});
	return class$;
}

$Class* AnnotationMirror::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax