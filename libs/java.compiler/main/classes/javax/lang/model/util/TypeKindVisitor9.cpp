#include <javax/lang/model/util/TypeKindVisitor9.h>

#include <javax/lang/model/type/NoType.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/util/SimpleTypeVisitor6.h>
#include <javax/lang/model/util/TypeKindVisitor8.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NoType = ::javax::lang::model::type::NoType;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $SimpleTypeVisitor6 = ::javax::lang::model::util::SimpleTypeVisitor6;
using $TypeKindVisitor8 = ::javax::lang::model::util::TypeKindVisitor8;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute TypeKindVisitor9_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_14"},
	{}
};

$CompoundAttribute _TypeKindVisitor9_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", TypeKindVisitor9_Attribute_var$0},
	{}
};

$MethodInfo _TypeKindVisitor9_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(TypeKindVisitor9::*)()>(&TypeKindVisitor9::init$))},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(static_cast<void(TypeKindVisitor9::*)(Object$*)>(&TypeKindVisitor9::init$))},
	{"visitNoTypeAsModule", "(Ljavax/lang/model/type/NoType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/NoType;TP;)TR;", $PUBLIC},
	{}
};

$ClassInfo _TypeKindVisitor9_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.TypeKindVisitor9",
	"javax.lang.model.util.TypeKindVisitor8",
	nullptr,
	nullptr,
	_TypeKindVisitor9_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/TypeKindVisitor8<TR;TP;>;",
	nullptr,
	nullptr,
	_TypeKindVisitor9_Annotations_
};

$Object* allocate$TypeKindVisitor9($Class* clazz) {
	return $of($alloc(TypeKindVisitor9));
}

void TypeKindVisitor9::init$() {
	$TypeKindVisitor8::init$(nullptr);
}

void TypeKindVisitor9::init$(Object$* defaultValue) {
	$TypeKindVisitor8::init$(defaultValue);
}

$Object* TypeKindVisitor9::visitNoTypeAsModule($NoType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

TypeKindVisitor9::TypeKindVisitor9() {
}

$Class* TypeKindVisitor9::load$($String* name, bool initialize) {
	$loadClass(TypeKindVisitor9, name, initialize, &_TypeKindVisitor9_ClassInfo_, allocate$TypeKindVisitor9);
	return class$;
}

$Class* TypeKindVisitor9::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax