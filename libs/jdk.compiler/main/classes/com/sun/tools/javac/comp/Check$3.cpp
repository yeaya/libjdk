#include <com/sun/tools/javac/comp/Check$3.h>
#include <com/sun/tools/javac/code/Type$CapturedType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/comp/Check.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$CapturedType = ::com::sun::tools::javac::code::Type$CapturedType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $Types$UnaryVisitor = ::com::sun::tools::javac::code::Types$UnaryVisitor;
using $Check = ::com::sun::tools::javac::comp::Check;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Check$3::init$($Check* this$0) {
	$set(this, this$0, this$0);
	$Types$UnaryVisitor::init$();
}

$Boolean* Check$3::visitType($Type* t, $Void* s) {
	return $Boolean::valueOf($nc(t)->isErroneous());
}

$Boolean* Check$3::visitTypeVar($Type$TypeVar* t, $Void* s) {
	return $cast($Boolean, visit($($nc(t)->getUpperBound())));
}

$Boolean* Check$3::visitCapturedType($Type$CapturedType* t, $Void* s) {
	$useLocalObjectStack();
	bool var$0 = $$sure($Boolean, visit($($nc(t)->getUpperBound())))->booleanValue();
	return $Boolean::valueOf(var$0 || $$sure($Boolean, visit($(t->getLowerBound())))->booleanValue());
}

$Boolean* Check$3::visitWildcardType($Type$WildcardType* t, $Void* s) {
	return $cast($Boolean, visit($nc(t)->type));
}

$Object* Check$3::visitCapturedType($Type$CapturedType* t, Object$* s) {
	return $of(this->visitCapturedType(t, $cast($Void, s)));
}

$Object* Check$3::visitTypeVar($Type$TypeVar* t, Object$* s) {
	return $of(this->visitTypeVar(t, $cast($Void, s)));
}

$Object* Check$3::visitWildcardType($Type$WildcardType* t, Object$* s) {
	return $of(this->visitWildcardType(t, $cast($Void, s)));
}

$Object* Check$3::visitType($Type* t, Object$* s) {
	return $of(this->visitType(t, $cast($Void, s)));
}

Check$3::Check$3() {
}

$Class* Check$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Check;", nullptr, $FINAL | $SYNTHETIC, $field(Check$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Check;)V", nullptr, 0, $method(Check$3, init$, void, $Check*)},
		{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Check$3, visitCapturedType, $Boolean*, $Type$CapturedType*, $Void*)},
		{"visitCapturedType", "(Lcom/sun/tools/javac/code/Type$CapturedType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Check$3, visitCapturedType, $Object*, $Type$CapturedType*, Object$*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Check$3, visitType, $Boolean*, $Type*, $Void*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Check$3, visitType, $Object*, $Type*, Object$*)},
		{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Check$3, visitTypeVar, $Boolean*, $Type$TypeVar*, $Void*)},
		{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Check$3, visitTypeVar, $Object*, $Type$TypeVar*, Object$*)},
		{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Check$3, visitWildcardType, $Boolean*, $Type$WildcardType*, $Void*)},
		{"visitWildcardType", "(Lcom/sun/tools/javac/code/Type$WildcardType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Check$3, visitWildcardType, $Object*, $Type$WildcardType*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Check",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Check$3", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Types$UnaryVisitor", "com.sun.tools.javac.code.Types", "UnaryVisitor", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Check$3",
		"com.sun.tools.javac.code.Types$UnaryVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/tools/javac/code/Types$UnaryVisitor<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Check"
	};
	$loadClass(Check$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Check$3);
	});
	return class$;
}

$Class* Check$3::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com