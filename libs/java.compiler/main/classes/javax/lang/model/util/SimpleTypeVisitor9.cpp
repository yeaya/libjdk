#include <javax/lang/model/util/SimpleTypeVisitor9.h>
#include <javax/lang/model/util/SimpleTypeVisitor8.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SimpleTypeVisitor8 = ::javax::lang::model::util::SimpleTypeVisitor8;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void SimpleTypeVisitor9::init$() {
	$SimpleTypeVisitor8::init$(nullptr);
}

void SimpleTypeVisitor9::init$(Object$* defaultValue) {
	$SimpleTypeVisitor8::init$(defaultValue);
}

SimpleTypeVisitor9::SimpleTypeVisitor9() {
}

$Class* SimpleTypeVisitor9::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(SimpleTypeVisitor9, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(SimpleTypeVisitor9, init$, void, Object$*)},
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
		"javax.lang.model.util.SimpleTypeVisitor9",
		"javax.lang.model.util.SimpleTypeVisitor8",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleTypeVisitor8<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SimpleTypeVisitor9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleTypeVisitor9);
	});
	return class$;
}

$Class* SimpleTypeVisitor9::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax