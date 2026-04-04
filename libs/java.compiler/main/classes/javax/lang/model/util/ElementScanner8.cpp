#include <javax/lang/model/util/ElementScanner8.h>
#include <javax/lang/model/util/ElementScanner7.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ElementScanner7 = ::javax::lang::model::util::ElementScanner7;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void ElementScanner8::init$() {
	$ElementScanner7::init$(nullptr);
}

void ElementScanner8::init$(Object$* defaultValue) {
	$ElementScanner7::init$(defaultValue);
}

ElementScanner8::ElementScanner8() {
}

$Class* ElementScanner8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ElementScanner8, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(ElementScanner8, init$, void, Object$*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_8"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljavax/annotation/processing/SupportedSourceVersion;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.util.ElementScanner8",
		"javax.lang.model.util.ElementScanner7",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/ElementScanner7<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ElementScanner8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ElementScanner8);
	});
	return class$;
}

$Class* ElementScanner8::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax