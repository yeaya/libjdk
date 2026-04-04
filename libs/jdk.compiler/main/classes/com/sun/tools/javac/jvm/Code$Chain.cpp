#include <com/sun/tools/javac/jvm/Code$Chain.h>
#include <com/sun/tools/javac/jvm/Code$State.h>
#include <com/sun/tools/javac/jvm/Code.h>
#include <jcpp.h>

using $Code$State = ::com::sun::tools::javac::jvm::Code$State;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void Code$Chain::init$(int32_t pc, Code$Chain* next, $Code$State* state) {
	this->pc = pc;
	$set(this, next, next);
	$set(this, state, state);
}

Code$Chain::Code$Chain() {
}

$Class* Code$Chain::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pc", "I", nullptr, $PUBLIC | $FINAL, $field(Code$Chain, pc)},
		{"state", "Lcom/sun/tools/javac/jvm/Code$State;", nullptr, 0, $field(Code$Chain, state)},
		{"next", "Lcom/sun/tools/javac/jvm/Code$Chain;", nullptr, $PUBLIC | $FINAL, $field(Code$Chain, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILcom/sun/tools/javac/jvm/Code$Chain;Lcom/sun/tools/javac/jvm/Code$State;)V", nullptr, $PUBLIC, $method(Code$Chain, init$, void, int32_t, Code$Chain*, $Code$State*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.Code$Chain", "com.sun.tools.javac.jvm.Code", "Chain", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.jvm.Code$Chain",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.Code"
	};
	$loadClass(Code$Chain, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Code$Chain);
	});
	return class$;
}

$Class* Code$Chain::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com