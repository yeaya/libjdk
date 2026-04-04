#include <com/sun/tools/javac/code/Attribute$Error.h>
#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Type.h>
#include <javax/lang/model/element/AnnotationValueVisitor.h>
#include <jcpp.h>

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Type = ::com::sun::tools::javac::code::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationValueVisitor = ::javax::lang::model::element::AnnotationValueVisitor;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Attribute$Error::init$($Type* type) {
	$Attribute::init$(type);
}

void Attribute$Error::accept($Attribute$Visitor* v) {
	$nc(v)->visitError(this);
}

$String* Attribute$Error::toString() {
	return "<error>"_s;
}

$Object* Attribute$Error::getValue() {
	return $of(toString());
}

$Object* Attribute$Error::accept($AnnotationValueVisitor* v, Object$* p) {
	return $nc(v)->visitString($(toString()), p);
}

Attribute$Error::Attribute$Error() {
}

$Class* Attribute$Error::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Type;)V", nullptr, $PUBLIC, $method(Attribute$Error, init$, void, $Type*)},
		{"accept", "(Lcom/sun/tools/javac/code/Attribute$Visitor;)V", nullptr, $PUBLIC, $virtualMethod(Attribute$Error, accept, void, $Attribute$Visitor*)},
		{"accept", "(Ljavax/lang/model/element/AnnotationValueVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;P:Ljava/lang/Object;>(Ljavax/lang/model/element/AnnotationValueVisitor<TR;TP;>;TP;)TR;", $PUBLIC, $virtualMethod(Attribute$Error, accept, $Object*, $AnnotationValueVisitor*, Object$*)},
		{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Attribute$Error, getValue, $Object*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Attribute$Error, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Attribute$Error", "com.sun.tools.javac.code.Attribute", "Error", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.code.Attribute$Error",
		"com.sun.tools.javac.code.Attribute",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Attribute"
	};
	$loadClass(Attribute$Error, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Attribute$Error);
	});
	return class$;
}

$Class* Attribute$Error::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com