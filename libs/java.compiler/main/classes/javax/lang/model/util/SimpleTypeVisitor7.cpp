#include <javax/lang/model/util/SimpleTypeVisitor7.h>
#include <javax/lang/model/type/UnionType.h>
#include <javax/lang/model/util/SimpleTypeVisitor6.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $UnionType = ::javax::lang::model::type::UnionType;
using $SimpleTypeVisitor6 = ::javax::lang::model::util::SimpleTypeVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void SimpleTypeVisitor7::init$() {
	$SimpleTypeVisitor6::init$(nullptr);
}

void SimpleTypeVisitor7::init$(Object$* defaultValue) {
	$SimpleTypeVisitor6::init$(defaultValue);
}

$Object* SimpleTypeVisitor7::visitUnion($UnionType* t, Object$* p) {
	return defaultAction(t, p);
}

SimpleTypeVisitor7::SimpleTypeVisitor7() {
}

$Class* SimpleTypeVisitor7::load$($String* name, bool initialize) {
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
		{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(SimpleTypeVisitor7, init$, void), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED | $DEPRECATED, $method(SimpleTypeVisitor7, init$, void, Object$*), nullptr, nullptr, init$methodAnnotations$$$1},
		{"visitUnion", "(Ljavax/lang/model/type/UnionType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/UnionType;TP;)TR;", $PUBLIC, $virtualMethod(SimpleTypeVisitor7, visitUnion, $Object*, $UnionType*, Object$*)},
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
		"javax.lang.model.util.SimpleTypeVisitor7",
		"javax.lang.model.util.SimpleTypeVisitor6",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleTypeVisitor6<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SimpleTypeVisitor7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleTypeVisitor7);
	});
	return class$;
}

$Class* SimpleTypeVisitor7::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax