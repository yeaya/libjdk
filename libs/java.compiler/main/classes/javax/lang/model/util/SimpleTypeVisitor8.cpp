#include <javax/lang/model/util/SimpleTypeVisitor8.h>
#include <javax/lang/model/type/IntersectionType.h>
#include <javax/lang/model/util/SimpleTypeVisitor6.h>
#include <javax/lang/model/util/SimpleTypeVisitor7.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $IntersectionType = ::javax::lang::model::type::IntersectionType;
using $SimpleTypeVisitor7 = ::javax::lang::model::util::SimpleTypeVisitor7;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void SimpleTypeVisitor8::init$() {
	$SimpleTypeVisitor7::init$(nullptr);
}

void SimpleTypeVisitor8::init$(Object$* defaultValue) {
	$SimpleTypeVisitor7::init$(defaultValue);
}

$Object* SimpleTypeVisitor8::visitIntersection($IntersectionType* t, Object$* p) {
	return defaultAction(t, p);
}

SimpleTypeVisitor8::SimpleTypeVisitor8() {
}

$Class* SimpleTypeVisitor8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(SimpleTypeVisitor8, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(SimpleTypeVisitor8, init$, void, Object$*)},
		{"visitIntersection", "(Ljavax/lang/model/type/IntersectionType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/IntersectionType;TP;)TR;", $PUBLIC, $virtualMethod(SimpleTypeVisitor8, visitIntersection, $Object*, $IntersectionType*, Object$*)},
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
		"javax.lang.model.util.SimpleTypeVisitor8",
		"javax.lang.model.util.SimpleTypeVisitor7",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleTypeVisitor7<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SimpleTypeVisitor8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleTypeVisitor8);
	});
	return class$;
}

$Class* SimpleTypeVisitor8::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax