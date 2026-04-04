#include <javax/annotation/processing/RoundEnvironment.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/Set.h>
#include <javax/lang/model/element/TypeElement.h>
#include <jcpp.h>

using $TypeElementArray = $Array<::javax::lang::model::element::TypeElement>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $Set = ::java::util::Set;
using $TypeElement = ::javax::lang::model::element::TypeElement;

namespace javax {
	namespace annotation {
		namespace processing {

$Set* RoundEnvironment::getElementsAnnotatedWithAny($TypeElementArray* annotations) {
	$useLocalObjectStack();
	$var($Set, result, $new($LinkedHashSet));
	{
		$var($TypeElementArray, arr$, annotations);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($TypeElement, annotation, arr$->get(i$));
			{
				result->addAll($(getElementsAnnotatedWith(annotation)));
			}
		}
	}
	return $Collections::unmodifiableSet(result);
}

$Set* RoundEnvironment::getElementsAnnotatedWithAny($Set* annotations) {
	$useLocalObjectStack();
	$var($Set, result, $new($LinkedHashSet));
	{
		$var($Iterator, i$, $nc(annotations)->iterator());
		for (; $nc(i$)->hasNext();) {
			$Class* annotation = $cast($Class, i$->next());
			{
				result->addAll($(getElementsAnnotatedWith(annotation)));
			}
		}
	}
	return $Collections::unmodifiableSet(result);
}

$Class* RoundEnvironment::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"errorRaised", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RoundEnvironment, errorRaised, bool)},
		{"getElementsAnnotatedWith", "(Ljavax/lang/model/element/TypeElement;)Ljava/util/Set;", "(Ljavax/lang/model/element/TypeElement;)Ljava/util/Set<+Ljavax/lang/model/element/Element;>;", $PUBLIC | $ABSTRACT, $virtualMethod(RoundEnvironment, getElementsAnnotatedWith, $Set*, $TypeElement*)},
		{"getElementsAnnotatedWith", "(Ljava/lang/Class;)Ljava/util/Set;", "(Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;)Ljava/util/Set<+Ljavax/lang/model/element/Element;>;", $PUBLIC | $ABSTRACT, $virtualMethod(RoundEnvironment, getElementsAnnotatedWith, $Set*, $Class*)},
		{"getElementsAnnotatedWithAny", "([Ljavax/lang/model/element/TypeElement;)Ljava/util/Set;", "([Ljavax/lang/model/element/TypeElement;)Ljava/util/Set<+Ljavax/lang/model/element/Element;>;", $PUBLIC | $TRANSIENT, $virtualMethod(RoundEnvironment, getElementsAnnotatedWithAny, $Set*, $TypeElementArray*)},
		{"getElementsAnnotatedWithAny", "(Ljava/util/Set;)Ljava/util/Set;", "(Ljava/util/Set<Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;>;)Ljava/util/Set<+Ljavax/lang/model/element/Element;>;", $PUBLIC, $virtualMethod(RoundEnvironment, getElementsAnnotatedWithAny, $Set*, $Set*)},
		{"getRootElements", "()Ljava/util/Set;", "()Ljava/util/Set<+Ljavax/lang/model/element/Element;>;", $PUBLIC | $ABSTRACT, $virtualMethod(RoundEnvironment, getRootElements, $Set*)},
		{"processingOver", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RoundEnvironment, processingOver, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.annotation.processing.RoundEnvironment",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RoundEnvironment, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RoundEnvironment);
	});
	return class$;
}

$Class* RoundEnvironment::class$ = nullptr;

		} // processing
	} // annotation
} // javax