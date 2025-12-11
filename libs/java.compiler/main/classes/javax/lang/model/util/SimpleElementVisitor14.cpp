#include <javax/lang/model/util/SimpleElementVisitor14.h>

#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/RecordComponentElement.h>
#include <javax/lang/model/util/SimpleElementVisitor6.h>
#include <javax/lang/model/util/SimpleElementVisitor9.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Element = ::javax::lang::model::element::Element;
using $RecordComponentElement = ::javax::lang::model::element::RecordComponentElement;
using $SimpleElementVisitor9 = ::javax::lang::model::util::SimpleElementVisitor9;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute SimpleElementVisitor14_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_17"},
	{}
};

$CompoundAttribute _SimpleElementVisitor14_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", SimpleElementVisitor14_Attribute_var$0},
	{}
};

$MethodInfo _SimpleElementVisitor14_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SimpleElementVisitor14::*)()>(&SimpleElementVisitor14::init$))},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(static_cast<void(SimpleElementVisitor14::*)(Object$*)>(&SimpleElementVisitor14::init$))},
	{"visitRecordComponent", "(Ljavax/lang/model/element/RecordComponentElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/RecordComponentElement;TP;)TR;", $PUBLIC},
	{}
};

$ClassInfo _SimpleElementVisitor14_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.SimpleElementVisitor14",
	"javax.lang.model.util.SimpleElementVisitor9",
	nullptr,
	nullptr,
	_SimpleElementVisitor14_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleElementVisitor9<TR;TP;>;",
	nullptr,
	nullptr,
	_SimpleElementVisitor14_Annotations_
};

$Object* allocate$SimpleElementVisitor14($Class* clazz) {
	return $of($alloc(SimpleElementVisitor14));
}

void SimpleElementVisitor14::init$() {
	$SimpleElementVisitor9::init$(nullptr);
}

void SimpleElementVisitor14::init$(Object$* defaultValue) {
	$SimpleElementVisitor9::init$(defaultValue);
}

$Object* SimpleElementVisitor14::visitRecordComponent($RecordComponentElement* e, Object$* p) {
	return $of(defaultAction(e, p));
}

SimpleElementVisitor14::SimpleElementVisitor14() {
}

$Class* SimpleElementVisitor14::load$($String* name, bool initialize) {
	$loadClass(SimpleElementVisitor14, name, initialize, &_SimpleElementVisitor14_ClassInfo_, allocate$SimpleElementVisitor14);
	return class$;
}

$Class* SimpleElementVisitor14::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax