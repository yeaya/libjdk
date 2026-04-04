#include <com/sun/tools/javac/code/Symbol$RecordComponent.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/lang/annotation/Annotation.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ElementVisitor.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <jcpp.h>

#undef ARRAY
#undef RECORD_COMPONENT

using $AnnotationArray = $Array<::java::lang::annotation::Annotation>;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $1List = ::com::sun::tools::javac::util::List;
using $1Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Annotation = ::java::lang::annotation::Annotation;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ElementVisitor = ::javax::lang::model::element::ElementVisitor;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $Name = ::javax::lang::model::element::Name;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$String* Symbol$RecordComponent::toString() {
	 return this->$Symbol$VarSymbol::toString();
}

$List* Symbol$RecordComponent::getAnnotationMirrors() {
	 return this->$Symbol$VarSymbol::getAnnotationMirrors();
}

$Element* Symbol$RecordComponent::getEnclosingElement() {
	 return this->$Symbol$VarSymbol::getEnclosingElement();
}

$Name* Symbol$RecordComponent::getSimpleName() {
	 return this->$Symbol$VarSymbol::getSimpleName();
}

$TypeMirror* Symbol$RecordComponent::asType() {
	 return this->$Symbol$VarSymbol::asType();
}

$Set* Symbol$RecordComponent::getModifiers() {
	 return this->$Symbol$VarSymbol::getModifiers();
}

$List* Symbol$RecordComponent::getEnclosedElements() {
	 return this->$Symbol$VarSymbol::getEnclosedElements();
}

$AnnotationArray* Symbol$RecordComponent::getAnnotationsByType($Class* annoType) {
	 return this->$Symbol$VarSymbol::getAnnotationsByType(annoType);
}

$Annotation* Symbol$RecordComponent::getAnnotation($Class* annoType) {
	 return this->$Symbol$VarSymbol::getAnnotation(annoType);
}

int32_t Symbol$RecordComponent::hashCode() {
	 return this->$Symbol$VarSymbol::hashCode();
}

bool Symbol$RecordComponent::equals(Object$* arg0) {
	 return this->$Symbol$VarSymbol::equals(arg0);
}

$Object* Symbol$RecordComponent::clone() {
	 return this->$Symbol$VarSymbol::clone();
}

void Symbol$RecordComponent::finalize() {
	this->$Symbol$VarSymbol::finalize();
}

void Symbol$RecordComponent::init$($1Name* name, $Type* type, $Symbol* owner) {
	$Symbol$VarSymbol::init$(1, name, type, owner);
	this->pos = -1;
	$set(this, originalAnnos, $1List::nil());
	this->isVarargs$ = false;
}

void Symbol$RecordComponent::init$($Symbol$VarSymbol* field, $1List* annotations) {
	$Symbol$VarSymbol::init$(1, $nc(field)->name, $nc(field)->type, $nc(field)->owner);
	$set(this, originalAnnos, annotations);
	this->pos = field->pos;
	$init($TypeTag);
	bool var$0 = $nc(this->type)->hasTag($TypeTag::ARRAY);
	this->isVarargs$ = var$0 && $cast($Type$ArrayType, this->type)->isVarargs();
}

$1List* Symbol$RecordComponent::getOriginalAnnos() {
	return this->originalAnnos;
}

bool Symbol$RecordComponent::isVarargs() {
	return this->isVarargs$;
}

$ElementKind* Symbol$RecordComponent::getKind() {
	$init($ElementKind);
	return $ElementKind::RECORD_COMPONENT;
}

$ExecutableElement* Symbol$RecordComponent::getAccessor() {
	return $as($ExecutableElement, this->accessor);
}

$Object* Symbol$RecordComponent::accept($ElementVisitor* v, Object$* p) {
	return $nc(v)->visitRecordComponent(this, p);
}

Symbol$RecordComponent::Symbol$RecordComponent() {
}

$Class* Symbol$RecordComponent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"accessor", "Lcom/sun/tools/javac/code/Symbol$MethodSymbol;", nullptr, $PUBLIC, $field(Symbol$RecordComponent, accessor)},
		{"accessorMeth", "Lcom/sun/tools/javac/tree/JCTree$JCMethodDecl;", nullptr, $PUBLIC, $field(Symbol$RecordComponent, accessorMeth)},
		{"originalAnnos", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", $PRIVATE | $FINAL, $field(Symbol$RecordComponent, originalAnnos)},
		{"pos", "I", nullptr, $PRIVATE | $FINAL, $field(Symbol$RecordComponent, pos)},
		{"isVarargs", "Z", nullptr, $PRIVATE | $FINAL, $field(Symbol$RecordComponent, isVarargs$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*asType", "()Ljavax/lang/model/type/TypeMirror;", nullptr, $PUBLIC | $SYNTHETIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
		{"*getAnnotationMirrors", "()Ljava/util/List;", nullptr, $PUBLIC | $SYNTHETIC},
		{"*getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC},
		{"*getEnclosedElements", "()Ljava/util/List;", nullptr, $PUBLIC},
		{"*getEnclosingElement", "()Ljavax/lang/model/element/Element;", nullptr, $PUBLIC | $SYNTHETIC},
		{"*getModifiers", "()Ljava/util/Set;", nullptr, $PUBLIC},
		{"*getSimpleName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $SYNTHETIC},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(Symbol$RecordComponent, init$, void, $1Name*, $Type*, $Symbol*)},
		{"<init>", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/Symbol$VarSymbol;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;)V", $PUBLIC, $method(Symbol$RecordComponent, init$, void, $Symbol$VarSymbol*, $1List*)},
		{"accept", "(Ljavax/lang/model/element/ElementVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/ElementVisitor<TR;TP;>;TP;)TR;", $PUBLIC, $virtualMethod(Symbol$RecordComponent, accept, $Object*, $ElementVisitor*, Object$*)},
		{"getAccessor", "()Ljavax/lang/model/element/ExecutableElement;", nullptr, $PUBLIC, $virtualMethod(Symbol$RecordComponent, getAccessor, $ExecutableElement*)},
		{"getKind", "()Ljavax/lang/model/element/ElementKind;", nullptr, $PUBLIC, $virtualMethod(Symbol$RecordComponent, getKind, $ElementKind*)},
		{"getOriginalAnnos", "()Lcom/sun/tools/javac/util/List;", "()Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree$JCAnnotation;>;", $PUBLIC, $virtualMethod(Symbol$RecordComponent, getOriginalAnnos, $1List*)},
		{"isVarargs", "()Z", nullptr, $PUBLIC, $virtualMethod(Symbol$RecordComponent, isVarargs, bool)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Symbol$RecordComponent", "com.sun.tools.javac.code.Symbol", "RecordComponent", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Symbol$VarSymbol", "com.sun.tools.javac.code.Symbol", "VarSymbol", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Symbol$RecordComponent",
		"com.sun.tools.javac.code.Symbol$VarSymbol",
		"javax.lang.model.element.RecordComponentElement",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Symbol"
	};
	$loadClass(Symbol$RecordComponent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Symbol$RecordComponent));
	});
	return class$;
}

$Class* Symbol$RecordComponent::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com