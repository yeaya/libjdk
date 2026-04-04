#include <javax/lang/model/util/AbstractElementVisitor8.h>
#include <javax/lang/model/util/AbstractElementVisitor7.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractElementVisitor7 = ::javax::lang::model::util::AbstractElementVisitor7;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void AbstractElementVisitor8::init$() {
	$AbstractElementVisitor7::init$();
}

AbstractElementVisitor8::AbstractElementVisitor8() {
}

$Class* AbstractElementVisitor8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractElementVisitor8, init$, void)},
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
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.lang.model.util.AbstractElementVisitor8",
		"javax.lang.model.util.AbstractElementVisitor7",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractElementVisitor7<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AbstractElementVisitor8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractElementVisitor8);
	});
	return class$;
}

$Class* AbstractElementVisitor8::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax