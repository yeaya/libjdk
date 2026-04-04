#include <com/sun/tools/javac/comp/Env$1.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $Env = ::com::sun::tools::javac::comp::Env;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Env$1::init$($Env* this$0) {
	$set(this, this$0, this$0);
	$set(this, next$, this->this$0);
}

bool Env$1::hasNext() {
	return $nc(this->next$)->outer != nullptr;
}

$Object* Env$1::next() {
	if (hasNext()) {
		$var($Env, current, this->next$);
		$set(this, next$, $nc(current)->outer);
		return current;
	}
	$throwNew($NoSuchElementException);
}

void Env$1::remove() {
	$throwNew($UnsupportedOperationException);
}

Env$1::Env$1() {
}

$Class* Env$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/comp/Env;", nullptr, $FINAL | $SYNTHETIC, $field(Env$1, this$0)},
		{"next", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<TA;>;", 0, $field(Env$1, next$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Env;)V", nullptr, 0, $method(Env$1, init$, void, $Env*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(Env$1, hasNext, bool)},
		{"next", "()Lcom/sun/tools/javac/comp/Env;", "()Lcom/sun/tools/javac/comp/Env<TA;>;", $PUBLIC, $virtualMethod(Env$1, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(Env$1, remove, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Env",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Env$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Env$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Lcom/sun/tools/javac/comp/Env<TA;>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Env"
	};
	$loadClass(Env$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Env$1);
	});
	return class$;
}

$Class* Env$1::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com