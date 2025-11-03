#include <javax/lang/model/element/Element.h>

#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/lang/model/AnnotatedConstruct.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ElementVisitor.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $AnnotatedConstruct = ::javax::lang::model::AnnotatedConstruct;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ElementVisitor = ::javax::lang::model::element::ElementVisitor;
using $Name = ::javax::lang::model::element::Name;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

$MethodInfo _Element_MethodInfo_[] = {
	{"accept", "(Ljavax/lang/model/element/ElementVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/ElementVisitor<TR;TP;>;TP;)TR;", $PUBLIC | $ABSTRACT},
	{"asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $ABSTRACT},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEnclosedElements", "()Ljava/util/List;", "()Ljava/util/List<+Ljavax/lang/model/element/Element;>;", $PUBLIC | $ABSTRACT},
	{"getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $ABSTRACT},
	{"getKind", "()Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC | $ABSTRACT},
	{"getModifiers", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/lang/model/element/Modifier;>;", $PUBLIC | $ABSTRACT},
	{"getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Element_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.lang.model.element.Element",
	nullptr,
	"javax.lang.model.AnnotatedConstruct",
	nullptr,
	_Element_MethodInfo_
};

$Object* allocate$Element($Class* clazz) {
	return $of($alloc(Element));
}

bool Element::equals(Object$* obj) {
	 return this->$AnnotatedConstruct::equals(obj);
}

int32_t Element::hashCode() {
	 return this->$AnnotatedConstruct::hashCode();
}

$Class* Element::load$($String* name, bool initialize) {
	$loadClass(Element, name, initialize, &_Element_ClassInfo_, allocate$Element);
	return class$;
}

$Class* Element::class$ = nullptr;

			} // element
		} // model
	} // lang
} // javax