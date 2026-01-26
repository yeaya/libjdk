#include <javax/lang/model/util/SimpleTypeVisitor14.h>

#include <javax/lang/model/util/SimpleTypeVisitor9.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SimpleTypeVisitor9 = ::javax::lang::model::util::SimpleTypeVisitor9;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute SimpleTypeVisitor14_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_17"},
	{}
};

$CompoundAttribute _SimpleTypeVisitor14_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", SimpleTypeVisitor14_Attribute_var$0},
	{}
};

$MethodInfo _SimpleTypeVisitor14_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(SimpleTypeVisitor14, init$, void)},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(SimpleTypeVisitor14, init$, void, Object$*)},
	{}
};

$ClassInfo _SimpleTypeVisitor14_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.SimpleTypeVisitor14",
	"javax.lang.model.util.SimpleTypeVisitor9",
	nullptr,
	nullptr,
	_SimpleTypeVisitor14_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleTypeVisitor9<TR;TP;>;",
	nullptr,
	nullptr,
	_SimpleTypeVisitor14_Annotations_
};

$Object* allocate$SimpleTypeVisitor14($Class* clazz) {
	return $of($alloc(SimpleTypeVisitor14));
}

void SimpleTypeVisitor14::init$() {
	$SimpleTypeVisitor9::init$(nullptr);
}

void SimpleTypeVisitor14::init$(Object$* defaultValue) {
	$SimpleTypeVisitor9::init$(defaultValue);
}

SimpleTypeVisitor14::SimpleTypeVisitor14() {
}

$Class* SimpleTypeVisitor14::load$($String* name, bool initialize) {
	$loadClass(SimpleTypeVisitor14, name, initialize, &_SimpleTypeVisitor14_ClassInfo_, allocate$SimpleTypeVisitor14);
	return class$;
}

$Class* SimpleTypeVisitor14::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax