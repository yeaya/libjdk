#include <javax/lang/model/util/SimpleElementVisitor14.h>
#include <javax/lang/model/element/RecordComponentElement.h>
#include <javax/lang/model/util/SimpleElementVisitor6.h>
#include <javax/lang/model/util/SimpleElementVisitor9.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $RecordComponentElement = ::javax::lang::model::element::RecordComponentElement;
using $SimpleElementVisitor9 = ::javax::lang::model::util::SimpleElementVisitor9;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void SimpleElementVisitor14::init$() {
	$SimpleElementVisitor9::init$(nullptr);
}

void SimpleElementVisitor14::init$(Object$* defaultValue) {
	$SimpleElementVisitor9::init$(defaultValue);
}

$Object* SimpleElementVisitor14::visitRecordComponent($RecordComponentElement* e, Object$* p) {
	return defaultAction(e, p);
}

SimpleElementVisitor14::SimpleElementVisitor14() {
}

$Class* SimpleElementVisitor14::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(SimpleElementVisitor14, init$, void)},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(SimpleElementVisitor14, init$, void, Object$*)},
		{"visitRecordComponent", "(Ljavax/lang/model/element/RecordComponentElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/RecordComponentElement;TP;)TR;", $PUBLIC, $virtualMethod(SimpleElementVisitor14, visitRecordComponent, $Object*, $RecordComponentElement*, Object$*)},
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
		"javax.lang.model.util.SimpleElementVisitor14",
		"javax.lang.model.util.SimpleElementVisitor9",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleElementVisitor9<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SimpleElementVisitor14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleElementVisitor14);
	});
	return class$;
}

$Class* SimpleElementVisitor14::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax