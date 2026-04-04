#include <javax/lang/model/util/ElementKindVisitor8.h>
#include <javax/lang/model/util/ElementKindVisitor7.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ElementKindVisitor7 = ::javax::lang::model::util::ElementKindVisitor7;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void ElementKindVisitor8::init$() {
	$ElementKindVisitor7::init$(nullptr);
}

void ElementKindVisitor8::init$(Object$* defaultValue) {
	$ElementKindVisitor7::init$(defaultValue);
}

ElementKindVisitor8::ElementKindVisitor8() {
}

$Class* ElementKindVisitor8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ElementKindVisitor8, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(ElementKindVisitor8, init$, void, Object$*)},
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
		"javax.lang.model.util.ElementKindVisitor8",
		"javax.lang.model.util.ElementKindVisitor7",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/ElementKindVisitor7<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ElementKindVisitor8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ElementKindVisitor8);
	});
	return class$;
}

$Class* ElementKindVisitor8::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax