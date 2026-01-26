#include <javax/lang/model/util/SimpleTypeVisitor9.h>

#include <javax/lang/model/util/SimpleTypeVisitor8.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SimpleTypeVisitor8 = ::javax::lang::model::util::SimpleTypeVisitor8;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute SimpleTypeVisitor9_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_14"},
	{}
};

$CompoundAttribute _SimpleTypeVisitor9_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", SimpleTypeVisitor9_Attribute_var$0},
	{}
};

$MethodInfo _SimpleTypeVisitor9_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(SimpleTypeVisitor9, init$, void)},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(SimpleTypeVisitor9, init$, void, Object$*)},
	{}
};

$ClassInfo _SimpleTypeVisitor9_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.SimpleTypeVisitor9",
	"javax.lang.model.util.SimpleTypeVisitor8",
	nullptr,
	nullptr,
	_SimpleTypeVisitor9_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleTypeVisitor8<TR;TP;>;",
	nullptr,
	nullptr,
	_SimpleTypeVisitor9_Annotations_
};

$Object* allocate$SimpleTypeVisitor9($Class* clazz) {
	return $of($alloc(SimpleTypeVisitor9));
}

void SimpleTypeVisitor9::init$() {
	$SimpleTypeVisitor8::init$(nullptr);
}

void SimpleTypeVisitor9::init$(Object$* defaultValue) {
	$SimpleTypeVisitor8::init$(defaultValue);
}

SimpleTypeVisitor9::SimpleTypeVisitor9() {
}

$Class* SimpleTypeVisitor9::load$($String* name, bool initialize) {
	$loadClass(SimpleTypeVisitor9, name, initialize, &_SimpleTypeVisitor9_ClassInfo_, allocate$SimpleTypeVisitor9);
	return class$;
}

$Class* SimpleTypeVisitor9::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax