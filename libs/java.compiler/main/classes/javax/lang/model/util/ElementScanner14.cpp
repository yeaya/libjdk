#include <javax/lang/model/util/ElementScanner14.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/Parameterizable.h>
#include <javax/lang/model/element/RecordComponentElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/util/ElementScanner6.h>
#include <javax/lang/model/util/ElementScanner9.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $Parameterizable = ::javax::lang::model::element::Parameterizable;
using $RecordComponentElement = ::javax::lang::model::element::RecordComponentElement;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $ElementScanner9 = ::javax::lang::model::util::ElementScanner9;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void ElementScanner14::init$() {
	$ElementScanner9::init$(nullptr);
}

void ElementScanner14::init$(Object$* defaultValue) {
	$ElementScanner9::init$(defaultValue);
}

$Object* ElementScanner14::visitType($TypeElement* e, Object$* p) {
	$useLocalObjectStack();
	return scan($(createScanningList(e, $($nc(e)->getEnclosedElements()))), p);
}

$Object* ElementScanner14::visitExecutable($ExecutableElement* e, Object$* p) {
	$useLocalObjectStack();
	return scan($(createScanningList(e, $($nc(e)->getParameters()))), p);
}

$List* ElementScanner14::createScanningList($Parameterizable* element, $List* toBeScanned) {
	$useLocalObjectStack();
	$var($List, typeParameters, $nc(element)->getTypeParameters());
	if ($nc(typeParameters)->isEmpty()) {
		return toBeScanned;
	} else {
		$var($List, scanningList, $new($ArrayList, typeParameters));
		scanningList->addAll(toBeScanned);
		return scanningList;
	}
}

$Object* ElementScanner14::visitRecordComponent($RecordComponentElement* e, Object$* p) {
	return scan($($nc(e)->getEnclosedElements()), p);
}

ElementScanner14::ElementScanner14() {
}

$Class* ElementScanner14::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ElementScanner14, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(ElementScanner14, init$, void, Object$*)},
		{"createScanningList", "(Ljavax/lang/model/element/Parameterizable;Ljava/util/List;)Ljava/util/List;", "(Ljavax/lang/model/element/Parameterizable;Ljava/util/List<+Ljavax/lang/model/element/Element;>;)Ljava/util/List<+Ljavax/lang/model/element/Element;>;", $PRIVATE, $method(ElementScanner14, createScanningList, $List*, $Parameterizable*, $List*)},
		{"visitExecutable", "(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ExecutableElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementScanner14, visitExecutable, $Object*, $ExecutableElement*, Object$*)},
		{"visitRecordComponent", "(Ljavax/lang/model/element/RecordComponentElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/RecordComponentElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementScanner14, visitRecordComponent, $Object*, $RecordComponentElement*, Object$*)},
		{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/TypeElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementScanner14, visitType, $Object*, $TypeElement*, Object$*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_17"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljavax/annotation/processing/SupportedSourceVersion;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.util.ElementScanner14",
		"javax.lang.model.util.ElementScanner9",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/ElementScanner9<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ElementScanner14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ElementScanner14);
	});
	return class$;
}

$Class* ElementScanner14::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax