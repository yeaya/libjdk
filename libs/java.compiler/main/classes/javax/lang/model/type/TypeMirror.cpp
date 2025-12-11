#include <javax/lang/model/type/TypeMirror.h>

#include <javax/lang/model/AnnotatedConstruct.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotatedConstruct = ::javax::lang::model::AnnotatedConstruct;

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

$MethodInfo _TypeMirror_MethodInfo_[] = {
	{"accept", "(Ljavax/lang/model/type/TypeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/type/TypeVisitor<TR;TP;>;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $ABSTRACT},
	{"getKind", "()Ljavax/lang/model/type/TypeKind;", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TypeMirror_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.type.TypeMirror",
	nullptr,
	"javax.lang.model.AnnotatedConstruct",
	nullptr,
	_TypeMirror_MethodInfo_
};

$Object* allocate$TypeMirror($Class* clazz) {
	return $of($alloc(TypeMirror));
}

bool TypeMirror::equals(Object$* obj) {
	 return this->$AnnotatedConstruct::equals(obj);
}

int32_t TypeMirror::hashCode() {
	 return this->$AnnotatedConstruct::hashCode();
}

$String* TypeMirror::toString() {
	 return this->$AnnotatedConstruct::toString();
}

$Class* TypeMirror::load$($String* name, bool initialize) {
	$loadClass(TypeMirror, name, initialize, &_TypeMirror_ClassInfo_, allocate$TypeMirror);
	return class$;
}

$Class* TypeMirror::class$ = nullptr;

			} // type
		} // model
	} // lang
} // javax