#include <com/sun/tools/javac/code/Types$22.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Type$ForAll.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type$Visitor.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$MapVisitor.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ForAll = ::com::sun::tools::javac::code::Type$ForAll;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$MapVisitor = ::com::sun::tools::javac::code::Types$MapVisitor;
using $List = ::com::sun::tools::javac::util::List;
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

void Types$22::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$MapVisitor::init$();
}

$Type* Types$22::visitType($Type* t, $List* newThrown) {
	$throwNew($IllegalArgumentException, $$str({"Not a method type: "_s, t}));
	$shouldNotReachHere();
}

$Type* Types$22::visitMethodType($Type$MethodType* t, $List* newThrown) {
	return $new($Type$MethodType, $nc(t)->argtypes$, $nc(t)->restype, newThrown, $nc(t)->tsym);
}

$Type* Types$22::visitForAll($Type$ForAll* t, $List* newThrown) {
	return $new($Type$ForAll, $nc(t)->tvars, $$cast($Type, $nc($nc(t)->qtype)->accept(this, newThrown)));
}

$Object* Types$22::visitType($Type* t, Object$* newThrown) {
	return $of(this->visitType(t, $cast($List, newThrown)));
}

$Object* Types$22::visitForAll($Type$ForAll* t, Object$* newThrown) {
	return $of(this->visitForAll(t, $cast($List, newThrown)));
}

$Object* Types$22::visitMethodType($Type$MethodType* t, Object$* newThrown) {
	return $of(this->visitMethodType(t, $cast($List, newThrown)));
}

Types$22::Types$22() {
}

$Class* Types$22::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$22, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(Types$22, init$, void, $Types*)},
		{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$ForAll;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC, $virtualMethod(Types$22, visitForAll, $Type*, $Type$ForAll*, $List*)},
		{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$22, visitForAll, $Object*, $Type$ForAll*, Object$*)},
		{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC, $virtualMethod(Types$22, visitMethodType, $Type*, $Type$MethodType*, $List*)},
		{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$22, visitMethodType, $Object*, $Type$MethodType*, Object$*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC, $virtualMethod(Types$22, visitType, $Type*, $Type*, $List*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$22, visitType, $Object*, $Type*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Types",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$22", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Types$MapVisitor", "com.sun.tools.javac.code.Types", "MapVisitor", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$22",
		"com.sun.tools.javac.code.Types$MapVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/sun/tools/javac/code/Types$MapVisitor<Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$22, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$22);
	});
	return class$;
}

$Class* Types$22::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com