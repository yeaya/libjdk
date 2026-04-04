#include <com/sun/tools/javac/comp/Attr$BreakAttr.h>
#include <com/sun/tools/javac/comp/Attr.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <jcpp.h>

using $Env = ::com::sun::tools::javac::comp::Env;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

void Attr$BreakAttr::init$($Env* env) {
	$RuntimeException::init$();
	$set(this, env, env);
}

Attr$BreakAttr::Attr$BreakAttr() {
}

Attr$BreakAttr::Attr$BreakAttr(const Attr$BreakAttr& e) : $RuntimeException(e) {
}

void Attr$BreakAttr::throw$() {
	throw *this;
}

$Class* Attr$BreakAttr::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(Attr$BreakAttr, serialVersionUID)},
		{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PRIVATE | $TRANSIENT, $field(Attr$BreakAttr, env)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PRIVATE, $method(Attr$BreakAttr, init$, void, $Env*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Attr$BreakAttr", "com.sun.tools.javac.comp.Attr", "BreakAttr", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Attr$BreakAttr",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Attr"
	};
	$loadClass(Attr$BreakAttr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Attr$BreakAttr);
	});
	return class$;
}

$Class* Attr$BreakAttr::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com