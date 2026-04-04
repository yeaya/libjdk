#include <com/sun/tools/javac/code/Attribute$Class.h>
#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <javax/lang/model/element/AnnotationValueVisitor.h>
#include <jcpp.h>

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Types = ::com::sun::tools::javac::code::Types;
using $List = ::com::sun::tools::javac::util::List;
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

void Attribute$Class::accept($Attribute$Visitor* v) {
	$nc(v)->visitClass(this);
}

void Attribute$Class::init$($Types* types, $Type* type) {
	$Attribute::init$($(makeClassType(types, type)));
	$set(this, classType, type);
}

$Type* Attribute$Class::makeClassType($Types* types, $Type* type) {
	$init(Attribute$Class);
	$useLocalObjectStack();
	$var($Type, arg, $nc(type)->isPrimitive() ? $nc($($nc(types)->boxedClass(type)))->type : $nc(types)->erasure(type));
	$var($Type, var$0, $nc($nc($nc(types)->syms)->classType)->getEnclosingType());
	return $new($Type$ClassType, var$0, $($List::of(arg)), types->syms->classType->tsym);
}

$String* Attribute$Class::toString() {
	return $str({this->classType, ".class"_s});
}

$Object* Attribute$Class::getValue() {
	return $of(this->classType);
}

$Object* Attribute$Class::accept($AnnotationValueVisitor* v, Object$* p) {
	return $nc(v)->visitType(this->classType, p);
}

Attribute$Class::Attribute$Class() {
}

$Class* Attribute$Class::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"classType", "Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $FINAL, $field(Attribute$Class, classType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(Attribute$Class, init$, void, $Types*, $Type*)},
		{"accept", "(Lcom/sun/tools/javac/code/Attribute$Visitor;)V", nullptr, $PUBLIC, $virtualMethod(Attribute$Class, accept, void, $Attribute$Visitor*)},
		{"accept", "(Ljavax/lang/model/element/AnnotationValueVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/AnnotationValueVisitor<TR;TP;>;TP;)TR;", $PUBLIC, $virtualMethod(Attribute$Class, accept, $Object*, $AnnotationValueVisitor*, Object$*)},
		{"getValue", "()Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Attribute$Class, getValue, $Object*)},
		{"makeClassType", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $STATIC, $staticMethod(Attribute$Class, makeClassType, $Type*, $Types*, $Type*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Attribute$Class, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Attribute$Class", "com.sun.tools.javac.code.Attribute", "Class", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Attribute$Class",
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
	$loadClass(Attribute$Class, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Attribute$Class);
	});
	return class$;
}

$Class* Attribute$Class::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com