#include <javax/lang/model/util/AbstractElementVisitor14.h>
#include <javax/lang/model/element/RecordComponentElement.h>
#include <javax/lang/model/util/AbstractElementVisitor9.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $RecordComponentElement = ::javax::lang::model::element::RecordComponentElement;
using $AbstractElementVisitor9 = ::javax::lang::model::util::AbstractElementVisitor9;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

void AbstractElementVisitor14::init$() {
	$AbstractElementVisitor9::init$();
}

AbstractElementVisitor14::AbstractElementVisitor14() {
}

$Class* AbstractElementVisitor14::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractElementVisitor14, init$, void)},
		{"visitRecordComponent", "(Ljavax/lang/model/element/RecordComponentElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/RecordComponentElement;TP;)TR;", $PUBLIC | $ABSTRACT, $virtualMethod(AbstractElementVisitor14, visitRecordComponent, $Object*, $RecordComponentElement*, Object$*)},
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
		"javax.lang.model.util.AbstractElementVisitor14",
		"javax.lang.model.util.AbstractElementVisitor9",
		nullptr,
		nullptr,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractElementVisitor9<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AbstractElementVisitor14, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractElementVisitor14);
	});
	return class$;
}

$Class* AbstractElementVisitor14::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax