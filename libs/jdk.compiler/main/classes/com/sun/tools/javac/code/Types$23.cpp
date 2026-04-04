#include <com/sun/tools/javac/code/Types$23.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$23$1.h>
#include <com/sun/tools/javac/code/Types$23$2.h>
#include <com/sun/tools/javac/code/Types$MapVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$23$1 = ::com::sun::tools::javac::code::Types$23$1;
using $Types$23$2 = ::com::sun::tools::javac::code::Types$23$2;
using $Types$MapVisitor = ::com::sun::tools::javac::code::Types$MapVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Types$23::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$MapVisitor::init$();
}

$Type* Types$23::visitType($Type* t, $Type* newReturn) {
	$throwNew($IllegalArgumentException, $$str({"Not a method type: "_s, t}));
	$shouldNotReachHere();
}

$Type* Types$23::visitMethodType($Type$MethodType* t, $Type* newReturn) {
	return $new($Types$23$1, this, $nc(t)->argtypes$, newReturn, $nc(t)->thrown, $nc(t)->tsym, t);
}

$Type* Types$23::visitForAll($Type$ForAll* t, $Type* newReturn) {
	return $new($Types$23$2, this, $nc(t)->tvars, $$cast($Type, $nc($nc(t)->qtype)->accept(this, newReturn)), t);
}

$Object* Types$23::visitType($Type* t, Object$* newReturn) {
	return $of(this->visitType(t, $cast($Type, newReturn)));
}

$Object* Types$23::visitForAll($Type$ForAll* t, Object$* newReturn) {
	return $of(this->visitForAll(t, $cast($Type, newReturn)));
}

$Object* Types$23::visitMethodType($Type$MethodType* t, Object$* newReturn) {
	return $of(this->visitMethodType(t, $cast($Type, newReturn)));
}

Types$23::Types$23() {
}

$Class* Types$23::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$23, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(Types$23, init$, void, $Types*)},
		{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types$23, visitForAll, $Type*, $Type$ForAll*, $Type*)},
		{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$23, visitForAll, $Object*, $Type$ForAll*, Object$*)},
		{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types$23, visitMethodType, $Type*, $Type$MethodType*, $Type*)},
		{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$23, visitMethodType, $Object*, $Type$MethodType*, Object$*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC, $virtualMethod(Types$23, visitType, $Type*, $Type*, $Type*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$23, visitType, $Object*, $Type*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Types",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$23", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Types$MapVisitor", "com.sun.tools.javac.code.Types", "MapVisitor", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.code.Types$23$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Types$23$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$23",
		"com.sun.tools.javac.code.Types$MapVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/tools/javac/code/Types$MapVisitor<Lcom/sun/tools/javac/code/Type;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$23, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$23);
	});
	return class$;
}

$Class* Types$23::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com