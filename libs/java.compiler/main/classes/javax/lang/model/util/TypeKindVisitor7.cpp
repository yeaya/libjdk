#include <javax/lang/model/util/TypeKindVisitor7.h>

#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/type/UnionType.h>
#include <javax/lang/model/util/SimpleTypeVisitor6.h>
#include <javax/lang/model/util/TypeKindVisitor6.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $UnionType = ::javax::lang::model::type::UnionType;
using $TypeKindVisitor6 = ::javax::lang::model::util::TypeKindVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute TypeKindVisitor7_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_7"},
	{}
};

$CompoundAttribute _TypeKindVisitor7_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", TypeKindVisitor7_Attribute_var$0},
	{}
};

$NamedAttribute TypeKindVisitor7_Attribute_var$1[] = {
	{"since", 's', "12"},
	{}
};

$CompoundAttribute _TypeKindVisitor7_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", TypeKindVisitor7_Attribute_var$1},
	{}
};

$NamedAttribute TypeKindVisitor7_Attribute_var$2[] = {
	{"since", 's', "12"},
	{}
};

$CompoundAttribute _TypeKindVisitor7_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", TypeKindVisitor7_Attribute_var$2},
	{}
};

$MethodInfo _TypeKindVisitor7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(TypeKindVisitor7, init$, void), nullptr, nullptr, _TypeKindVisitor7_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED | $DEPRECATED, $method(TypeKindVisitor7, init$, void, Object$*), nullptr, nullptr, _TypeKindVisitor7_MethodAnnotations_init$1},
	{"visitUnion", "(Ljavax/lang/model/type/UnionType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/UnionType;TP;)TR;", $PUBLIC, $virtualMethod(TypeKindVisitor7, visitUnion, $Object*, $UnionType*, Object$*)},
	{}
};

$ClassInfo _TypeKindVisitor7_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.TypeKindVisitor7",
	"javax.lang.model.util.TypeKindVisitor6",
	nullptr,
	nullptr,
	_TypeKindVisitor7_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/TypeKindVisitor6<TR;TP;>;",
	nullptr,
	nullptr,
	_TypeKindVisitor7_Annotations_
};

$Object* allocate$TypeKindVisitor7($Class* clazz) {
	return $of($alloc(TypeKindVisitor7));
}

void TypeKindVisitor7::init$() {
	$TypeKindVisitor6::init$(nullptr);
}

void TypeKindVisitor7::init$(Object$* defaultValue) {
	$TypeKindVisitor6::init$(defaultValue);
}

$Object* TypeKindVisitor7::visitUnion($UnionType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

TypeKindVisitor7::TypeKindVisitor7() {
}

$Class* TypeKindVisitor7::load$($String* name, bool initialize) {
	$loadClass(TypeKindVisitor7, name, initialize, &_TypeKindVisitor7_ClassInfo_, allocate$TypeKindVisitor7);
	return class$;
}

$Class* TypeKindVisitor7::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax