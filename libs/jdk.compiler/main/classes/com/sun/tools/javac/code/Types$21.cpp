#include <com/sun/tools/javac/code/Types$21.h>
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

void Types$21::init$($Types* this$0) {
	$set(this, this$0, this$0);
	$Types$MapVisitor::init$();
}

$Type* Types$21::visitType($Type* t, $List* newParams) {
	$throwNew($IllegalArgumentException, $$str({"Not a method type: "_s, t}));
	$shouldNotReachHere();
}

$Type* Types$21::visitMethodType($Type$MethodType* t, $List* newParams) {
	return $new($Type$MethodType, newParams, $nc(t)->restype, $nc(t)->thrown, $nc(t)->tsym);
}

$Type* Types$21::visitForAll($Type$ForAll* t, $List* newParams) {
	return $new($Type$ForAll, $nc(t)->tvars, $$cast($Type, $nc($nc(t)->qtype)->accept(this, newParams)));
}

$Object* Types$21::visitType($Type* t, Object$* newParams) {
	return $of(this->visitType(t, $cast($List, newParams)));
}

$Object* Types$21::visitForAll($Type$ForAll* t, Object$* newParams) {
	return $of(this->visitForAll(t, $cast($List, newParams)));
}

$Object* Types$21::visitMethodType($Type$MethodType* t, Object$* newParams) {
	return $of(this->visitMethodType(t, $cast($List, newParams)));
}

Types$21::Types$21() {
}

$Class* Types$21::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$21, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(Types$21, init$, void, $Types*)},
		{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$ForAll;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC, $virtualMethod(Types$21, visitForAll, $Type*, $Type$ForAll*, $List*)},
		{"visitForAll", "(Lcom/sun/tools/javac/code/Type$ForAll;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$21, visitForAll, $Object*, $Type$ForAll*, Object$*)},
		{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type$MethodType;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC, $virtualMethod(Types$21, visitMethodType, $Type*, $Type$MethodType*, $List*)},
		{"visitMethodType", "(Lcom/sun/tools/javac/code/Type$MethodType;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$21, visitMethodType, $Object*, $Type$MethodType*, Object$*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Type;", "(Lcom/sun/tools/javac/code/Type;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Lcom/sun/tools/javac/code/Type;", $PUBLIC, $virtualMethod(Types$21, visitType, $Type*, $Type*, $List*)},
		{"visitType", "(Lcom/sun/tools/javac/code/Type;Ljava/lang/Object;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$21, visitType, $Object*, $Type*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Types",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$21", nullptr, nullptr, 0},
		{"com.sun.tools.javac.code.Types$MapVisitor", "com.sun.tools.javac.code.Types", "MapVisitor", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$21",
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
	$loadClass(Types$21, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$21);
	});
	return class$;
}

$Class* Types$21::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com