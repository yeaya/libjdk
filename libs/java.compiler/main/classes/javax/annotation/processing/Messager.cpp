#include <javax/annotation/processing/Messager.h>
#include <java/lang/CharSequence.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/AnnotationValue.h>
#include <javax/lang/model/element/Element.h>
#include <javax/tools/Diagnostic$Kind.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationMirror = ::javax::lang::model::element::AnnotationMirror;
using $AnnotationValue = ::javax::lang::model::element::AnnotationValue;
using $Element = ::javax::lang::model::element::Element;
using $Diagnostic$Kind = ::javax::tools::Diagnostic$Kind;

namespace javax {
	namespace annotation {
		namespace processing {

$Class* Messager::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"printMessage", "(Ljavax/tools/Diagnostic$Kind;Ljava/lang/CharSequence;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Messager, printMessage, void, $Diagnostic$Kind*, $CharSequence*)},
		{"printMessage", "(Ljavax/tools/Diagnostic$Kind;Ljava/lang/CharSequence;Ljavax/lang/model/element/Element;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Messager, printMessage, void, $Diagnostic$Kind*, $CharSequence*, $Element*)},
		{"printMessage", "(Ljavax/tools/Diagnostic$Kind;Ljava/lang/CharSequence;Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Messager, printMessage, void, $Diagnostic$Kind*, $CharSequence*, $Element*, $AnnotationMirror*)},
		{"printMessage", "(Ljavax/tools/Diagnostic$Kind;Ljava/lang/CharSequence;Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;Ljavax/lang/model/element/AnnotationValue;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Messager, printMessage, void, $Diagnostic$Kind*, $CharSequence*, $Element*, $AnnotationMirror*, $AnnotationValue*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.annotation.processing.Messager",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Messager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Messager);
	});
	return class$;
}

$Class* Messager::class$ = nullptr;

		} // processing
	} // annotation
} // javax