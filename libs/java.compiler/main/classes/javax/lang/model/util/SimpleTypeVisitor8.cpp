#include <javax/lang/model/util/SimpleTypeVisitor8.h>

#include <javax/lang/model/type/IntersectionType.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/util/SimpleTypeVisitor6.h>
#include <javax/lang/model/util/SimpleTypeVisitor7.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $IntersectionType = ::javax::lang::model::type::IntersectionType;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $SimpleTypeVisitor7 = ::javax::lang::model::util::SimpleTypeVisitor7;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute SimpleTypeVisitor8_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_8"},
	{}
};

$CompoundAttribute _SimpleTypeVisitor8_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", SimpleTypeVisitor8_Attribute_var$0},
	{}
};

$MethodInfo _SimpleTypeVisitor8_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SimpleTypeVisitor8::*)()>(&SimpleTypeVisitor8::init$))},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED, $method(static_cast<void(SimpleTypeVisitor8::*)(Object$*)>(&SimpleTypeVisitor8::init$))},
	{"visitIntersection", "(Ljavax/lang/model/type/IntersectionType;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/IntersectionType;TP;)TR;", $PUBLIC},
	{}
};

$ClassInfo _SimpleTypeVisitor8_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.SimpleTypeVisitor8",
	"javax.lang.model.util.SimpleTypeVisitor7",
	nullptr,
	nullptr,
	_SimpleTypeVisitor8_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/SimpleTypeVisitor7<TR;TP;>;",
	nullptr,
	nullptr,
	_SimpleTypeVisitor8_Annotations_
};

$Object* allocate$SimpleTypeVisitor8($Class* clazz) {
	return $of($alloc(SimpleTypeVisitor8));
}

void SimpleTypeVisitor8::init$() {
	$SimpleTypeVisitor7::init$(nullptr);
}

void SimpleTypeVisitor8::init$(Object$* defaultValue) {
	$SimpleTypeVisitor7::init$(defaultValue);
}

$Object* SimpleTypeVisitor8::visitIntersection($IntersectionType* t, Object$* p) {
	return $of(defaultAction(t, p));
}

SimpleTypeVisitor8::SimpleTypeVisitor8() {
}

$Class* SimpleTypeVisitor8::load$($String* name, bool initialize) {
	$loadClass(SimpleTypeVisitor8, name, initialize, &_SimpleTypeVisitor8_ClassInfo_, allocate$SimpleTypeVisitor8);
	return class$;
}

$Class* SimpleTypeVisitor8::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax