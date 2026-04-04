#include <com/sun/tools/javac/processing/JavacRoundEnvironment.h>
#include <com/sun/tools/javac/code/Source$Feature.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/model/JavacElements.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <com/sun/tools/javac/processing/JavacRoundEnvironment$AnnotationSetMultiScanner.h>
#include <com/sun/tools/javac/processing/JavacRoundEnvironment$AnnotationSetScanner.h>
#include <java/lang/Module.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/type/DeclaredType.h>
#include <javax/lang/model/util/Elements.h>
#include <jcpp.h>

#undef ANNOTATION_TYPE
#undef MODULES
#undef NOT_AN_ANNOTATION_TYPE

using $TypeElementArray = $Array<::javax::lang::model::element::TypeElement>;
using $Source$Feature = ::com::sun::tools::javac::code::Source$Feature;
using $JavacProcessingEnvironment = ::com::sun::tools::javac::processing::JavacProcessingEnvironment;
using $JavacRoundEnvironment$AnnotationSetMultiScanner = ::com::sun::tools::javac::processing::JavacRoundEnvironment$AnnotationSetMultiScanner;
using $JavacRoundEnvironment$AnnotationSetScanner = ::com::sun::tools::javac::processing::JavacRoundEnvironment$AnnotationSetScanner;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $AnnotationMirror = ::javax::lang::model::element::AnnotationMirror;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $TypeElement = ::javax::lang::model::element::TypeElement;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

$String* JavacRoundEnvironment::NOT_AN_ANNOTATION_TYPE = nullptr;

void JavacRoundEnvironment::init$(bool processingOver, bool errorRaised, $Set* rootElements, $JavacProcessingEnvironment* processingEnv) {
	this->processingOver$ = processingOver;
	this->errorRaised$ = errorRaised;
	$set(this, rootElements, rootElements);
	$set(this, processingEnv, processingEnv);
	$init($Source$Feature);
	this->allowModules = $Source$Feature::MODULES->allowedInSource($nc(processingEnv)->source);
	$set(this, eltUtils, processingEnv->getElementUtils());
}

$String* JavacRoundEnvironment::toString() {
	$useLocalObjectStack();
	return $String::format("[errorRaised=%b, rootElements=%s, processingOver=%b]"_s, $$new($ObjectArray, {
		$($Boolean::valueOf(this->errorRaised$)),
		this->rootElements,
		$($Boolean::valueOf(this->processingOver$))
	}));
}

bool JavacRoundEnvironment::processingOver() {
	return this->processingOver$;
}

bool JavacRoundEnvironment::errorRaised() {
	return this->errorRaised$;
}

$Set* JavacRoundEnvironment::getRootElements() {
	return this->rootElements;
}

$Set* JavacRoundEnvironment::getElementsAnnotatedWith($TypeElement* a) {
	$useLocalObjectStack();
	throwIfNotAnnotation(a);
	$var($Set, result, $Collections::emptySet());
	$var($JavacRoundEnvironment$AnnotationSetScanner, scanner, $new($JavacRoundEnvironment$AnnotationSetScanner, this, result));
	{
		$var($Iterator, i$, $nc(this->rootElements)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Element, element, $cast($Element, i$->next()));
			$assign(result, scanner->scan(element, a));
		}
	}
	return result;
}

$Set* JavacRoundEnvironment::getElementsAnnotatedWithAny($TypeElementArray* annotations) {
	$useLocalObjectStack();
	$var($Set, annotationSet, $new($LinkedHashSet, $nc(annotations)->length));
	{
		$var($TypeElementArray, arr$, annotations);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($TypeElement, annotation, arr$->get(i$));
			{
				throwIfNotAnnotation(annotation);
				annotationSet->add(annotation);
			}
		}
	}
	$var($Set, result, $Collections::emptySet());
	$var($JavacRoundEnvironment$AnnotationSetMultiScanner, scanner, $new($JavacRoundEnvironment$AnnotationSetMultiScanner, this, result));
	{
		$var($Iterator, i$, $nc(this->rootElements)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Element, element, $cast($Element, i$->next()));
			$assign(result, scanner->scan(element, annotationSet));
		}
	}
	return result;
}

$Set* JavacRoundEnvironment::getElementsAnnotatedWith($Class* a) {
	$useLocalObjectStack();
	throwIfNotAnnotation(a);
	$var($String, name, $nc(a)->getCanonicalName());
	if (name == nullptr) {
		return $Collections::emptySet();
	} else {
		$var($TypeElement, annotationType, annotationToElement(a));
		if (annotationType == nullptr) {
			return $Collections::emptySet();
		} else {
			return getElementsAnnotatedWith(annotationType);
		}
	}
}

$Set* JavacRoundEnvironment::getElementsAnnotatedWithAny($Set* annotations) {
	$useLocalObjectStack();
	$var($List, annotationsAsElements, $new($ArrayList, $nc(annotations)->size()));
	{
		$var($Iterator, i$, annotations->iterator());
		for (; $nc(i$)->hasNext();) {
			$Class* annotation = $cast($Class, i$->next());
			{
				throwIfNotAnnotation(annotation);
				$var($String, name, $nc(annotation)->getCanonicalName());
				if (name == nullptr) {
					continue;
				}
				annotationsAsElements->add($(annotationToElement(annotation)));
			}
		}
	}
	return getElementsAnnotatedWithAny($$cast($TypeElementArray, annotationsAsElements->toArray($$new($TypeElementArray, 0))));
}

$TypeElement* JavacRoundEnvironment::annotationToElement($Class* annotation) {
	$useLocalObjectStack();
	$var($String, name, $nc(annotation)->getCanonicalName());
	$var($TypeElement, annotationElement, $nc(this->eltUtils)->getTypeElement(name));
	if (annotationElement != nullptr) {
		return annotationElement;
	} else if (this->allowModules) {
		$var($String, moduleName, $cast($String, $Objects::requireNonNullElse($($$nc(annotation->getModule())->getName()), ""_s)));
		return this->eltUtils->getTypeElement($(this->eltUtils->getModuleElement(moduleName)), name);
	} else {
		return nullptr;
	}
}

$Element* JavacRoundEnvironment::mirrorAsElement($AnnotationMirror* annotationMirror) {
	return $$nc($nc(annotationMirror)->getAnnotationType())->asElement();
}

void JavacRoundEnvironment::throwIfNotAnnotation($Class* a) {
	if (!$nc(a)->isAnnotation()) {
		$throwNew($IllegalArgumentException, $$str({JavacRoundEnvironment::NOT_AN_ANNOTATION_TYPE, a}));
	}
}

void JavacRoundEnvironment::throwIfNotAnnotation($TypeElement* a) {
	$init($ElementKind);
	if ($nc(a)->getKind() != $ElementKind::ANNOTATION_TYPE) {
		$throwNew($IllegalArgumentException, $$str({JavacRoundEnvironment::NOT_AN_ANNOTATION_TYPE, a}));
	}
}

JavacRoundEnvironment::JavacRoundEnvironment() {
}

void JavacRoundEnvironment::clinit$($Class* clazz) {
	$assignStatic(JavacRoundEnvironment::NOT_AN_ANNOTATION_TYPE, "The argument does not represent an annotation type: "_s);
}

$Class* JavacRoundEnvironment::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"processingOver", "Z", nullptr, $PRIVATE | $FINAL, $field(JavacRoundEnvironment, processingOver$)},
		{"errorRaised", "Z", nullptr, $PRIVATE | $FINAL, $field(JavacRoundEnvironment, errorRaised$)},
		{"processingEnv", "Ljavax/annotation/processing/ProcessingEnvironment;", nullptr, $PRIVATE | $FINAL, $field(JavacRoundEnvironment, processingEnv)},
		{"eltUtils", "Ljavax/lang/model/util/Elements;", nullptr, $PRIVATE | $FINAL, $field(JavacRoundEnvironment, eltUtils)},
		{"allowModules", "Z", nullptr, $PRIVATE | $FINAL, $field(JavacRoundEnvironment, allowModules)},
		{"rootElements", "Ljava/util/Set;", "Ljava/util/Set<+Ljavax/lang/model/element/Element;>;", $PRIVATE | $FINAL, $field(JavacRoundEnvironment, rootElements)},
		{"NOT_AN_ANNOTATION_TYPE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JavacRoundEnvironment, NOT_AN_ANNOTATION_TYPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ZZLjava/util/Set;Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;)V", "(ZZLjava/util/Set<+Ljavax/lang/model/element/Element;>;Lcom/sun/tools/javac/processing/JavacProcessingEnvironment;)V", 0, $method(JavacRoundEnvironment, init$, void, bool, bool, $Set*, $JavacProcessingEnvironment*)},
		{"annotationToElement", "(Ljava/lang/Class;)Ljavax/lang/model/element/TypeElement;", "(Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;)Ljavax/lang/model/element/TypeElement;", $PRIVATE, $method(JavacRoundEnvironment, annotationToElement, $TypeElement*, $Class*)},
		{"errorRaised", "()Z", nullptr, $PUBLIC, $virtualMethod(JavacRoundEnvironment, errorRaised, bool)},
		{"getElementsAnnotatedWith", "(Ljavax/lang/model/element/TypeElement;)Ljava/util/Set;", "(Ljavax/lang/model/element/TypeElement;)Ljava/util/Set<+Ljavax/lang/model/element/Element;>;", $PUBLIC, $virtualMethod(JavacRoundEnvironment, getElementsAnnotatedWith, $Set*, $TypeElement*)},
		{"getElementsAnnotatedWith", "(Ljava/lang/Class;)Ljava/util/Set;", "(Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;)Ljava/util/Set<+Ljavax/lang/model/element/Element;>;", $PUBLIC, $virtualMethod(JavacRoundEnvironment, getElementsAnnotatedWith, $Set*, $Class*)},
		{"getElementsAnnotatedWithAny", "([Ljavax/lang/model/element/TypeElement;)Ljava/util/Set;", "([Ljavax/lang/model/element/TypeElement;)Ljava/util/Set<+Ljavax/lang/model/element/Element;>;", $PUBLIC | $TRANSIENT, $virtualMethod(JavacRoundEnvironment, getElementsAnnotatedWithAny, $Set*, $TypeElementArray*)},
		{"getElementsAnnotatedWithAny", "(Ljava/util/Set;)Ljava/util/Set;", "(Ljava/util/Set<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;>;)Ljava/util/Set<+Ljavax/lang/model/element/Element;>;", $PUBLIC, $virtualMethod(JavacRoundEnvironment, getElementsAnnotatedWithAny, $Set*, $Set*)},
		{"getRootElements", "()Ljava/util/Set;", "()Ljava/util/Set<+Ljavax/lang/model/element/Element;>;", $PUBLIC, $virtualMethod(JavacRoundEnvironment, getRootElements, $Set*)},
		{"mirrorAsElement", "(Ljavax/lang/model/element/AnnotationMirror;)Ljavax/lang/model/element/Element;", nullptr, $PRIVATE, $method(JavacRoundEnvironment, mirrorAsElement, $Element*, $AnnotationMirror*)},
		{"processingOver", "()Z", nullptr, $PUBLIC, $virtualMethod(JavacRoundEnvironment, processingOver, bool)},
		{"throwIfNotAnnotation", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;)V", $PRIVATE, $method(JavacRoundEnvironment, throwIfNotAnnotation, void, $Class*)},
		{"throwIfNotAnnotation", "(Ljavax/lang/model/element/TypeElement;)V", nullptr, $PRIVATE, $method(JavacRoundEnvironment, throwIfNotAnnotation, void, $TypeElement*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JavacRoundEnvironment, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.processing.JavacRoundEnvironment$AnnotationSetMultiScanner", "com.sun.tools.javac.processing.JavacRoundEnvironment", "AnnotationSetMultiScanner", $PRIVATE},
		{"com.sun.tools.javac.processing.JavacRoundEnvironment$AnnotationSetScanner", "com.sun.tools.javac.processing.JavacRoundEnvironment", "AnnotationSetScanner", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.processing.JavacRoundEnvironment",
		"java.lang.Object",
		"javax.annotation.processing.RoundEnvironment",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.processing.JavacRoundEnvironment$AnnotationSetMultiScanner,com.sun.tools.javac.processing.JavacRoundEnvironment$AnnotationSetScanner"
	};
	$loadClass(JavacRoundEnvironment, name, initialize, &classInfo$$, JavacRoundEnvironment::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JavacRoundEnvironment);
	});
	return class$;
}

$Class* JavacRoundEnvironment::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com