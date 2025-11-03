#include <javax/lang/model/util/SimpleAnnotationValueVisitor6.h>

#include <java/util/List.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/VariableElement.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/util/AbstractAnnotationValueVisitor6.h>
#include <jcpp.h>

#undef DEFAULT_VALUE

using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Short = ::java::lang::Short;
using $List = ::java::util::List;
using $AnnotationMirror = ::javax::lang::model::element::AnnotationMirror;
using $VariableElement = ::javax::lang::model::element::VariableElement;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $AbstractAnnotationValueVisitor6 = ::javax::lang::model::util::AbstractAnnotationValueVisitor6;

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

$NamedAttribute SimpleAnnotationValueVisitor6_Attribute_var$0[] = {
	{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_6"},
	{}
};

$CompoundAttribute _SimpleAnnotationValueVisitor6_Annotations_[] = {
	{"Ljavax/annotation/processing/SupportedSourceVersion;", SimpleAnnotationValueVisitor6_Attribute_var$0},
	{}
};

$NamedAttribute SimpleAnnotationValueVisitor6_Attribute_var$1[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _SimpleAnnotationValueVisitor6_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", SimpleAnnotationValueVisitor6_Attribute_var$1},
	{}
};

$NamedAttribute SimpleAnnotationValueVisitor6_Attribute_var$2[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _SimpleAnnotationValueVisitor6_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", SimpleAnnotationValueVisitor6_Attribute_var$2},
	{}
};

$FieldInfo _SimpleAnnotationValueVisitor6_FieldInfo_[] = {
	{"DEFAULT_VALUE", "Ljava/lang/Object;", "TR;", $PROTECTED | $FINAL, $field(SimpleAnnotationValueVisitor6, DEFAULT_VALUE)},
	{}
};

$MethodInfo _SimpleAnnotationValueVisitor6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(static_cast<void(SimpleAnnotationValueVisitor6::*)()>(&SimpleAnnotationValueVisitor6::init$)), nullptr, nullptr, _SimpleAnnotationValueVisitor6_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED | $DEPRECATED, $method(static_cast<void(SimpleAnnotationValueVisitor6::*)(Object$*)>(&SimpleAnnotationValueVisitor6::init$)), nullptr, nullptr, _SimpleAnnotationValueVisitor6_MethodAnnotations_init$1},
	{"defaultAction", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;TP;)TR;", $PROTECTED},
	{"visitAnnotation", "(Ljavax/lang/model/element/AnnotationMirror;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/AnnotationMirror;TP;)TR;", $PUBLIC},
	{"visitArray", "(Ljava/util/List;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/util/List<+Ljavax/lang/model/element/AnnotationValue;>;TP;)TR;", $PUBLIC},
	{"visitBoolean", "(ZLjava/lang/Object;)Ljava/lang/Object;", "(ZTP;)TR;", $PUBLIC},
	{"visitByte", "(BLjava/lang/Object;)Ljava/lang/Object;", "(BTP;)TR;", $PUBLIC},
	{"visitChar", "(CLjava/lang/Object;)Ljava/lang/Object;", "(CTP;)TR;", $PUBLIC},
	{"visitDouble", "(DLjava/lang/Object;)Ljava/lang/Object;", "(DTP;)TR;", $PUBLIC},
	{"visitEnumConstant", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC},
	{"visitFloat", "(FLjava/lang/Object;)Ljava/lang/Object;", "(FTP;)TR;", $PUBLIC},
	{"visitInt", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITP;)TR;", $PUBLIC},
	{"visitLong", "(JLjava/lang/Object;)Ljava/lang/Object;", "(JTP;)TR;", $PUBLIC},
	{"visitShort", "(SLjava/lang/Object;)Ljava/lang/Object;", "(STP;)TR;", $PUBLIC},
	{"visitString", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/String;TP;)TR;", $PUBLIC},
	{"visitType", "(Ljavax/lang/model/type/TypeMirror;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/TypeMirror;TP;)TR;", $PUBLIC},
	{}
};

$ClassInfo _SimpleAnnotationValueVisitor6_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.lang.model.util.SimpleAnnotationValueVisitor6",
	"javax.lang.model.util.AbstractAnnotationValueVisitor6",
	nullptr,
	_SimpleAnnotationValueVisitor6_FieldInfo_,
	_SimpleAnnotationValueVisitor6_MethodInfo_,
	"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractAnnotationValueVisitor6<TR;TP;>;",
	nullptr,
	nullptr,
	_SimpleAnnotationValueVisitor6_Annotations_
};

$Object* allocate$SimpleAnnotationValueVisitor6($Class* clazz) {
	return $of($alloc(SimpleAnnotationValueVisitor6));
}

void SimpleAnnotationValueVisitor6::init$() {
	$AbstractAnnotationValueVisitor6::init$();
	$set(this, DEFAULT_VALUE, nullptr);
}

void SimpleAnnotationValueVisitor6::init$(Object$* defaultValue) {
	$AbstractAnnotationValueVisitor6::init$();
	$set(this, DEFAULT_VALUE, defaultValue);
}

$Object* SimpleAnnotationValueVisitor6::defaultAction(Object$* o, Object$* p) {
	return $of(this->DEFAULT_VALUE);
}

$Object* SimpleAnnotationValueVisitor6::visitBoolean(bool b, Object$* p) {
	return $of(defaultAction($($Boolean::valueOf(b)), p));
}

$Object* SimpleAnnotationValueVisitor6::visitByte(int8_t b, Object$* p) {
	return $of(defaultAction($($Byte::valueOf(b)), p));
}

$Object* SimpleAnnotationValueVisitor6::visitChar(char16_t c, Object$* p) {
	return $of(defaultAction($($Character::valueOf(c)), p));
}

$Object* SimpleAnnotationValueVisitor6::visitDouble(double d, Object$* p) {
	return $of(defaultAction($($Double::valueOf(d)), p));
}

$Object* SimpleAnnotationValueVisitor6::visitFloat(float f, Object$* p) {
	return $of(defaultAction($($Float::valueOf(f)), p));
}

$Object* SimpleAnnotationValueVisitor6::visitInt(int32_t i, Object$* p) {
	return $of(defaultAction($($Integer::valueOf(i)), p));
}

$Object* SimpleAnnotationValueVisitor6::visitLong(int64_t i, Object$* p) {
	return $of(defaultAction($($Long::valueOf(i)), p));
}

$Object* SimpleAnnotationValueVisitor6::visitShort(int16_t s, Object$* p) {
	return $of(defaultAction($($Short::valueOf(s)), p));
}

$Object* SimpleAnnotationValueVisitor6::visitString($String* s, Object$* p) {
	return $of(defaultAction(s, p));
}

$Object* SimpleAnnotationValueVisitor6::visitType($TypeMirror* t, Object$* p) {
	return $of(defaultAction(t, p));
}

$Object* SimpleAnnotationValueVisitor6::visitEnumConstant($VariableElement* c, Object$* p) {
	return $of(defaultAction(c, p));
}

$Object* SimpleAnnotationValueVisitor6::visitAnnotation($AnnotationMirror* a, Object$* p) {
	return $of(defaultAction(a, p));
}

$Object* SimpleAnnotationValueVisitor6::visitArray($List* vals, Object$* p) {
	return $of(defaultAction(vals, p));
}

SimpleAnnotationValueVisitor6::SimpleAnnotationValueVisitor6() {
}

$Class* SimpleAnnotationValueVisitor6::load$($String* name, bool initialize) {
	$loadClass(SimpleAnnotationValueVisitor6, name, initialize, &_SimpleAnnotationValueVisitor6_ClassInfo_, allocate$SimpleAnnotationValueVisitor6);
	return class$;
}

$Class* SimpleAnnotationValueVisitor6::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax