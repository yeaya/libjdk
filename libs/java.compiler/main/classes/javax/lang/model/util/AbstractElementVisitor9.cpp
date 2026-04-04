#include <javax/lang/model/util/AbstractElementVisitor9.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/util/AbstractElementVisitor8.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $AbstractElementVisitor8 = ::javax::lang::model::util::AbstractElementVisitor8;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void AbstractElementVisitor9::init$() {
	$AbstractElementVisitor8::init$();
}

AbstractElementVisitor9::AbstractElementVisitor9() {
}

$Class* AbstractElementVisitor9::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractElementVisitor9, init$, void)},
		{"visitModule", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ModuleElement;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(AbstractElementVisitor9, visitModule, $Object*, $ModuleElement*, Object$*)},
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
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.lang.model.util.AbstractElementVisitor9",
		"javax.lang.model.util.AbstractElementVisitor8",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractElementVisitor8<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AbstractElementVisitor9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractElementVisitor9);
	});
	return class$;
}

$Class* AbstractElementVisitor9::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax