#include <javax/lang/model/util/SimpleTypeVisitor14.h>
#include <javax/lang/model/util/SimpleTypeVisitor9.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SimpleTypeVisitor9 = ::javax::lang::model::util::SimpleTypeVisitor9;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void SimpleTypeVisitor14::init$() {
	$SimpleTypeVisitor9::init$(nullptr);
}

void SimpleTypeVisitor14::init$(Object$* defaultValue) {
	$SimpleTypeVisitor9::init$(defaultValue);
}

SimpleTypeVisitor14::SimpleTypeVisitor14() {
}

$Class* SimpleTypeVisitor14::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(SimpleTypeVisitor14, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(SimpleTypeVisitor14, init$, void, Object$*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_17"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljavax/annotation/processing/SupportedSourceVersion;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.util.SimpleTypeVisitor14",
		"javax.lang.model.util.SimpleTypeVisitor9",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleTypeVisitor9<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SimpleTypeVisitor14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleTypeVisitor14);
	});
	return class$;
}

$Class* SimpleTypeVisitor14::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax