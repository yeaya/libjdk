#include <javax/lang/model/element/TypeElement.h>

#include <java/util/List.h>
#include <javax/lang/model/element/NestingKind.h>
#include <javax/lang/model/element/Parameterizable.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Parameterizable = ::javax::lang::model::element::Parameterizable;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$MethodInfo _TypeElement_MethodInfo_[] = {
	{"*accept", "(Ljavax/lang/model/element/ElementVisitor;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEnclosedElements", "()Ljava/util/List;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getInterfaces", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;", $PUBLIC | $ABSTRACT},
	{"*getKind", "()Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getModifiers", "()Ljava/util/Set;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNestingKind", "()Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPermittedSubclasses", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/type/TypeMirror;>;", $PUBLIC},
	{"getQualifiedName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRecordComponents", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/element/RecordComponentElement;>;", $PUBLIC},
	{"getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSuperclass", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypeParameters", "()Ljava/util/List;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TypeElement_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.TypeElement",
	nullptr,
	"javax.lang.model.element.Parameterizable,javax.lang.model.element.QualifiedNameable",
	nullptr,
	_TypeElement_MethodInfo_
};

$Object* allocate$TypeElement($Class* clazz) {
	return $of($alloc(TypeElement));
}

bool TypeElement::equals(Object$* obj) {
	 return this->$Parameterizable::equals(obj);
}

int32_t TypeElement::hashCode() {
	 return this->$Parameterizable::hashCode();
}

$Object* TypeElement::clone() {
	 return this->$Parameterizable::clone();
}

$String* TypeElement::toString() {
	 return this->$Parameterizable::toString();
}

void TypeElement::finalize() {
	this->$Parameterizable::finalize();
}

$List* TypeElement::getRecordComponents() {
	return $List::of();
}

$List* TypeElement::getPermittedSubclasses() {
	return $List::of();
}

$Class* TypeElement::load$($String* name, bool initialize) {
	$loadClass(TypeElement, name, initialize, &_TypeElement_ClassInfo_, allocate$TypeElement);
	return class$;
}

$Class* TypeElement::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax