#include <javax/annotation/processing/AbstractProcessor.h>

#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Enum.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Iterable.h>
#include <java/lang/annotation/Annotation.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <javax/annotation/processing/Messager.h>
#include <javax/annotation/processing/ProcessingEnvironment.h>
#include <javax/annotation/processing/SupportedAnnotationTypes.h>
#include <javax/annotation/processing/SupportedOptions.h>
#include <javax/annotation/processing/SupportedSourceVersion.h>
#include <javax/lang/model/SourceVersion.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/tools/Diagnostic$Kind.h>
#include <jcpp.h>

#undef RELEASE_6
#undef RELEASE_8
#undef WARNING

using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Messager = ::javax::annotation::processing::Messager;
using $ProcessingEnvironment = ::javax::annotation::processing::ProcessingEnvironment;
using $Processor = ::javax::annotation::processing::Processor;
using $SupportedAnnotationTypes = ::javax::annotation::processing::SupportedAnnotationTypes;
using $SupportedOptions = ::javax::annotation::processing::SupportedOptions;
using $SupportedSourceVersion = ::javax::annotation::processing::SupportedSourceVersion;
using $SourceVersion = ::javax::lang::model::SourceVersion;
using $AnnotationMirror = ::javax::lang::model::element::AnnotationMirror;
using $Element = ::javax::lang::model::element::Element;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $Diagnostic$Kind = ::javax::tools::Diagnostic$Kind;

namespace javax {
	namespace annotation {
		namespace processing {

$FieldInfo _AbstractProcessor_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractProcessor, $assertionsDisabled)},
	{"processingEnv", "Ljavax/annotation/processing/ProcessingEnvironment;", nullptr, $PROTECTED, $field(AbstractProcessor, processingEnv)},
	{"initialized", "Z", nullptr, $PRIVATE, $field(AbstractProcessor, initialized)},
	{}
};

$MethodInfo _AbstractProcessor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractProcessor::*)()>(&AbstractProcessor::init$))},
	{"arrayToSet", "([Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)Ljava/util/Set;", "([Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;)Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $method(static_cast<$Set*(AbstractProcessor::*)($StringArray*,bool,$String*,$String*)>(&AbstractProcessor::arrayToSet))},
	{"getCompletions", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;Ljavax/lang/model/element/ExecutableElement;Ljava/lang/String;)Ljava/lang/Iterable;", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;Ljavax/lang/model/element/ExecutableElement;Ljava/lang/String;)Ljava/lang/Iterable<+Ljavax/annotation/processing/Completion;>;", $PUBLIC},
	{"getSupportedAnnotationTypes", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"getSupportedOptions", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC},
	{"getSupportedSourceVersion", "()Ljavax/lang/model/SourceVersion;", nullptr, $PUBLIC},
	{"init", "(Ljavax/annotation/processing/ProcessingEnvironment;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"isInitialized", "()Z", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"process", "(Ljava/util/Set;Ljavax/annotation/processing/RoundEnvironment;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractProcessor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.annotation.processing.AbstractProcessor",
	"java.lang.Object",
	"javax.annotation.processing.Processor",
	_AbstractProcessor_FieldInfo_,
	_AbstractProcessor_MethodInfo_
};

$Object* allocate$AbstractProcessor($Class* clazz) {
	return $of($alloc(AbstractProcessor));
}

bool AbstractProcessor::$assertionsDisabled = false;

void AbstractProcessor::init$() {
	this->initialized = false;
}

$Set* AbstractProcessor::getSupportedOptions() {
	$useLocalCurrentObjectStackCache();
	$load($SupportedOptions);
	$var($SupportedOptions, so, $cast($SupportedOptions, $of(this)->getClass()->getAnnotation($SupportedOptions::class$)));
	return (so == nullptr) ? $Set::of() : arrayToSet($($nc(so)->value()), false, "option value"_s, "@SupportedOptions"_s);
}

$Set* AbstractProcessor::getSupportedAnnotationTypes() {
	$useLocalCurrentObjectStackCache();
	$load($SupportedAnnotationTypes);
	$var($SupportedAnnotationTypes, sat, $cast($SupportedAnnotationTypes, $of(this)->getClass()->getAnnotation($SupportedAnnotationTypes::class$)));
	bool initialized = isInitialized();
	if (sat == nullptr) {
		if (initialized) {
			$init($Diagnostic$Kind);
			$nc($($nc(this->processingEnv)->getMessager()))->printMessage($Diagnostic$Kind::WARNING, $$str({"No SupportedAnnotationTypes annotation found on "_s, $($of(this)->getClass()->getName()), ", returning an empty set."_s}));
		}
		return $Set::of();
	} else {
		$init($SourceVersion);
		bool stripModulePrefixes = initialized && $nc($($nc(this->processingEnv)->getSourceVersion()))->compareTo(static_cast<$Enum*>($SourceVersion::RELEASE_8)) <= 0;
		return arrayToSet($($nc(sat)->value()), stripModulePrefixes, "annotation type"_s, "@SupportedAnnotationTypes"_s);
	}
}

$SourceVersion* AbstractProcessor::getSupportedSourceVersion() {
	$useLocalCurrentObjectStackCache();
	$load($SupportedSourceVersion);
	$var($SupportedSourceVersion, ssv, $cast($SupportedSourceVersion, $of(this)->getClass()->getAnnotation($SupportedSourceVersion::class$)));
	$SourceVersion* sv = nullptr;
	if (ssv == nullptr) {
		$init($SourceVersion);
		sv = $SourceVersion::RELEASE_6;
		if (isInitialized()) {
			$init($Diagnostic$Kind);
			$nc($($nc(this->processingEnv)->getMessager()))->printMessage($Diagnostic$Kind::WARNING, $$str({"No SupportedSourceVersion annotation found on "_s, $($of(this)->getClass()->getName()), ", returning "_s, sv, "."_s}));
		}
	} else {
		sv = $nc(ssv)->value();
	}
	return sv;
}

void AbstractProcessor::init($ProcessingEnvironment* processingEnv) {
	$synchronized(this) {
		if (this->initialized) {
			$throwNew($IllegalStateException, "Cannot call init more than once."_s);
		}
		$Objects::requireNonNull($of(processingEnv), "Tool provided null ProcessingEnvironment"_s);
		$set(this, processingEnv, processingEnv);
		this->initialized = true;
	}
}

$Iterable* AbstractProcessor::getCompletions($Element* element, $AnnotationMirror* annotation, $ExecutableElement* member, $String* userText) {
	return $List::of();
}

bool AbstractProcessor::isInitialized() {
	$synchronized(this) {
		return this->initialized;
	}
}

$Set* AbstractProcessor::arrayToSet($StringArray* array, bool stripModulePrefixes, $String* contentType, $String* annotationName) {
	$useLocalCurrentObjectStackCache();
	if (!AbstractProcessor::$assertionsDisabled && !(array != nullptr)) {
		$throwNew($AssertionError);
	}
	$var($Set, set, $new($HashSet));
	{
		$var($StringArray, arr$, array);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, s, arr$->get(i$));
			{
				bool stripped = false;
				if (stripModulePrefixes) {
					int32_t index = $nc(s)->indexOf((int32_t)u'/');
					if (index != -1) {
						$assign(s, s->substring(index + 1));
						stripped = true;
					}
				}
				bool added = set->add(s);
				if (!added && !stripped && isInitialized()) {
					$init($Diagnostic$Kind);
					$nc($($nc(this->processingEnv)->getMessager()))->printMessage($Diagnostic$Kind::WARNING, $$str({"Duplicate "_s, contentType, " ``"_s, s, "\'\' for processor "_s, $($of(this)->getClass()->getName()), " in its "_s, annotationName, "annotation."_s}));
				}
			}
		}
	}
	return $Collections::unmodifiableSet(set);
}

void clinit$AbstractProcessor($Class* class$) {
	AbstractProcessor::$assertionsDisabled = !AbstractProcessor::class$->desiredAssertionStatus();
}

AbstractProcessor::AbstractProcessor() {
}

$Class* AbstractProcessor::load$($String* name, bool initialize) {
	$loadClass(AbstractProcessor, name, initialize, &_AbstractProcessor_ClassInfo_, clinit$AbstractProcessor, allocate$AbstractProcessor);
	return class$;
}

$Class* AbstractProcessor::class$ = nullptr;

		} // processing
	} // annotation
} // javax