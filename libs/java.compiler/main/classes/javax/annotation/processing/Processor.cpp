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
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;
using $ProcessingEnvironment = ::javax::annotation::processing::ProcessingEnvironment;
using $RoundEnvironment = ::javax::annotation::processing::RoundEnvironment;
using $SourceVersion = ::javax::lang::model::SourceVersion;
using $AnnotationMirror = ::javax::lang::model::element::AnnotationMirror;
using $Element = ::javax::lang::model::element::Element;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;

namespace javax {
	namespace annotation {
		namespace processing {

$MethodInfo _Processor_MethodInfo_[] = {
	{"getCompletions", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;Ljavax/lang/model/element/ExecutableElement;Ljava/lang/String;)Ljava/lang/Iterable;", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;Ljavax/lang/model/element/ExecutableElement;Ljava/lang/String;)Ljava/lang/Iterable<+Ljavax/annotation/processing/Completion;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Processor, getCompletions, $Iterable*, $Element*, $AnnotationMirror*, $ExecutableElement*, $String*)},
	{"getSupportedAnnotationTypes", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Processor, getSupportedAnnotationTypes, $Set*)},
	{"getSupportedOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Processor, getSupportedOptions, $Set*)},
	{"getSupportedSourceVersion", "()Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Processor, getSupportedSourceVersion, $SourceVersion*)},
	{"init", "(Ljavax/annotation/processing/ProcessingEnvironment;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Processor, init, void, $ProcessingEnvironment*)},
	{"process", "(Ljava/util/Set;Ljavax/annotation/processing/RoundEnvironment;)Z", "(Ljava/util/Set<+Ljavax/lang/model/element/TypeElement;>;Ljavax/annotation/processing/RoundEnvironment;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(Processor, process, bool, $Set*, $RoundEnvironment*)},
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