#include <com/sun/tools/javac/code/Types$18.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$ErrorType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeMetadata.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$ErrorType = ::com::sun::tools::javac::code::Type$ErrorType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$UnaryVisitor = ::com::sun::tools::javac::code::Types$UnaryVisitor;
using $List = ::com::sun::tools::javac::util::List;
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
				namespace code {

void Types$18::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$UnaryVisitor::init$();
}

$Type* Types$18::visitType($Type* t, $Void* ignored) {
	return t;
}

$Type* Types$18::visitClassType($Type$ClassType* t, $Void* ignored) {
	$useLocalObjectStack();
	$var($Type, outer1, this->this$0->classBound($($nc(t)->getEnclosingType())));
	if (outer1 != t->getEnclosingType()) {
		$var($List, var$0, t->getTypeArguments());
		$var($Symbol$TypeSymbol, var$1, t->tsym);
		return $new($Type$ClassType, outer1, var$0, var$1, $(t->getMetadata()));
	} else {
		return t;
	}
}

$Type* Types$18::visitTypeVar($Type$TypeVar* t, $Void* ignored) {
	return this->this$0->classBound($(this->this$0->supertype(t)));
}

$Type* Types$18::visitErrorType($Type$ErrorType* t, $Void* ignored) {
	return t;
}

$Object* Types$18::visitErrorType($Type$ErrorType* t, Object$* ignored) {
	return $of(this->visitErrorType(t, $cast($Void, ignored)));
}

$Object* Types$18::visitTypeVar($Type$TypeVar* t, Object$* ignored) {
	return $of(this->visitTypeVar(t, $cast($Void, ignored)));
}

$Object* Types$18::visitClassType($Type$ClassType* t, Object$* ignored) {
	return $of(this->visitClassType(t, $cast($Void, ignored)));
}

$Object* Types$18::visitType($Type* t, Object$* ignored) {
	return $of(this->visitType(t, $cast($Void, ignored)));
}

Types$18::Types$18() {
}

$Class* Types$18::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$18, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(Types$18, init$, void, $Types*)},
		{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types$18, visitClassType, $Type*, $Type$ClassType*, $Void*)},
		{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$18, visitClassType, $Object*, $Type$ClassType*, Object$*)},
		{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types$18, visitErrorType, $Type*, $Type$ErrorType*, $Void*)},
		{"visitErrorType", "(Lcom/sun/tools/javac/code/Type$ErrorType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$18, visitErrorType, $Object*, $Type$ErrorType*, Object$*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types$18, visitType, $Type*, $Type*, $Void*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$18, visitType, $Object*, $Type*, Object$*)},
		{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Void;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types$18, visitTypeVar, $Type*, $Type$TypeVar*, $Void*)},
		{"visitTypeVar", "(Lcom/sun/tools/javac/code/Type$TypeVar;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$18, visitTypeVar, $Object*, $Type$TypeVar*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Types",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$18", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Types$UnaryVisitor", "com.sun.tools.javac.code.Types", "UnaryVisitor", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$18",
		"com.sun.tools.javac.code.Types$UnaryVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/tools/javac/code/Types$UnaryVisitor<Lcom/sun/tools/javac/code/Type;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$18, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$18);
	});
	return class$;
}

$Class* Types$18::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com