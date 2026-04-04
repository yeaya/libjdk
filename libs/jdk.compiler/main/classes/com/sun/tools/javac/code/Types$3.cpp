#include <com/sun/tools/javac/code/Types$3.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <jcpp.h>

#undef MTH

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Types = ::com::sun::tools::javac::code::Types;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

void Types$3::init$($Types* this$0) {
	$set(this, this$0, this$0);
}

bool Types$3::test($Symbol* t) {
	$init($Kinds$Kind);
	return $nc(t)->kind == $Kinds$Kind::MTH && t->name != $nc(this->this$0->names)->init && t->name != this->this$0->names->clinit && (t->flags() & 0x1000) == 0;
}

bool Types$3::test(Object$* t) {
	return this->test($cast($Symbol, t));
}

Types$3::Types$3() {
}

$Class* Types$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/code/Types;", nullptr, $FINAL | $SYNTHETIC, $field(Types$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, 0, $method(Types$3, init$, void, $Types*)},
		{"test", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PUBLIC, $virtualMethod(Types$3, test, bool, $Symbol*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(Types$3, test, bool, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.code.Types",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.code.Types$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.code.Types$3",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.code.Types"
	};
	$loadClass(Types$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Types$3);
	});
	return class$;
}

$Class* Types$3::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com