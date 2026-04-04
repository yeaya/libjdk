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

void SimpleAnnotationValueVisitor6::init$() {
	$AbstractAnnotationValueVisitor6::init$();
	$set(this, DEFAULT_VALUE, nullptr);
}

void SimpleAnnotationValueVisitor6::init$(Object$* defaultValue) {
	$AbstractAnnotationValueVisitor6::init$();
	$set(this, DEFAULT_VALUE, defaultValue);
}

$Object* SimpleAnnotationValueVisitor6::defaultAction(Object$* o, Object$* p) {
	return this->DEFAULT_VALUE;
}

$Object* SimpleAnnotationValueVisitor6::visitBoolean(bool b, Object$* p) {
	return defaultAction($($Boolean::valueOf(b)), p);
}

$Object* SimpleAnnotationValueVisitor6::visitByte(int8_t b, Object$* p) {
	return defaultAction($($Byte::valueOf(b)), p);
}

$Object* SimpleAnnotationValueVisitor6::visitChar(char16_t c, Object$* p) {
	return defaultAction($($Character::valueOf(c)), p);
}

$Object* SimpleAnnotationValueVisitor6::visitDouble(double d, Object$* p) {
	return defaultAction($($Double::valueOf(d)), p);
}

$Object* SimpleAnnotationValueVisitor6::visitFloat(float f, Object$* p) {
	return defaultAction($($Float::valueOf(f)), p);
}

$Object* SimpleAnnotationValueVisitor6::visitInt(int32_t i, Object$* p) {
	return defaultAction($($Integer::valueOf(i)), p);
}

$Object* SimpleAnnotationValueVisitor6::visitLong(int64_t i, Object$* p) {
	return defaultAction($($Long::valueOf(i)), p);
}

$Object* SimpleAnnotationValueVisitor6::visitShort(int16_t s, Object$* p) {
	return defaultAction($($Short::valueOf(s)), p);
}

$Object* SimpleAnnotationValueVisitor6::visitString($String* s, Object$* p) {
	return defaultAction(s, p);
}

$Object* SimpleAnnotationValueVisitor6::visitType($TypeMirror* t, Object$* p) {
	return defaultAction(t, p);
}

$Object* SimpleAnnotationValueVisitor6::visitEnumConstant($VariableElement* c, Object$* p) {
	return defaultAction(c, p);
}

$Object* SimpleAnnotationValueVisitor6::visitAnnotation($AnnotationMirror* a, Object$* p) {
	return defaultAction(a, p);
}

$Object* SimpleAnnotationValueVisitor6::visitArray($List* vals, Object$* p) {
	return defaultAction(vals, p);
}

SimpleAnnotationValueVisitor6::SimpleAnnotationValueVisitor6() {
}

$Class* SimpleAnnotationValueVisitor6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT_VALUE", "Ljava/lang/Object;", "TR;", $PROTECTED | $FINAL, $field(SimpleAnnotationValueVisitor6, DEFAULT_VALUE)},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$1$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", init$methodAnnotations$$$1$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED | $DEPRECATED, $method(SimpleAnnotationValueVisitor6, init$, void), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(Ljava/lang/Object;)V", "(TR;)V", $PROTECTED | $DEPRECATED, $method(SimpleAnnotationValueVisitor6, init$, void, Object$*), nullptr, nullptr, init$methodAnnotations$$$1},
		{"defaultAction", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/Object;TP;)TR;", $PROTECTED, $virtualMethod(SimpleAnnotationValueVisitor6, defaultAction, $Object*, Object$*, Object$*)},
		{"visitAnnotation", "(Ljavax/lang/model/element/AnnotationMirror;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/AnnotationMirror;TP;)TR;", $PUBLIC, $virtualMethod(SimpleAnnotationValueVisitor6, visitAnnotation, $Object*, $AnnotationMirror*, Object$*)},
		{"visitArray", "(Ljava/util/List;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/util/List<+Ljavax/lang/model/element/AnnotationValue;>;TP;)TR;", $PUBLIC, $virtualMethod(SimpleAnnotationValueVisitor6, visitArray, $Object*, $List*, Object$*)},
		{"visitBoolean", "(ZLjava/lang/Object;)Ljava/lang/Object;", "(ZTP;)TR;", $PUBLIC, $virtualMethod(SimpleAnnotationValueVisitor6, visitBoolean, $Object*, bool, Object$*)},
		{"visitByte", "(BLjava/lang/Object;)Ljava/lang/Object;", "(BTP;)TR;", $PUBLIC, $virtualMethod(SimpleAnnotationValueVisitor6, visitByte, $Object*, int8_t, Object$*)},
		{"visitChar", "(CLjava/lang/Object;)Ljava/lang/Object;", "(CTP;)TR;", $PUBLIC, $virtualMethod(SimpleAnnotationValueVisitor6, visitChar, $Object*, char16_t, Object$*)},
		{"visitDouble", "(DLjava/lang/Object;)Ljava/lang/Object;", "(DTP;)TR;", $PUBLIC, $virtualMethod(SimpleAnnotationValueVisitor6, visitDouble, $Object*, double, Object$*)},
		{"visitEnumConstant", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/element/VariableElement;TP;)TR;", $PUBLIC, $virtualMethod(SimpleAnnotationValueVisitor6, visitEnumConstant, $Object*, $VariableElement*, Object$*)},
		{"visitFloat", "(FLjava/lang/Object;)Ljava/lang/Object;", "(FTP;)TR;", $PUBLIC, $virtualMethod(SimpleAnnotationValueVisitor6, visitFloat, $Object*, float, Object$*)},
		{"visitInt", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITP;)TR;", $PUBLIC, $virtualMethod(SimpleAnnotationValueVisitor6, visitInt, $Object*, int32_t, Object$*)},
		{"visitLong", "(JLjava/lang/Object;)Ljava/lang/Object;", "(JTP;)TR;", $PUBLIC, $virtualMethod(SimpleAnnotationValueVisitor6, visitLong, $Object*, int64_t, Object$*)},
		{"visitShort", "(SLjava/lang/Object;)Ljava/lang/Object;", "(STP;)TR;", $PUBLIC, $virtualMethod(SimpleAnnotationValueVisitor6, visitShort, $Object*, int16_t, Object$*)},
		{"visitString", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljava/lang/String;TP;)TR;", $PUBLIC, $virtualMethod(SimpleAnnotationValueVisitor6, visitString, $Object*, $String*, Object$*)},
		{"visitType", "(Ljavax/lang/model/type/TypeMirror;Ljava/lang/Object;)Ljava/lang/Object;", "(Ljavax/lang/model/type/TypeMirror;TP;)TR;", $PUBLIC, $virtualMethod(SimpleAnnotationValueVisitor6, visitType, $Object*, $TypeMirror*, Object$*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_6"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljavax/annotation/processing/SupportedSourceVersion;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.lang.model.util.SimpleAnnotationValueVisitor6",
		"javax.lang.model.util.AbstractAnnotationValueVisitor6",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<R:Ljava/lang/Object;P:Ljava/lang/Object;>Ljavax/lang/model/util/AbstractAnnotationValueVisitor6<TR;TP;>;",
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(SimpleAnnotationValueVisitor6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleAnnotationValueVisitor6);
	});
	return class$;
}

$Class* SimpleAnnotationValueVisitor6::class$ = nullptr;

			} // util
		} // model
	} // lang
} // javax