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

$NamedAttribute AbstractElementVisitor14_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_17"},
	{}
};

$CompoundAttribute _AbstractElementVisitor14_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", AbstractElementVisitor14_Attribute_var$0},
	{}
};

$MethodInfo _AbstractElementVisitor14_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractElementVisitor14::*)()>(&AbstractElementVisitor14::init$))},
	{"visitRecordComponent", "(Ljavax/lang/model/element/RecordComponentElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/RecordComponentElement;TP;)TR;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractElementVisitor14_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.lang.model.util.AbstractElementVisitor14",
	"javax.lang.model.util.AbstractElementVisitor9",
	nullptr,
	nullptr,
	_AbstractElementVisitor14_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractElementVisitor9<TR;TP;>;",
	nullptr,
	nullptr,
	_AbstractElementVisitor14_Annotations_
};

$Object* allocate$AbstractElementVisitor14($Class* clazz) {
	return $of($alloc(AbstractElementVisitor14));
}

void AbstractElementVisitor14::init$() {
	$AbstractElementVisitor9::init$();
}

AbstractElementVisitor14::AbstractElementVisitor14() {
}

$Class* AbstractElementVisitor14::load$($String* name, bool initialize) {
	$loadClass(AbstractElementVisitor14, name, initialize, &_AbstractElementVisitor14_ClassInfo_, allocate$AbstractElementVisitor14);
	return class$;
}

$Class* AbstractElementVisitor14::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax