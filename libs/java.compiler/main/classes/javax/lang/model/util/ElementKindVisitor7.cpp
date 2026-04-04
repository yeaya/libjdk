#include <javax/lang/model/util/ElementKindVisitor7.h>
#include <javax/lang/model/element/VariableElement.h>
#include <javax/lang/model/util/ElementKindVisitor6.h>
#include <javax/lang/model/util/SimpleElementVisitor6.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $VariableElement = ::javax::lang::model::element::VariableElement;
using $ElementKindVisitor6 = ::javax::lang::model::util::ElementKindVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void ElementKindVisitor7::init$() {
	$ElementKindVisitor6::init$(nullptr);
}

void ElementKindVisitor7::init$(Object$* defaultValue) {
	$ElementKindVisitor6::init$(defaultValue);
}

$Object* ElementKindVisitor7::visitVariableAsResourceVariable($VariableElement* e, Object$* p) {
	return defaultAction(e, p);
}

ElementKindVisitor7::ElementKindVisitor7() {
}

$Class* ElementKindVisitor7::load$($String* name, bool initialize) {
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
		{"since", 's', "12"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$1$namedAttribute[] = {
		{"since", 's', "12"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", init$methodAnnotations$$$1$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(ElementKindVisitor7, init$, void), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED | $DEPRECATED, $method(ElementKindVisitor7, init$, void, Object$*), nullptr, nullptr, init$methodAnnotations$$$1},
		{"visitVariableAsResourceVariable", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementKindVisitor7, visitVariableAsResourceVariable, $Object*, $VariableElement*, Object$*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_7"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljavax/annotation/processing/SupportedSourceVersion;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.util.ElementKindVisitor7",
		"javax.lang.model.util.ElementKindVisitor6",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/ElementKindVisitor6<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ElementKindVisitor7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ElementKindVisitor7);
	});
	return class$;
}

$Class* ElementKindVisitor7::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax