#include <javax/lang/model/util/ElementScanner9.h>
#include <java/lang/Iterable.h>
#include <java/util/List.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/util/ElementScanner6.h>
#include <javax/lang/model/util/ElementScanner8.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $ElementScanner8 = ::javax::lang::model::util::ElementScanner8;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void ElementScanner9::init$() {
	$ElementScanner8::init$(nullptr);
}

void ElementScanner9::init$(Object$* defaultValue) {
	$ElementScanner8::init$(defaultValue);
}

$Object* ElementScanner9::visitModule($ModuleElement* e, Object$* p) {
	return scan($($nc(e)->getEnclosedElements()), p);
}

ElementScanner9::ElementScanner9() {
}

$Class* ElementScanner9::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ElementScanner9, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(ElementScanner9, init$, void, Object$*)},
		{"visitModule", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ModuleElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementScanner9, visitModule, $Object*, $ModuleElement*, Object$*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_14"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljavax/annotation/processing/SupportedSourceVersion;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.util.ElementScanner9",
		"javax.lang.model.util.ElementScanner8",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/ElementScanner8<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ElementScanner9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ElementScanner9);
	});
	return class$;
}

$Class* ElementScanner9::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax