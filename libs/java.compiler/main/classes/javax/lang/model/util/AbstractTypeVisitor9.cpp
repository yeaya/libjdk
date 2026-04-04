#include <javax/lang/model/util/AbstractTypeVisitor9.h>
#include <javax/lang/model/util/AbstractTypeVisitor8.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractTypeVisitor8 = ::javax::lang::model::util::AbstractTypeVisitor8;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void AbstractTypeVisitor9::init$() {
	$AbstractTypeVisitor8::init$();
}

AbstractTypeVisitor9::AbstractTypeVisitor9() {
}

$Class* AbstractTypeVisitor9::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractTypeVisitor9, init$, void)},
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
		"javax.lang.model.util.AbstractTypeVisitor9",
		"javax.lang.model.util.AbstractTypeVisitor8",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractTypeVisitor8<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AbstractTypeVisitor9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractTypeVisitor9);
	});
	return class$;
}

$Class* AbstractTypeVisitor9::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax