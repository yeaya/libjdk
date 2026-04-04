#include <com/sun/tools/javac/code/Attribute$Enum.h>
#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <javax/lang/model/element/AnnotationValueVisitor.h>
#include <jcpp.h>

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationValueVisitor = ::javax::lang::model::element::AnnotationValueVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Attribute$Enum::init$($Type* type, $Symbol$VarSymbol* value) {
	$Attribute::init$(type);
	$set(this, value, $cast($Symbol$VarSymbol, $Assert::checkNonNull(value)));
}

void Attribute$Enum::accept($Attribute$Visitor* v) {
	$nc(v)->visitEnum(this);
}

$String* Attribute$Enum::toString() {
	return $nc(this->value)->toString();
}

$Object* Attribute$Enum::getValue() {
	return $of(this->value);
}

$Object* Attribute$Enum::accept($AnnotationValueVisitor* v, Object$* p) {
	return $nc(v)->visitEnumConstant(this->value, p);
}

Attribute$Enum::Attribute$Enum() {
}

$Class* Attribute$Enum::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $PUBLIC, $field(Attribute$Enum, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Symbol$VarSymbol;)V", nullptr, $PUBLIC, $method(Attribute$Enum, init$, void, $Type*, $Symbol$VarSymbol*)},
		{"accept", "(Lcom/sun/tools/javac/code/Attribute$Visitor;)V", nullptr, $PUBLIC, $virtualMethod(Attribute$Enum, accept, void, $Attribute$Visitor*)},
		{"accept", "(Ljavax/lang/model/element/AnnotationValueVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/AnnotationValueVisitor<TR;TP;>;TP;)TR;", $PUBLIC, $virtualMethod(Attribute$Enum, accept, $Object*, $AnnotationValueVisitor*, Object$*)},
		{"getValue", "()Lcom/sun/tools/javac/code/Symbol$VarSymbol;", nullptr, $PUBLIC, $virtualMethod(Attribute$Enum, getValue, $Object*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Attribute$Enum, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Attribute$Enum", "com.sun.tools.javac.code.Attribute", "Enum", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Attribute$Enum",
		"com.sun.tools.javac.code.Attribute",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Attribute"
	};
	$loadClass(Attribute$Enum, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Attribute$Enum);
	});
	return class$;
}

$Class* Attribute$Enum::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com