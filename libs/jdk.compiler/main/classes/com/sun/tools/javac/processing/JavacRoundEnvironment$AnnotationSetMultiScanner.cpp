#include <com/sun/tools/javac/processing/JavacRoundEnvironment$AnnotationSetMultiScanner.h>
#include <com/sun/tools/javac/processing/JavacRoundEnvironment.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementVisitor.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/PackageElement.h>
#include <javax/lang/model/util/ElementScanner14.h>
#include <javax/lang/model/util/Elements.h>
#include <jcpp.h>

using $JavacRoundEnvironment = ::com::sun::tools::javac::processing::JavacRoundEnvironment;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Set = ::java::util::Set;
using $AnnotationMirror = ::javax::lang::model::element::AnnotationMirror;
using $Element = ::javax::lang::model::element::Element;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $PackageElement = ::javax::lang::model::element::PackageElement;
using $ElementScanner14 = ::javax::lang::model::util::ElementScanner14;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

void JavacRoundEnvironment$AnnotationSetMultiScanner::init$($JavacRoundEnvironment* this$0, $Set* defaultSet) {
	$set(this, this$0, this$0);
	$ElementScanner14::init$(defaultSet);
	$set(this, annotatedElements, $new($LinkedHashSet));
}

$Set* JavacRoundEnvironment$AnnotationSetMultiScanner::scan($Element* e, $Set* annotations) {
	$useLocalObjectStack();
	{
		$var($Iterator, i$, $$nc($nc(this->this$0->eltUtils)->getAllAnnotationMirrors(e))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AnnotationMirror, annotMirror, $cast($AnnotationMirror, i$->next()));
			if ($nc(annotations)->contains($(this->this$0->mirrorAsElement(annotMirror)))) {
				$nc(this->annotatedElements)->add(e);
				break;
			}
		}
	}
	$nc(e)->accept(this, annotations);
	return this->annotatedElements;
}

$Set* JavacRoundEnvironment$AnnotationSetMultiScanner::visitModule($ModuleElement* e, $Set* annotations) {
	return this->annotatedElements;
}

$Set* JavacRoundEnvironment$AnnotationSetMultiScanner::visitPackage($PackageElement* e, $Set* annotations) {
	return this->annotatedElements;
}

$Object* JavacRoundEnvironment$AnnotationSetMultiScanner::visitModule($ModuleElement* e, Object$* annotations) {
	return this->visitModule(e, $cast($Set, annotations));
}

$Object* JavacRoundEnvironment$AnnotationSetMultiScanner::visitPackage($PackageElement* e, Object$* annotations) {
	return this->visitPackage(e, $cast($Set, annotations));
}

$Object* JavacRoundEnvironment$AnnotationSetMultiScanner::scan($Element* e, Object$* annotations) {
	return this->scan(e, $cast($Set, annotations));
}

JavacRoundEnvironment$AnnotationSetMultiScanner::JavacRoundEnvironment$AnnotationSetMultiScanner() {
}

$Class* JavacRoundEnvironment$AnnotationSetMultiScanner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/processing/JavacRoundEnvironment;", nullptr, $FINAL | $SYNTHETIC, $field(JavacRoundEnvironment$AnnotationSetMultiScanner, this$0)},
		{"annotatedElements", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/lang/model/element/Element;>;", $PRIVATE, $field(JavacRoundEnvironment$AnnotationSetMultiScanner, annotatedElements)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/processing/JavacRoundEnvironment;Ljava/util/Set;)V", "(Ljava/util/Set<Ljavax/lang/model/element/Element;>;)V", 0, $method(JavacRoundEnvironment$AnnotationSetMultiScanner, init$, void, $JavacRoundEnvironment*, $Set*)},
		{"scan", "(Ljavax/lang/model/element/Element;Ljava/util/Set;)Ljava/util/Set;", "(Ljavax/lang/model/element/Element;Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;)Ljava/util/Set<Ljavax/lang/model/element/Element;>;", $PUBLIC, $virtualMethod(JavacRoundEnvironment$AnnotationSetMultiScanner, scan, $Set*, $Element*, $Set*)},
		{"scan", "(Ljavax/lang/model/element/Element;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JavacRoundEnvironment$AnnotationSetMultiScanner, scan, $Object*, $Element*, Object$*)},
		{"visitModule", "(Ljavax/lang/model/element/ModuleElement;Ljava/util/Set;)Ljava/util/Set;", "(Ljavax/lang/model/element/ModuleElement;Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;)Ljava/util/Set<Ljavax/lang/model/element/Element;>;", $PUBLIC, $virtualMethod(JavacRoundEnvironment$AnnotationSetMultiScanner, visitModule, $Set*, $ModuleElement*, $Set*)},
		{"visitModule", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JavacRoundEnvironment$AnnotationSetMultiScanner, visitModule, $Object*, $ModuleElement*, Object$*)},
		{"visitPackage", "(Ljavax/lang/model/element/PackageElement;Ljava/util/Set;)Ljava/util/Set;", "(Ljavax/lang/model/element/PackageElement;Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;)Ljava/util/Set<Ljavax/lang/model/element/Element;>;", $PUBLIC, $virtualMethod(JavacRoundEnvironment$AnnotationSetMultiScanner, visitPackage, $Set*, $PackageElement*, $Set*)},
		{"visitPackage", "(Ljavax/lang/model/element/PackageElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(JavacRoundEnvironment$AnnotationSetMultiScanner, visitPackage, $Object*, $PackageElement*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.processing.JavacRoundEnvironment$AnnotationSetMultiScanner", "com.sun.tools.javac.processing.JavacRoundEnvironment", "AnnotationSetMultiScanner", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.processing.JavacRoundEnvironment$AnnotationSetMultiScanner",
		"javax.lang.model.util.ElementScanner14",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/lang/model/util/ElementScanner14<Ljava/util/Set<Ljavax/lang/model/element/Element;>;Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.processing.JavacRoundEnvironment"
	};
	$loadClass(JavacRoundEnvironment$AnnotationSetMultiScanner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavacRoundEnvironment$AnnotationSetMultiScanner);
	});
	return class$;
}

$Class* JavacRoundEnvironment$AnnotationSetMultiScanner::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com