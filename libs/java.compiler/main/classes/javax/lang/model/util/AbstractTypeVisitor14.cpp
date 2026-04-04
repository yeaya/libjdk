#include <javax/lang/model/util/AbstractTypeVisitor14.h>
#include <javax/lang/model/util/AbstractTypeVisitor9.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractTypeVisitor9 = ::javax::lang::model::util::AbstractTypeVisitor9;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void AbstractTypeVisitor14::init$() {
	$AbstractTypeVisitor9::init$();
}

AbstractTypeVisitor14::AbstractTypeVisitor14() {
}

$Class* AbstractTypeVisitor14::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractTypeVisitor14, init$, void)},
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
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.lang.model.util.AbstractTypeVisitor14",
		"javax.lang.model.util.AbstractTypeVisitor9",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractTypeVisitor9<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AbstractTypeVisitor14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractTypeVisitor14);
	});
	return class$;
}

$Class* AbstractTypeVisitor14::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax