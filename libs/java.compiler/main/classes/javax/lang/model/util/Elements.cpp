#include <javax/lang/model/util/Elements.h>

#include <java/io/Writer.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <javax/lang/model/AnnotatedConstruct.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/ModuleElement$Directive.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/element/PackageElement.h>
#include <javax/lang/model/element/RecordComponentElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/util/ElementFilter.h>
#include <javax/lang/model/util/Elements$Origin.h>
#include <jcpp.h>

#undef EXPLICIT
#undef RECORD

using $ElementArray = $Array<::javax::lang::model::element::Element>;
using $Writer = ::java::io::Writer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $AnnotatedConstruct = ::javax::lang::model::AnnotatedConstruct;
using $AnnotationMirror = ::javax::lang::model::element::AnnotationMirror;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $ModuleElement$Directive = ::javax::lang::model::element::ModuleElement$Directive;
using $Name = ::javax::lang::model::element::Name;
using $PackageElement = ::javax::lang::model::element::PackageElement;
using $RecordComponentElement = ::javax::lang::model::element::RecordComponentElement;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $ElementFilter = ::javax::lang::model::util::ElementFilter;
using $Elements$Origin = ::javax::lang::model::util::Elements$Origin;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$MethodInfo _Elements_MethodInfo_[] = {
	{"getAllAnnotationMirrors", "(Ljavax/lang/model/element/Element;)Ljava/util/List;", "(Ljavax/lang/model/element/Element;)Ljava/util/List<+Ljavax/lang/model/element/AnnotationMirror;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Elements, getAllAnnotationMirrors, $List*, $Element*)},
	{"getAllMembers", "(Ljavax/lang/model/element/TypeElement;)Ljava/util/List;", "(Ljavax/lang/model/element/TypeElement;)Ljava/util/List<+Ljavax/lang/model/element/Element;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Elements, getAllMembers, $List*, $TypeElement*)},
	{"getAllModuleElements", "()Ljava/util/Set;", "()Ljava/util/Set<+Ljavax/lang/model/element/ModuleElement;>;", $PUBLIC, $virtualMethod(Elements, getAllModuleElements, $Set*)},
	{"getAllPackageElements", "(Ljava/lang/CharSequence;)Ljava/util/Set;", "(Ljava/lang/CharSequence;)Ljava/util/Set<+Ljavax/lang/model/element/PackageElement;>;", $PUBLIC, $virtualMethod(Elements, getAllPackageElements, $Set*, $CharSequence*)},
	{"getAllTypeElements", "(Ljava/lang/CharSequence;)Ljava/util/Set;", "(Ljava/lang/CharSequence;)Ljava/util/Set<+Ljavax/lang/model/element/TypeElement;>;", $PUBLIC, $virtualMethod(Elements, getAllTypeElements, $Set*, $CharSequence*)},
	{"getBinaryName", "(Ljavax/lang/model/element/TypeElement;)Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Elements, getBinaryName, $Name*, $TypeElement*)},
	{"getConstantExpression", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Elements, getConstantExpression, $String*, Object$*)},
	{"getDocComment", "(Ljavax/lang/model/element/Element;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Elements, getDocComment, $String*, $Element*)},
	{"getElementValuesWithDefaults", "(Ljavax/lang/model/element/AnnotationMirror;)Ljava/util/Map;", "(Ljavax/lang/model/element/AnnotationMirror;)Ljava/util/Map<+Ljavax/lang/model/element/ExecutableElement;+Ljavax/lang/model/element/AnnotationValue;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Elements, getElementValuesWithDefaults, $Map*, $AnnotationMirror*)},
	{"getModuleElement", "(Ljava/lang/CharSequence;)Ljavax/lang/model/element/ModuleElement;", nullptr, $PUBLIC, $virtualMethod(Elements, getModuleElement, $ModuleElement*, $CharSequence*)},
	{"getModuleOf", "(Ljavax/lang/model/element/Element;)Ljavax/lang/model/element/ModuleElement;", nullptr, $PUBLIC, $virtualMethod(Elements, getModuleOf, $ModuleElement*, $Element*)},
	{"getName", "(Ljava/lang/CharSequence;)Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Elements, getName, $Name*, $CharSequence*)},
	{"getOrigin", "(Ljavax/lang/model/element/Element;)Ljavax/lang/model/util/Elements$Origin;", nullptr, $PUBLIC, $virtualMethod(Elements, getOrigin, $Elements$Origin*, $Element*)},
	{"getOrigin", "(Ljavax/lang/model/AnnotatedConstruct;Ljavax/lang/model/element/AnnotationMirror;)Ljavax/lang/model/util/Elements$Origin;", nullptr, $PUBLIC, $virtualMethod(Elements, getOrigin, $Elements$Origin*, $AnnotatedConstruct*, $AnnotationMirror*)},
	{"getOrigin", "(Ljavax/lang/model/element/ModuleElement;Ljavax/lang/model/element/ModuleElement$Directive;)Ljavax/lang/model/util/Elements$Origin;", nullptr, $PUBLIC, $virtualMethod(Elements, getOrigin, $Elements$Origin*, $ModuleElement*, $ModuleElement$Directive*)},
	{"getPackageElement", "(Ljava/lang/CharSequence;)Ljavax/lang/model/element/PackageElement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Elements, getPackageElement, $PackageElement*, $CharSequence*)},
	{"getPackageElement", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/CharSequence;)Ljavax/lang/model/element/PackageElement;", nullptr, $PUBLIC, $virtualMethod(Elements, getPackageElement, $PackageElement*, $ModuleElement*, $CharSequence*)},
	{"getPackageOf", "(Ljavax/lang/model/element/Element;)Ljavax/lang/model/element/PackageElement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Elements, getPackageOf, $PackageElement*, $Element*)},
	{"getTypeElement", "(Ljava/lang/CharSequence;)Ljavax/lang/model/element/TypeElement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Elements, getTypeElement, $TypeElement*, $CharSequence*)},
	{"getTypeElement", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/CharSequence;)Ljavax/lang/model/element/TypeElement;", nullptr, $PUBLIC, $virtualMethod(Elements, getTypeElement, $TypeElement*, $ModuleElement*, $CharSequence*)},
	{"hides", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/Element;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Elements, hides, bool, $Element*, $Element*)},
	{"isAutomaticModule", "(Ljavax/lang/model/element/ModuleElement;)Z", nullptr, $PUBLIC, $virtualMethod(Elements, isAutomaticModule, bool, $ModuleElement*)},
	{"isBridge", "(Ljavax/lang/model/element/ExecutableElement;)Z", nullptr, $PUBLIC, $virtualMethod(Elements, isBridge, bool, $ExecutableElement*)},
	{"isDeprecated", "(Ljavax/lang/model/element/Element;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Elements, isDeprecated, bool, $Element*)},
	{"isFunctionalInterface", "(Ljavax/lang/model/element/TypeElement;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Elements, isFunctionalInterface, bool, $TypeElement*)},
	{"overrides", "(Ljavax/lang/model/element/ExecutableElement;Ljavax/lang/model/element/ExecutableElement;Ljavax/lang/model/element/TypeElement;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Elements, overrides, bool, $ExecutableElement*, $ExecutableElement*, $TypeElement*)},
	{"printElements", "(Ljava/io/Writer;[Ljavax/lang/model/element/Element;)V", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(Elements, printElements, void, $Writer*, $ElementArray*)},
	{"recordComponentFor", "(Ljavax/lang/model/element/ExecutableElement;)Ljavax/lang/model/element/RecordComponentElement;", nullptr, $PUBLIC, $virtualMethod(Elements, recordComponentFor, $RecordComponentElement*, $ExecutableElement*)},
	{}
};

$InnerClassInfo _Elements_InnerClassesInfo_[] = {
	{"javax.lang.model.util.Elements$Origin", "javax.lang.model.util.Elements", "Origin", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Elements_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.util.Elements",
	nullptr,
	nullptr,
	nullptr,
	_Elements_MethodInfo_,
	nullptr,
	nullptr,
	_Elements_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.lang.model.util.Elements$Origin"
};

$Object* allocate$Elements($Class* clazz) {
	return $of($alloc(Elements));
}

$PackageElement* Elements::getPackageElement($ModuleElement* module, $CharSequence* name) {
	return nullptr;
}

$Set* Elements::getAllPackageElements($CharSequence* name) {
	$useLocalCurrentObjectStackCache();
	$var($Set, modules, getAllModuleElements());
	if ($nc(modules)->isEmpty()) {
		$var($PackageElement, packageElt, getPackageElement(name));
		return (packageElt != nullptr) ? $Collections::singleton(packageElt) : $Collections::emptySet();
	} else {
		$var($Set, result, $new($LinkedHashSet, 1));
		{
			$var($Iterator, i$, modules->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ModuleElement, module, $cast($ModuleElement, i$->next()));
				{
					$var($PackageElement, packageElt, getPackageElement(module, name));
					if (packageElt != nullptr) {
						result->add(packageElt);
					}
				}
			}
		}
		return $Collections::unmodifiableSet(result);
	}
}

$TypeElement* Elements::getTypeElement($ModuleElement* module, $CharSequence* name) {
	return nullptr;
}

$Set* Elements::getAllTypeElements($CharSequence* name) {
	$useLocalCurrentObjectStackCache();
	$var($Set, modules, getAllModuleElements());
	if ($nc(modules)->isEmpty()) {
		$var($TypeElement, typeElt, getTypeElement(name));
		return (typeElt != nullptr) ? $Collections::singleton(typeElt) : $Collections::emptySet();
	} else {
		$var($Set, result, $new($LinkedHashSet, 1));
		{
			$var($Iterator, i$, modules->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ModuleElement, module, $cast($ModuleElement, i$->next()));
				{
					$var($TypeElement, typeElt, getTypeElement(module, name));
					if (typeElt != nullptr) {
						result->add(typeElt);
					}
				}
			}
		}
		return $Collections::unmodifiableSet(result);
	}
}

$ModuleElement* Elements::getModuleElement($CharSequence* name) {
	return nullptr;
}

$Set* Elements::getAllModuleElements() {
	return $Collections::emptySet();
}

$Elements$Origin* Elements::getOrigin($Element* e) {
	$init($Elements$Origin);
	return $Elements$Origin::EXPLICIT;
}

$Elements$Origin* Elements::getOrigin($AnnotatedConstruct* c, $AnnotationMirror* a) {
	$init($Elements$Origin);
	return $Elements$Origin::EXPLICIT;
}

$Elements$Origin* Elements::getOrigin($ModuleElement* m, $ModuleElement$Directive* directive) {
	$init($Elements$Origin);
	return $Elements$Origin::EXPLICIT;
}

bool Elements::isBridge($ExecutableElement* e) {
	return false;
}

$ModuleElement* Elements::getModuleOf($Element* e) {
	return nullptr;
}

bool Elements::isAutomaticModule($ModuleElement* module) {
	return false;
}

$RecordComponentElement* Elements::recordComponentFor($ExecutableElement* accessor) {
	$useLocalCurrentObjectStackCache();
	$init($ElementKind);
	if ($nc($($nc(accessor)->getEnclosingElement()))->getKind() == $ElementKind::RECORD) {
		{
			$var($Iterator, i$, $nc($($ElementFilter::recordComponentsIn($(static_cast<$Iterable*>($nc($(accessor->getEnclosingElement()))->getEnclosedElements())))))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($RecordComponentElement, rec, $cast($RecordComponentElement, i$->next()));
				{
					if ($Objects::equals($($nc(rec)->getAccessor()), accessor)) {
						return rec;
					}
				}
			}
		}
	}
	return nullptr;
}

$Class* Elements::load$($String* name, bool initialize) {
	$loadClass(Elements, name, initialize, &_Elements_ClassInfo_, allocate$Elements);
	return class$;
}

$Class* Elements::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax