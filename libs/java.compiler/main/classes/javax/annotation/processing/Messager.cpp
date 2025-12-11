#include <javax/annotation/processing/Messager.h>

#include <java/lang/CharSequence.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/AnnotationValue.h>
#include <javax/lang/model/element/Element.h>
#include <javax/tools/Diagnostic$Kind.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace annotation {
		namespace processing {

$MethodInfo _Messager_MethodInfo_[] = {
	{"printMessage", "(Ljavax/tools/Diagnostic$Kind;Ljava/lang/CharSequence;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"printMessage", "(Ljavax/tools/Diagnostic$Kind;Ljava/lang/CharSequence;Ljavax/lang/model/element/Element;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"printMessage", "(Ljavax/tools/Diagnostic$Kind;Ljava/lang/CharSequence;Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"printMessage", "(Ljavax/tools/Diagnostic$Kind;Ljava/lang/CharSequence;Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;Ljavax/lang/model/element/AnnotationValue;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Messager_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.annotation.processing.Messager",
	nullptr,
	nullptr,
	nullptr,
	_Messager_MethodInfo_
};

$Object* allocate$Messager($Class* clazz) {
	return $of($alloc(Messager));
}

$Class* Messager::load$($String* name, bool initialize) {
	$loadClass(Messager, name, initialize, &_Messager_ClassInfo_, allocate$Messager);
	return class$;
}

$Class* Messager::class$ = nullptr;

		} // processing
	} // annotation
} // javax