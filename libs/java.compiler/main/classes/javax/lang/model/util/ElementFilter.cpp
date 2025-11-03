#include <javax/lang/model/util/ElementFilter.h>

#include <java/lang/Enum.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/EnumSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/ModuleElement$Directive.h>
#include <javax/lang/model/element/ModuleElement$DirectiveKind.h>
#include <javax/lang/model/element/ModuleElement$ExportsDirective.h>
#include <javax/lang/model/element/ModuleElement$OpensDirective.h>
#include <javax/lang/model/element/ModuleElement$ProvidesDirective.h>
#include <javax/lang/model/element/ModuleElement$RequiresDirective.h>
#include <javax/lang/model/element/ModuleElement$UsesDirective.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/PackageElement.h>
#include <javax/lang/model/element/RecordComponentElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/element/VariableElement.h>
#include <jcpp.h>

#undef ANNOTATION_TYPE
#undef CLASS
#undef CONSTRUCTOR
#undef CONSTRUCTOR_KIND
#undef ENUM
#undef ENUM_CONSTANT
#undef EXPORTS
#undef FIELD
#undef FIELD_KINDS
#undef INTERFACE
#undef METHOD
#undef METHOD_KIND
#undef MODULE
#undef MODULE_KIND
#undef OPENS
#undef PACKAGE
#undef PACKAGE_KIND
#undef PROVIDES
#undef RECORD
#undef RECORD_COMPONENT
#undef RECORD_COMPONENT_KIND
#undef REQUIRES
#undef TYPE_KINDS
#undef USES

using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $EnumSet = ::java::util::EnumSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $ModuleElement$Directive = ::javax::lang::model::element::ModuleElement$Directive;
using $ModuleElement$DirectiveKind = ::javax::lang::model::element::ModuleElement$DirectiveKind;
using $ModuleElement$ExportsDirective = ::javax::lang::model::element::ModuleElement$ExportsDirective;
using $ModuleElement$OpensDirective = ::javax::lang::model::element::ModuleElement$OpensDirective;
using $ModuleElement$ProvidesDirective = ::javax::lang::model::element::ModuleElement$ProvidesDirective;
using $ModuleElement$RequiresDirective = ::javax::lang::model::element::ModuleElement$RequiresDirective;
using $ModuleElement$UsesDirective = ::javax::lang::model::element::ModuleElement$UsesDirective;
using $PackageElement = ::javax::lang::model::element::PackageElement;
using $RecordComponentElement = ::javax::lang::model::element::RecordComponentElement;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $VariableElement = ::javax::lang::model::element::VariableElement;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$FieldInfo _ElementFilter_FieldInfo_[] = {
	{"CONSTRUCTOR_KIND", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/lang/model/element/ElementKind;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ElementFilter, CONSTRUCTOR_KIND)},
	{"FIELD_KINDS", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/lang/model/element/ElementKind;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ElementFilter, FIELD_KINDS)},
	{"METHOD_KIND", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/lang/model/element/ElementKind;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ElementFilter, METHOD_KIND)},
	{"PACKAGE_KIND", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/lang/model/element/ElementKind;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ElementFilter, PACKAGE_KIND)},
	{"MODULE_KIND", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/lang/model/element/ElementKind;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ElementFilter, MODULE_KIND)},
	{"TYPE_KINDS", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/lang/model/element/ElementKind;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ElementFilter, TYPE_KINDS)},
	{"RECORD_COMPONENT_KIND", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/lang/model/element/ElementKind;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ElementFilter, RECORD_COMPONENT_KIND)},
	{}
};

$MethodInfo _ElementFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ElementFilter::*)()>(&ElementFilter::init$))},
	{"constructorsIn", "(Ljava/lang/Iterable;)Ljava/util/List;", "(Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;)Ljava/util/List<Ljavax/lang/model/element/ExecutableElement;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($Iterable*)>(&ElementFilter::constructorsIn))},
	{"constructorsIn", "(Ljava/util/Set;)Ljava/util/Set;", "(Ljava/util/Set<+Ljavax/lang/model/element/Element;>;)Ljava/util/Set<Ljavax/lang/model/element/ExecutableElement;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)($Set*)>(&ElementFilter::constructorsIn))},
	{"exportsIn", "(Ljava/lang/Iterable;)Ljava/util/List;", "(Ljava/lang/Iterable<+Ljavax/lang/model/element/ModuleElement$Directive;>;)Ljava/util/List<Ljavax/lang/model/element/ModuleElement$ExportsDirective;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($Iterable*)>(&ElementFilter::exportsIn))},
	{"fieldsIn", "(Ljava/lang/Iterable;)Ljava/util/List;", "(Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;)Ljava/util/List<Ljavax/lang/model/element/VariableElement;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($Iterable*)>(&ElementFilter::fieldsIn))},
	{"fieldsIn", "(Ljava/util/Set;)Ljava/util/Set;", "(Ljava/util/Set<+Ljavax/lang/model/element/Element;>;)Ljava/util/Set<Ljavax/lang/model/element/VariableElement;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)($Set*)>(&ElementFilter::fieldsIn))},
	{"listFilter", "(Ljava/lang/Iterable;Ljava/util/Set;Ljava/lang/Class;)Ljava/util/List;", "<E::Ljavax/lang/model/element/Element;>(Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;Ljava/util/Set<Ljavax/lang/model/element/ElementKind;>;Ljava/lang/Class<TE;>;)Ljava/util/List<TE;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($Iterable*,$Set*,$Class*)>(&ElementFilter::listFilter))},
	{"listFilter", "(Ljava/lang/Iterable;Ljavax/lang/model/element/ModuleElement$DirectiveKind;Ljava/lang/Class;)Ljava/util/List;", "<D::Ljavax/lang/model/element/ModuleElement$Directive;>(Ljava/lang/Iterable<+Ljavax/lang/model/element/ModuleElement$Directive;>;Ljavax/lang/model/element/ModuleElement$DirectiveKind;Ljava/lang/Class<TD;>;)Ljava/util/List<TD;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($Iterable*,$ModuleElement$DirectiveKind*,$Class*)>(&ElementFilter::listFilter))},
	{"methodsIn", "(Ljava/lang/Iterable;)Ljava/util/List;", "(Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;)Ljava/util/List<Ljavax/lang/model/element/ExecutableElement;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($Iterable*)>(&ElementFilter::methodsIn))},
	{"methodsIn", "(Ljava/util/Set;)Ljava/util/Set;", "(Ljava/util/Set<+Ljavax/lang/model/element/Element;>;)Ljava/util/Set<Ljavax/lang/model/element/ExecutableElement;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)($Set*)>(&ElementFilter::methodsIn))},
	{"modulesIn", "(Ljava/lang/Iterable;)Ljava/util/List;", "(Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;)Ljava/util/List<Ljavax/lang/model/element/ModuleElement;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($Iterable*)>(&ElementFilter::modulesIn))},
	{"modulesIn", "(Ljava/util/Set;)Ljava/util/Set;", "(Ljava/util/Set<+Ljavax/lang/model/element/Element;>;)Ljava/util/Set<Ljavax/lang/model/element/ModuleElement;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)($Set*)>(&ElementFilter::modulesIn))},
	{"opensIn", "(Ljava/lang/Iterable;)Ljava/util/List;", "(Ljava/lang/Iterable<+Ljavax/lang/model/element/ModuleElement$Directive;>;)Ljava/util/List<Ljavax/lang/model/element/ModuleElement$OpensDirective;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($Iterable*)>(&ElementFilter::opensIn))},
	{"packagesIn", "(Ljava/lang/Iterable;)Ljava/util/List;", "(Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;)Ljava/util/List<Ljavax/lang/model/element/PackageElement;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($Iterable*)>(&ElementFilter::packagesIn))},
	{"packagesIn", "(Ljava/util/Set;)Ljava/util/Set;", "(Ljava/util/Set<+Ljavax/lang/model/element/Element;>;)Ljava/util/Set<Ljavax/lang/model/element/PackageElement;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)($Set*)>(&ElementFilter::packagesIn))},
	{"providesIn", "(Ljava/lang/Iterable;)Ljava/util/List;", "(Ljava/lang/Iterable<+Ljavax/lang/model/element/ModuleElement$Directive;>;)Ljava/util/List<Ljavax/lang/model/element/ModuleElement$ProvidesDirective;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($Iterable*)>(&ElementFilter::providesIn))},
	{"recordComponentsIn", "(Ljava/lang/Iterable;)Ljava/util/List;", "(Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;)Ljava/util/List<Ljavax/lang/model/element/RecordComponentElement;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($Iterable*)>(&ElementFilter::recordComponentsIn))},
	{"recordComponentsIn", "(Ljava/util/Set;)Ljava/util/Set;", "(Ljava/util/Set<+Ljavax/lang/model/element/Element;>;)Ljava/util/Set<Ljavax/lang/model/element/RecordComponentElement;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)($Set*)>(&ElementFilter::recordComponentsIn))},
	{"requiresIn", "(Ljava/lang/Iterable;)Ljava/util/List;", "(Ljava/lang/Iterable<+Ljavax/lang/model/element/ModuleElement$Directive;>;)Ljava/util/List<Ljavax/lang/model/element/ModuleElement$RequiresDirective;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($Iterable*)>(&ElementFilter::requiresIn))},
	{"setFilter", "(Ljava/util/Set;Ljava/util/Set;Ljava/lang/Class;)Ljava/util/Set;", "<E::Ljavax/lang/model/element/Element;>(Ljava/util/Set<+Ljavax/lang/model/element/Element;>;Ljava/util/Set<Ljavax/lang/model/element/ElementKind;>;Ljava/lang/Class<TE;>;)Ljava/util/Set<TE;>;", $PRIVATE | $STATIC, $method(static_cast<$Set*(*)($Set*,$Set*,$Class*)>(&ElementFilter::setFilter))},
	{"typesIn", "(Ljava/lang/Iterable;)Ljava/util/List;", "(Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;)Ljava/util/List<Ljavax/lang/model/element/TypeElement;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($Iterable*)>(&ElementFilter::typesIn))},
	{"typesIn", "(Ljava/util/Set;)Ljava/util/Set;", "(Ljava/util/Set<+Ljavax/lang/model/element/Element;>;)Ljava/util/Set<Ljavax/lang/model/element/TypeElement;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)($Set*)>(&ElementFilter::typesIn))},
	{"usesIn", "(Ljava/lang/Iterable;)Ljava/util/List;", "(Ljava/lang/Iterable<+Ljavax/lang/model/element/ModuleElement$Directive;>;)Ljava/util/List<Ljavax/lang/model/element/ModuleElement$UsesDirective;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($Iterable*)>(&ElementFilter::usesIn))},
	{}
};

$ClassInfo _ElementFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.ElementFilter",
	"java.lang.Object",
	nullptr,
	_ElementFilter_FieldInfo_,
	_ElementFilter_MethodInfo_
};

$Object* allocate$ElementFilter($Class* clazz) {
	return $of($alloc(ElementFilter));
}

$Set* ElementFilter::CONSTRUCTOR_KIND = nullptr;
$Set* ElementFilter::FIELD_KINDS = nullptr;
$Set* ElementFilter::METHOD_KIND = nullptr;
$Set* ElementFilter::PACKAGE_KIND = nullptr;
$Set* ElementFilter::MODULE_KIND = nullptr;
$Set* ElementFilter::TYPE_KINDS = nullptr;
$Set* ElementFilter::RECORD_COMPONENT_KIND = nullptr;

void ElementFilter::init$() {
}

$List* ElementFilter::fieldsIn($Iterable* elements) {
	$init(ElementFilter);
	$load($VariableElement);
	return listFilter(elements, ElementFilter::FIELD_KINDS, $VariableElement::class$);
}

$Set* ElementFilter::fieldsIn($Set* elements) {
	$init(ElementFilter);
	$load($VariableElement);
	return setFilter(elements, ElementFilter::FIELD_KINDS, $VariableElement::class$);
}

$List* ElementFilter::recordComponentsIn($Iterable* elements) {
	$init(ElementFilter);
	$load($RecordComponentElement);
	return listFilter(elements, ElementFilter::RECORD_COMPONENT_KIND, $RecordComponentElement::class$);
}

$Set* ElementFilter::recordComponentsIn($Set* elements) {
	$init(ElementFilter);
	$load($RecordComponentElement);
	return setFilter(elements, ElementFilter::RECORD_COMPONENT_KIND, $RecordComponentElement::class$);
}

$List* ElementFilter::constructorsIn($Iterable* elements) {
	$init(ElementFilter);
	$load($ExecutableElement);
	return listFilter(elements, ElementFilter::CONSTRUCTOR_KIND, $ExecutableElement::class$);
}

$Set* ElementFilter::constructorsIn($Set* elements) {
	$init(ElementFilter);
	$load($ExecutableElement);
	return setFilter(elements, ElementFilter::CONSTRUCTOR_KIND, $ExecutableElement::class$);
}

$List* ElementFilter::methodsIn($Iterable* elements) {
	$init(ElementFilter);
	$load($ExecutableElement);
	return listFilter(elements, ElementFilter::METHOD_KIND, $ExecutableElement::class$);
}

$Set* ElementFilter::methodsIn($Set* elements) {
	$init(ElementFilter);
	$load($ExecutableElement);
	return setFilter(elements, ElementFilter::METHOD_KIND, $ExecutableElement::class$);
}

$List* ElementFilter::typesIn($Iterable* elements) {
	$init(ElementFilter);
	$load($TypeElement);
	return listFilter(elements, ElementFilter::TYPE_KINDS, $TypeElement::class$);
}

$Set* ElementFilter::typesIn($Set* elements) {
	$init(ElementFilter);
	$load($TypeElement);
	return setFilter(elements, ElementFilter::TYPE_KINDS, $TypeElement::class$);
}

$List* ElementFilter::packagesIn($Iterable* elements) {
	$init(ElementFilter);
	$load($PackageElement);
	return listFilter(elements, ElementFilter::PACKAGE_KIND, $PackageElement::class$);
}

$Set* ElementFilter::packagesIn($Set* elements) {
	$init(ElementFilter);
	$load($PackageElement);
	return setFilter(elements, ElementFilter::PACKAGE_KIND, $PackageElement::class$);
}

$List* ElementFilter::modulesIn($Iterable* elements) {
	$init(ElementFilter);
	$load($ModuleElement);
	return listFilter(elements, ElementFilter::MODULE_KIND, $ModuleElement::class$);
}

$Set* ElementFilter::modulesIn($Set* elements) {
	$init(ElementFilter);
	$load($ModuleElement);
	return setFilter(elements, ElementFilter::MODULE_KIND, $ModuleElement::class$);
}

$List* ElementFilter::listFilter($Iterable* elements, $Set* targetKinds, $Class* clazz) {
	$init(ElementFilter);
	$useLocalCurrentObjectStackCache();
	$var($List, list, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(elements)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Element, e, $cast($Element, i$->next()));
			{
				if ($nc(targetKinds)->contains($($nc(e)->getKind()))) {
					list->add($cast($Element, $($nc(clazz)->cast(e))));
				}
			}
		}
	}
	return list;
}

$Set* ElementFilter::setFilter($Set* elements, $Set* targetKinds, $Class* clazz) {
	$init(ElementFilter);
	$useLocalCurrentObjectStackCache();
	$var($Set, set, $new($LinkedHashSet));
	{
		$var($Iterator, i$, $nc(elements)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Element, e, $cast($Element, i$->next()));
			{
				if ($nc(targetKinds)->contains($($nc(e)->getKind()))) {
					set->add($cast($Element, $($nc(clazz)->cast(e))));
				}
			}
		}
	}
	return set;
}

$List* ElementFilter::exportsIn($Iterable* directives) {
	$init(ElementFilter);
	$init($ModuleElement$DirectiveKind);
	$load($ModuleElement$ExportsDirective);
	return listFilter(directives, $ModuleElement$DirectiveKind::EXPORTS, $ModuleElement$ExportsDirective::class$);
}

$List* ElementFilter::opensIn($Iterable* directives) {
	$init(ElementFilter);
	$init($ModuleElement$DirectiveKind);
	$load($ModuleElement$OpensDirective);
	return listFilter(directives, $ModuleElement$DirectiveKind::OPENS, $ModuleElement$OpensDirective::class$);
}

$List* ElementFilter::providesIn($Iterable* directives) {
	$init(ElementFilter);
	$init($ModuleElement$DirectiveKind);
	$load($ModuleElement$ProvidesDirective);
	return listFilter(directives, $ModuleElement$DirectiveKind::PROVIDES, $ModuleElement$ProvidesDirective::class$);
}

$List* ElementFilter::requiresIn($Iterable* directives) {
	$init(ElementFilter);
	$init($ModuleElement$DirectiveKind);
	$load($ModuleElement$RequiresDirective);
	return listFilter(directives, $ModuleElement$DirectiveKind::REQUIRES, $ModuleElement$RequiresDirective::class$);
}

$List* ElementFilter::usesIn($Iterable* directives) {
	$init(ElementFilter);
	$init($ModuleElement$DirectiveKind);
	$load($ModuleElement$UsesDirective);
	return listFilter(directives, $ModuleElement$DirectiveKind::USES, $ModuleElement$UsesDirective::class$);
}

$List* ElementFilter::listFilter($Iterable* directives, $ModuleElement$DirectiveKind* directiveKind, $Class* clazz) {
	$init(ElementFilter);
	$useLocalCurrentObjectStackCache();
	$var($List, list, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(directives)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ModuleElement$Directive, d, $cast($ModuleElement$Directive, i$->next()));
			{
				if ($nc(d)->getKind() == directiveKind) {
					list->add($cast($ModuleElement$Directive, $($nc(clazz)->cast(d))));
				}
			}
		}
	}
	return list;
}

void clinit$ElementFilter($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($ElementKind);
	$assignStatic(ElementFilter::CONSTRUCTOR_KIND, $Collections::unmodifiableSet($($EnumSet::of($ElementKind::CONSTRUCTOR))));
	$assignStatic(ElementFilter::FIELD_KINDS, $Collections::unmodifiableSet($($EnumSet::of(static_cast<$Enum*>($ElementKind::FIELD), static_cast<$Enum*>($ElementKind::ENUM_CONSTANT)))));
	$assignStatic(ElementFilter::METHOD_KIND, $Collections::unmodifiableSet($($EnumSet::of($ElementKind::METHOD))));
	$assignStatic(ElementFilter::PACKAGE_KIND, $Collections::unmodifiableSet($($EnumSet::of($ElementKind::PACKAGE))));
	$assignStatic(ElementFilter::MODULE_KIND, $Collections::unmodifiableSet($($EnumSet::of($ElementKind::MODULE))));
	$assignStatic(ElementFilter::TYPE_KINDS, $Collections::unmodifiableSet($($EnumSet::of($ElementKind::CLASS, $ElementKind::ENUM, $ElementKind::INTERFACE, $ElementKind::RECORD, $ElementKind::ANNOTATION_TYPE))));
	$assignStatic(ElementFilter::RECORD_COMPONENT_KIND, $Set::of($of($ElementKind::RECORD_COMPONENT)));
}

ElementFilter::ElementFilter() {
}

$Class* ElementFilter::load$($String* name, bool initialize) {
	$loadClass(ElementFilter, name, initialize, &_ElementFilter_ClassInfo_, clinit$ElementFilter, allocate$ElementFilter);
	return class$;
}

$Class* ElementFilter::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax