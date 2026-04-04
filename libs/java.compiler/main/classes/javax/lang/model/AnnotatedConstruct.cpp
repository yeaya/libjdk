#include <javax/lang/model/AnnotatedConstruct.h>
#include <java/lang/annotation/Annotation.h>
#include <java/util/List.h>
#include <jcpp.h>

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $List = ::java::util::List;

namespace javax {
	namespace lang {
		namespace model {

$Class* AnnotatedConstruct::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", "<A::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TA;>;)TA;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotatedConstruct, getAnnotation, $Annotation*, $Class*)},
		{"getAnnotationMirrors", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/element/AnnotationMirror;>;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotatedConstruct, getAnnotationMirrors, $List*)},
		{"getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", "<A::Ljava/lang/annotation/Annotation;>(Ljava/lang/Class<TA;>;)[TA;", $PUBLIC | $ABSTRACT, $virtualMethod(AnnotatedConstruct, getAnnotationsByType, $AnnotationArray*, $Class*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.lang.model.AnnotatedConstruct",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AnnotatedConstruct, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotatedConstruct);
	});
	return class$;
}

$Class* AnnotatedConstruct::class$ = nullptr;

		} // model
	} // lang
} // javax