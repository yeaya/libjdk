#include <javax/lang/model/util/TypeKindVisitor14.h>

#include <javax/lang/model/util/TypeKindVisitor9.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeKindVisitor9 = ::javax::lang::model::util::TypeKindVisitor9;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute TypeKindVisitor14_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_17"},
	{}
};

$CompoundAttribute _TypeKindVisitor14_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", TypeKindVisitor14_Attribute_var$0},
	{}
};

$MethodInfo _TypeKindVisitor14_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(TypeKindVisitor14::*)()>(&TypeKindVisitor14::init$))},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(static_cast<void(TypeKindVisitor14::*)(Object$*)>(&TypeKindVisitor14::init$))},
	{}
};

$ClassInfo _TypeKindVisitor14_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.TypeKindVisitor14",
	"javax.lang.model.util.TypeKindVisitor9",
	nullptr,
	nullptr,
	_TypeKindVisitor14_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/TypeKindVisitor9<TR;TP;>;",
	nullptr,
	nullptr,
	_TypeKindVisitor14_Annotations_
};

$Object* allocate$TypeKindVisitor14($Class* clazz) {
	return $of($alloc(TypeKindVisitor14));
}

void TypeKindVisitor14::init$() {
	$TypeKindVisitor9::init$(nullptr);
}

void TypeKindVisitor14::init$(Object$* defaultValue) {
	$TypeKindVisitor9::init$(defaultValue);
}

TypeKindVisitor14::TypeKindVisitor14() {
}

$Class* TypeKindVisitor14::load$($String* name, bool initialize) {
	$loadClass(TypeKindVisitor14, name, initialize, &_TypeKindVisitor14_ClassInfo_, allocate$TypeKindVisitor14);
	return class$;
}

$Class* TypeKindVisitor14::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax