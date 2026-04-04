#include <com/sun/tools/javac/processing/JavacProcessingEnvironment$ComputeAnnotationSet.h>
#include <com/sun/tools/javac/processing/JavacProcessingEnvironment.h>
#include <java/lang/Iterable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/PackageElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/type/DeclaredType.h>
#include <javax/lang/model/util/ElementScanner14.h>
#include <javax/lang/model/util/ElementScanner6.h>
#include <javax/lang/model/util/Elements.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $AnnotationMirror = ::javax::lang::model::element::AnnotationMirror;
using $Element = ::javax::lang::model::element::Element;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $PackageElement = ::javax::lang::model::element::PackageElement;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $ElementScanner14 = ::javax::lang::model::util::ElementScanner14;
using $Elements = ::javax::lang::model::util::Elements;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

void JavacProcessingEnvironment$ComputeAnnotationSet::init$($Elements* elements) {
	$ElementScanner14::init$();
	$set(this, elements, elements);
}

$Set* JavacProcessingEnvironment$ComputeAnnotationSet::visitPackage($PackageElement* e, $Set* p) {
	return p;
}

$Set* JavacProcessingEnvironment$ComputeAnnotationSet::visitType($TypeElement* e, $Set* p) {
	scan($($nc(e)->getTypeParameters()), p);
	return $cast($Set, $ElementScanner14::visitType(e, p));
}

$Set* JavacProcessingEnvironment$ComputeAnnotationSet::visitExecutable($ExecutableElement* e, $Set* p) {
	scan($($nc(e)->getTypeParameters()), p);
	return $cast($Set, $ElementScanner14::visitExecutable(e, p));
}

void JavacProcessingEnvironment$ComputeAnnotationSet::addAnnotations($Element* e, $Set* p) {
	$useLocalObjectStack();
	$var($Iterator, i$, $$nc($nc(this->elements)->getAllAnnotationMirrors(e))->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($AnnotationMirror, annotationMirror, $cast($AnnotationMirror, i$->next()));
		{
			$var($Element, e2, $$nc($nc(annotationMirror)->getAnnotationType())->asElement());
			$nc(p)->add($cast($TypeElement, e2));
		}
	}
}

$Set* JavacProcessingEnvironment$ComputeAnnotationSet::scan($Element* e, $Set* p) {
	addAnnotations(e, p);
	return $cast($Set, $ElementScanner14::scan(e, p));
}

$Object* JavacProcessingEnvironment$ComputeAnnotationSet::visitExecutable($ExecutableElement* e, Object$* p) {
	return this->visitExecutable(e, $cast($Set, p));
}

$Object* JavacProcessingEnvironment$ComputeAnnotationSet::visitType($TypeElement* e, Object$* p) {
	return this->visitType(e, $cast($Set, p));
}

$Object* JavacProcessingEnvironment$ComputeAnnotationSet::visitPackage($PackageElement* e, Object$* p) {
	return this->visitPackage(e, $cast($Set, p));
}

$Object* JavacProcessingEnvironment$ComputeAnnotationSet::scan($Element* e, Object$* p) {
	return this->scan(e, $cast($Set, p));
}

JavacProcessingEnvironment$ComputeAnnotationSet::JavacProcessingEnvironment$ComputeAnnotationSet() {
}

$Class* JavacProcessingEnvironment$ComputeAnnotationSet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"elements", "Ljavax/lang/model/util/Elements;", nullptr, $FINAL, $field(JavacProcessingEnvironment$ComputeAnnotationSet, elements)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/lang/model/util/Elements;)V", nullptr, $PUBLIC, $method(JavacProcessingEnvironment$ComputeAnnotationSet, init$, void, $Elements*)},
		{"addAnnotations", "(Ljavax/lang/model/element/Element;Ljava/util/Set;)V", "(Ljavax/lang/model/element/Element;Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;)V", 0, $virtualMethod(JavacProcessingEnvironment$ComputeAnnotationSet, addAnnotations, void, $Element*, $Set*)},
		{"scan", "(Ljavax/lang/model/element/Element;Ljava/util/Set;)Ljava/util/Set;", "(Ljavax/lang/model/element/Element;Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;)Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;", $PUBLIC, $virtualMethod(JavacProcessingEnvironment$ComputeAnnotationSet, scan, $Set*, $Element*, $Set*)},
		{"scan", "(Ljavax/lang/model/element/Element;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JavacProcessingEnvironment$ComputeAnnotationSet, scan, $Object*, $Element*, Object$*)},
		{"visitExecutable", "(Ljavax/lang/model/element/ExecutableElement;Ljava/util/Set;)Ljava/util/Set;", "(Ljavax/lang/model/element/ExecutableElement;Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;)Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;", $PUBLIC, $virtualMethod(JavacProcessingEnvironment$ComputeAnnotationSet, visitExecutable, $Set*, $ExecutableElement*, $Set*)},
		{"visitExecutable", "(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JavacProcessingEnvironment$ComputeAnnotationSet, visitExecutable, $Object*, $ExecutableElement*, Object$*)},
		{"visitPackage", "(Ljavax/lang/model/element/PackageElement;Ljava/util/Set;)Ljava/util/Set;", "(Ljavax/lang/model/element/PackageElement;Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;)Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;", $PUBLIC, $virtualMethod(JavacProcessingEnvironment$ComputeAnnotationSet, visitPackage, $Set*, $PackageElement*, $Set*)},
		{"visitPackage", "(Ljavax/lang/model/element/PackageElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JavacProcessingEnvironment$ComputeAnnotationSet, visitPackage, $Object*, $PackageElement*, Object$*)},
		{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/util/Set;)Ljava/util/Set;", "(Ljavax/lang/model/element/TypeElement;Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;)Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;", $PUBLIC, $virtualMethod(JavacProcessingEnvironment$ComputeAnnotationSet, visitType, $Set*, $TypeElement*, $Set*)},
		{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JavacProcessingEnvironment$ComputeAnnotationSet, visitType, $Object*, $TypeElement*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.processing.JavacProcessingEnvironment$ComputeAnnotationSet", "com.sun.tools.javac.processing.JavacProcessingEnvironment", "ComputeAnnotationSet", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.processing.JavacProcessingEnvironment$ComputeAnnotationSet",
		"javax.lang.model.util.ElementScanner14",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/lang/model/util/ElementScanner14<Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.processing.JavacProcessingEnvironment"
	};
	$loadClass(JavacProcessingEnvironment$ComputeAnnotationSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavacProcessingEnvironment$ComputeAnnotationSet);
	});
	return class$;
}

$Class* JavacProcessingEnvironment$ComputeAnnotationSet::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com