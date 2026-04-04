#include <com/sun/tools/javac/code/Types$1.h>
#include <com/sun/tools/javac/code/BoundKind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$TypeVar.h>
#include <com/sun/tools/javac/code/Type$WildcardType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

#undef UNBOUND

using $BoundKind = ::com::sun::tools::javac::code::BoundKind;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$TypeVar = ::com::sun::tools::javac::code::Type$TypeVar;
using $Type$WildcardType = ::com::sun::tools::javac::code::Type$WildcardType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$UnaryVisitor = ::com::sun::tools::javac::code::Types$UnaryVisitor;
using $List = ::com::sun::tools::javac::util::List;
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
				namespace code {

void Types$1::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$UnaryVisitor::init$();
}

$Boolean* Types$1::visitType($Type* t, $Void* ignored) {
	return $Boolean::valueOf(true);
}

$Boolean* Types$1::visitClassType($Type$ClassType* t, $Void* ignored) {
	$useLocalObjectStack();
	$var($List, parms, $nc($nc($nc(t)->tsym)->type)->allparams());
	$var($List, args, t->allparams());
	while ($nc(parms)->nonEmpty()) {
		$init($BoundKind);
		$var($Type$WildcardType, unb, $new($Type$WildcardType, $nc(this->this$0->syms)->objectType, $BoundKind::UNBOUND, $nc(this->this$0->syms)->boundClass, $cast($Type$TypeVar, parms->head)));
		if (!this->this$0->containsType($cast($Type, $nc(args)->head), unb)) {
			return $Boolean::valueOf(false);
		}
		$assign(parms, parms->tail);
		$assign(args, args->tail);
	}
	return $Boolean::valueOf(true);
}

$Object* Types$1::visitClassType($Type$ClassType* t, Object$* ignored) {
	return $of(this->visitClassType(t, $cast($Void, ignored)));
}

$Object* Types$1::visitType($Type* t, Object$* ignored) {
	return $of(this->visitType(t, $cast($Void, ignored)));
}

Types$1::Types$1() {
}

$Class* Types$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(Types$1, init$, void, $Types*)},
		{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Types$1, visitClassType, $Boolean*, $Type$ClassType*, $Void*)},
		{"visitClassType", "(Lcom/sun/tools/javac/code/Type$ClassType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$1, visitClassType, $Object*, $Type$ClassType*, Object$*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Void;)Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Types$1, visitType, $Boolean*, $Type*, $Void*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$1, visitType, $Object*, $Type*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Types",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$1", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Types$UnaryVisitor", "com.sun.tools.javac.code.Types", "UnaryVisitor", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$1",
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
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$1);
	});
	return class$;
}

$Class* Types$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com