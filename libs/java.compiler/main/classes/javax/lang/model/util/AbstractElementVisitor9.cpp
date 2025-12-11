#include <javax/lang/model/util/AbstractElementVisitor9.h>

#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/util/AbstractElementVisitor8.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractElementVisitor8 = ::javax::lang::model::util::AbstractElementVisitor8;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute AbstractElementVisitor9_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_14"},
	{}
};

$CompoundAttribute _AbstractElementVisitor9_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", AbstractElementVisitor9_Attribute_var$0},
	{}
};

$MethodInfo _AbstractElementVisitor9_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractElementVisitor9::*)()>(&AbstractElementVisitor9::init$))},
	{"visitModule", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/ModuleElement;TP;)TR;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AbstractElementVisitor9_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.lang.model.util.AbstractElementVisitor9",
	"javax.lang.model.util.AbstractElementVisitor8",
	nullptr,
	nullptr,
	_AbstractElementVisitor9_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractElementVisitor8<TR;TP;>;",
	nullptr,
	nullptr,
	_AbstractElementVisitor9_Annotations_
};

$Object* allocate$AbstractElementVisitor9($Class* clazz) {
	return $of($alloc(AbstractElementVisitor9));
}

void AbstractElementVisitor9::init$() {
	$AbstractElementVisitor8::init$();
}

AbstractElementVisitor9::AbstractElementVisitor9() {
}

$Class* AbstractElementVisitor9::load$($String* name, bool initialize) {
	$loadClass(AbstractElementVisitor9, name, initialize, &_AbstractElementVisitor9_ClassInfo_, allocate$AbstractElementVisitor9);
	return class$;
}

$Class* AbstractElementVisitor9::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax