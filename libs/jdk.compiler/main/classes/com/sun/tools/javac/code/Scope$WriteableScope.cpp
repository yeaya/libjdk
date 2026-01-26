#include <com/sun/tools/javac/code/Scope$WriteableScope.h>

#include <com/sun/tools/javac/code/Scope$ScopeImpl.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <jcpp.h>

using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$ScopeImpl = ::com::sun::tools::javac::code::Scope$ScopeImpl;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$MethodInfo _Scope$WriteableScope_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC, $method(Scope$WriteableScope, init$, void, $Symbol*)},
	{"create", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC | $STATIC, $staticMethod(Scope$WriteableScope, create, Scope$WriteableScope*, $Symbol*)},
	{"dup", "()Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC | $FINAL, $method(Scope$WriteableScope, dup, Scope$WriteableScope*)},
	{"dup", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Scope$WriteableScope, dup, Scope$WriteableScope*, $Symbol*)},
	{"dupUnshared", "()Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC | $FINAL, $method(Scope$WriteableScope, dupUnshared, Scope$WriteableScope*)},
	{"dupUnshared", "(Lcom/sun/tools/javac/code/Symbol;)Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Scope$WriteableScope, dupUnshared, Scope$WriteableScope*, $Symbol*)},
	{"enter", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Scope$WriteableScope, enter, void, $Symbol*)},
	{"enterIfAbsent", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Scope$WriteableScope, enterIfAbsent, void, $Symbol*)},
	{"leave", "()Lcom/sun/tools/javac/code/Scope$WriteableScope;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Scope$WriteableScope, leave, Scope$WriteableScope*)},
	{"remove", "(Lcom/sun/tools/javac/code/Symbol;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Scope$WriteableScope, remove, void, $Symbol*)},
	{}
};

$InnerClassInfo _Scope$WriteableScope_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Scope$WriteableScope", "com.sun.tools.javac.code.Scope", "WriteableScope", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Scope$WriteableScope_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.code.Scope$WriteableScope",
	"com.sun.tools.javac.code.Scope",
	nullptr,
	nullptr,
	_Scope$WriteableScope_MethodInfo_,
	nullptr,
	nullptr,
	_Scope$WriteableScope_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Scope"
};

$Object* allocate$Scope$WriteableScope($Class* clazz) {
	return $of($alloc(Scope$WriteableScope));
}

void Scope$WriteableScope::init$($Symbol* owner) {
	$Scope::init$(owner);
}

Scope$WriteableScope* Scope$WriteableScope::dup() {
	return dup(this->owner);
}

Scope$WriteableScope* Scope$WriteableScope::dupUnshared() {
	return dupUnshared(this->owner);
}

Scope$WriteableScope* Scope$WriteableScope::create($Symbol* owner) {
	$init(Scope$WriteableScope);
	return $new($Scope$ScopeImpl, owner);
}

Scope$WriteableScope::Scope$WriteableScope() {
}

$Class* Scope$WriteableScope::load$($String* name, bool initialize) {
	$loadClass(Scope$WriteableScope, name, initialize, &_Scope$WriteableScope_ClassInfo_, allocate$Scope$WriteableScope);
	return class$;
}

$Class* Scope$WriteableScope::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com