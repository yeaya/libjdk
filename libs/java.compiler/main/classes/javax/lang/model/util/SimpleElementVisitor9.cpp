#include <javax/lang/model/util/SimpleElementVisitor9.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/util/SimpleElementVisitor6.h>
#include <javax/lang/model/util/SimpleElementVisitor8.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $SimpleElementVisitor8 = ::javax::lang::model::util::SimpleElementVisitor8;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void SimpleElementVisitor9::init$() {
	$SimpleElementVisitor8::init$(nullptr);
}

void SimpleElementVisitor9::init$(Object$* defaultValue) {
	$SimpleElementVisitor8::init$(defaultValue);
}

$Object* SimpleElementVisitor9::visitModule($ModuleElement* e, Object$* p) {
	return defaultAction(e, p);
}

SimpleElementVisitor9::SimpleElementVisitor9() {
}

$Class* SimpleElementVisitor9::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(SimpleElementVisitor9, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(SimpleElementVisitor9, init$, void, Object$*)},
		{"visitModule", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ModuleElement;TP;)TR;", $PUBLIC, $virtualMethod(SimpleElementVisitor9, visitModule, $Object*, $ModuleElement*, Object$*)},
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
		"javax.lang.model.util.SimpleElementVisitor9",
		"javax.lang.model.util.SimpleElementVisitor8",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleElementVisitor8<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SimpleElementVisitor9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleElementVisitor9);
	});
	return class$;
}

$Class* SimpleElementVisitor9::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax