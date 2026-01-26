#include <javax/lang/model/util/TypeKindVisitor8.h>

#include <javax/lang/model/type/IntersectionType.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/util/SimpleTypeVisitor6.h>
#include <javax/lang/model/util/TypeKindVisitor7.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $IntersectionType = ::javax::lang::model::type::IntersectionType;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $TypeKindVisitor7 = ::javax::lang::model::util::TypeKindVisitor7;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute TypeKindVisitor8_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_8"},
	{}
};

$CompoundAttribute _TypeKindVisitor8_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", TypeKindVisitor8_Attribute_var$0},
	{}
};

$MethodInfo _TypeKindVisitor8_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(TypeKindVisitor8, init$, void)},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(TypeKindVisitor8, init$, void, Object$*)},
	{"visitIntersection", "(Ljavax/lang/model/type/IntersectionType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/IntersectionType;TP;)TR;", $PUBLIC, $virtualMethod(TypeKindVisitor8, visitIntersection, $Object*, $IntersectionType*, Object$*)},
	{}
};

$ClassInfo _TypeKindVisitor8_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.TypeKindVisitor8",
	"javax.lang.model.util.TypeKindVisitor7",
	nullptr,
	nullptr,
	_TypeKindVisitor8_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/TypeKindVisitor7<TR;TP;>;",
	nullptr,
	nullptr,
	_TypeKindVisitor8_Annotations_
};

$Object* allocate$TypeKindVisitor8($Class* clazz) {
	return $of($alloc(TypeKindVisitor8));
}

void TypeKindVisitor8::init$() {
	$TypeKindVisitor7::init$(nullptr);
}

void TypeKindVisitor8::init$(Object$* defaultValue) {
	$TypeKindVisitor7::init$(defaultValue);
}

$Object* TypeKindVisitor8::visitIntersection($IntersectionType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

TypeKindVisitor8::TypeKindVisitor8() {
}

$Class* TypeKindVisitor8::load$($String* name, bool initialize) {
	$loadClass(TypeKindVisitor8, name, initialize, &_TypeKindVisitor8_ClassInfo_, allocate$TypeKindVisitor8);
	return class$;
}

$Class* TypeKindVisitor8::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax