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

$MethodInfo _AnnotationMirror_MethodInfo_[] = {
	{"getAnnotationType", "()Ljavax/lang/model/type/DeclaredType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationMirror, getAnnotationType, $DeclaredType*)},
	{"getElementValues", "()Ljava/util/Map;", "()Ljava/util/Map<+Ljavax/lang/model/element/ExecutableElement;+Ljavax/lang/model/element/AnnotationValue;>;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotationMirror, getElementValues, $Map*)},
	{}
};

$ClassInfo _AnnotationMirror_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.AnnotationMirror",
	nullptr,
	nullptr,
	nullptr,
	_AnnotationMirror_MethodInfo_
};

$Object* allocate$AnnotationMirror($Class* clazz) {
	return $of($alloc(AnnotationMirror));
}

$Class* AnnotationMirror::load$($String* name, bool initialize) {
	$loadClass(AnnotationMirror, name, initialize, &_AnnotationMirror_ClassInfo_, allocate$AnnotationMirror);
	return class$;
}

$Class* AnnotationMirror::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax