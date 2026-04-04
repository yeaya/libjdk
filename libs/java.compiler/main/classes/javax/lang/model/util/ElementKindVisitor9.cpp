#include <javax/lang/model/util/ElementKindVisitor9.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/util/ElementKindVisitor8.h>
#include <javax/lang/model/util/SimpleElementVisitor6.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $ElementKindVisitor8 = ::javax::lang::model::util::ElementKindVisitor8;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void ElementKindVisitor9::init$() {
	$ElementKindVisitor8::init$(nullptr);
}

void ElementKindVisitor9::init$(Object$* defaultValue) {
	$ElementKindVisitor8::init$(defaultValue);
}

$Object* ElementKindVisitor9::visitModule($ModuleElement* e, Object$* p) {
	return defaultAction(e, p);
}

ElementKindVisitor9::ElementKindVisitor9() {
}

$Class* ElementKindVisitor9::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ElementKindVisitor9, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(ElementKindVisitor9, init$, void, Object$*)},
		{"visitModule", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ModuleElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor9, visitModule, $Object*, $ModuleElement*, Object$*)},
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
		"javax.lang.model.util.ElementKindVisitor9",
		"javax.lang.model.util.ElementKindVisitor8",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/ElementKindVisitor8<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ElementKindVisitor9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ElementKindVisitor9);
	});
	return class$;
}

$Class* ElementKindVisitor9::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax