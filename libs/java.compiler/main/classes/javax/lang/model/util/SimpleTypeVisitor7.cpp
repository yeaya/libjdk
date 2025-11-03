#include <javax/lang/model/util/SimpleTypeVisitor7.h>

#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/type/UnionType.h>
#include <javax/lang/model/util/SimpleTypeVisitor6.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $UnionType = ::javax::lang::model::type::UnionType;
using $SimpleTypeVisitor6 = ::javax::lang::model::util::SimpleTypeVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute SimpleTypeVisitor7_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_7"},
	{}
};

$CompoundAttribute _SimpleTypeVisitor7_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", SimpleTypeVisitor7_Attribute_var$0},
	{}
};

$NamedAttribute SimpleTypeVisitor7_Attribute_var$1[] = {
	{"since", 's', "12"},
	{}
};

$CompoundAttribute _SimpleTypeVisitor7_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", SimpleTypeVisitor7_Attribute_var$1},
	{}
};

$NamedAttribute SimpleTypeVisitor7_Attribute_var$2[] = {
	{"since", 's', "12"},
	{}
};

$CompoundAttribute _SimpleTypeVisitor7_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", SimpleTypeVisitor7_Attribute_var$2},
	{}
};

$MethodInfo _SimpleTypeVisitor7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(static_cast<void(SimpleTypeVisitor7::*)()>(&SimpleTypeVisitor7::init$)), nullptr, nullptr, _SimpleTypeVisitor7_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED | $DEPRECATED, $method(static_cast<void(SimpleTypeVisitor7::*)(Object$*)>(&SimpleTypeVisitor7::init$)), nullptr, nullptr, _SimpleTypeVisitor7_MethodAnnotations_init$1},
	{"visitUnion", "(Ljavax/lang/model/type/UnionType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/UnionType;TP;)TR;", $PUBLIC},
	{}
};

$ClassInfo _SimpleTypeVisitor7_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.SimpleTypeVisitor7",
	"javax.lang.model.util.SimpleTypeVisitor6",
	nullptr,
	nullptr,
	_SimpleTypeVisitor7_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleTypeVisitor6<TR;TP;>;",
	nullptr,
	nullptr,
	_SimpleTypeVisitor7_Annotations_
};

$Object* allocate$SimpleTypeVisitor7($Class* clazz) {
	return $of($alloc(SimpleTypeVisitor7));
}

void SimpleTypeVisitor7::init$() {
	$SimpleTypeVisitor6::init$(nullptr);
}

void SimpleTypeVisitor7::init$(Object$* defaultValue) {
	$SimpleTypeVisitor6::init$(defaultValue);
}

$Object* SimpleTypeVisitor7::visitUnion($UnionType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

SimpleTypeVisitor7::SimpleTypeVisitor7() {
}

$Class* SimpleTypeVisitor7::load$($String* name, bool initialize) {
	$loadClass(SimpleTypeVisitor7, name, initialize, &_SimpleTypeVisitor7_ClassInfo_, allocate$SimpleTypeVisitor7);
	return class$;
}

$Class* SimpleTypeVisitor7::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax