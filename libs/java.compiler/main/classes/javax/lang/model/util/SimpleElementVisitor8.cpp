#include <javax/lang/model/util/SimpleElementVisitor8.h>
#include <javax/lang/model/util/SimpleElementVisitor7.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SimpleElementVisitor7 = ::javax::lang::model::util::SimpleElementVisitor7;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void SimpleElementVisitor8::init$() {
	$SimpleElementVisitor7::init$(nullptr);
}

void SimpleElementVisitor8::init$(Object$* defaultValue) {
	$SimpleElementVisitor7::init$(defaultValue);
}

SimpleElementVisitor8::SimpleElementVisitor8() {
}

$Class* SimpleElementVisitor8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(SimpleElementVisitor8, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(SimpleElementVisitor8, init$, void, Object$*)},
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
		"javax.lang.model.util.SimpleElementVisitor8",
		"javax.lang.model.util.SimpleElementVisitor7",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleElementVisitor7<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SimpleElementVisitor8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleElementVisitor8);
	});
	return class$;
}

$Class* SimpleElementVisitor8::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax