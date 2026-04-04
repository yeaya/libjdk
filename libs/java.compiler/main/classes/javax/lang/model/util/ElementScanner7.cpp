#include <javax/lang/model/util/ElementScanner7.h>
#include <java/lang/Iterable.h>
#include <java/util/List.h>
#include <javax/lang/model/element/VariableElement.h>
#include <javax/lang/model/util/ElementScanner6.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $VariableElement = ::javax::lang::model::element::VariableElement;
using $ElementScanner6 = ::javax::lang::model::util::ElementScanner6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void ElementScanner7::init$() {
	$ElementScanner6::init$(nullptr);
}

void ElementScanner7::init$(Object$* defaultValue) {
	$ElementScanner6::init$(defaultValue);
}

$Object* ElementScanner7::visitVariable($VariableElement* e, Object$* p) {
	return scan($($nc(e)->getEnclosedElements()), p);
}

ElementScanner7::ElementScanner7() {
}

$Class* ElementScanner7::load$($String* name, bool initialize) {
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
		{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(ElementScanner7, init$, void), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED | $DEPRECATED, $method(ElementScanner7, init$, void, Object$*), nullptr, nullptr, init$methodAnnotations$$$1},
		{"visitVariable", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC, $virtualMethod(ElementScanner7, visitVariable, $Object*, $VariableElement*, Object$*)},
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
		"javax.lang.model.util.ElementScanner7",
		"javax.lang.model.util.ElementScanner6",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/ElementScanner6<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ElementScanner7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ElementScanner7);
	});
	return class$;
}

$Class* ElementScanner7::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax