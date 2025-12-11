#include <javax/annotation/processing/Processor.h>

#include <java/lang/Iterable.h>
#include <java/util/Set.h>
#include <javax/annotation/processing/ProcessingEnvironment.h>
#include <javax/annotation/processing/RoundEnvironment.h>
#include <javax/lang/model/SourceVersion.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace annotation {
		namespace processing {

$MethodInfo _Processor_MethodInfo_[] = {
	{"getCompletions", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;Ljavax/lang/model/element/ExecutableElement;Ljava/lang/String;)Ljava/lang/Iterable;", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;Ljavax/lang/model/element/ExecutableElement;Ljava/lang/String;)Ljava/lang/Iterable<+Ljavax/annotation/processing/Completion;>;", $PUBLIC | $ABSTRACT},
	{"getSupportedAnnotationTypes", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"getSupportedOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"getSupportedSourceVersion", "()Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $ABSTRACT},
	{"init", "(Ljavax/annotation/processing/ProcessingEnvironment;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"process", "(Ljava/util/Set;Ljavax/annotation/processing/RoundEnvironment;)Z", "(Ljava/util/Set<+Ljavax/lang/model/element/TypeElement;>;Ljavax/annotation/processing/RoundEnvironment;)Z", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Processor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.annotation.processing.Processor",
	nullptr,
	nullptr,
	nullptr,
	_Processor_MethodInfo_
};

$Object* allocate$Processor($Class* clazz) {
	return $of($alloc(Processor));
}

$Class* Processor::load$($String* name, bool initialize) {
	$loadClass(Processor, name, initialize, &_Processor_ClassInfo_, allocate$Processor);
	return class$;
}

$Class* Processor::class$ = nullptr;

		} // processing
	} // annotation
} // javax