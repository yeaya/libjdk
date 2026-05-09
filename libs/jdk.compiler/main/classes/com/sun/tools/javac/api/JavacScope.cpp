#include <com/sun/tools/javac/api/JavacScope.h>
#include <com/sun/tools/javac/api/JavacScope$1.h>
#include <com/sun/tools/javac/api/JavacScope$2.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$MethodSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/AttrContext.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/tree/JCTree$JCClassDecl.h>
#include <com/sun/tools/javac/tree/JCTree$JCMethodDecl.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <java/io/Serializable.h>
#include <java/lang/Iterable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Predicate.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <jcpp.h>

#undef ERR
#undef VALIDATOR

using $JavacScope$1 = ::com::sun::tools::javac::api::JavacScope$1;
using $JavacScope$2 = ::com::sun::tools::javac::api::JavacScope$2;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $AttrContext = ::com::sun::tools::javac::comp::AttrContext;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Predicate = ::java::util::function::Predicate;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $TypeElement = ::javax::lang::model::element::TypeElement;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class JavacScope$$Lambda$lambda$static$0 : public $Predicate {
	$class(JavacScope$$Lambda$lambda$static$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* sym) override {
		return JavacScope::lambda$static$0($cast($Symbol, sym));
	}
};
$Class* JavacScope$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavacScope$$Lambda$lambda$static$0, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JavacScope$$Lambda$lambda$static$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.api.JavacScope$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(JavacScope$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavacScope$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* JavacScope$$Lambda$lambda$static$0::class$ = nullptr;

$Predicate* JavacScope::VALIDATOR = nullptr;

JavacScope* JavacScope::create($Env* env) {
	$init(JavacScope);
	if ($nc(env)->outer == nullptr || env->outer == env) {
		return $new($JavacScope$1, env);
	} else {
		return $new(JavacScope, env);
	}
}

void JavacScope::init$($Env* env) {
	$set(this, env, $cast($Env, $Assert::checkNonNull(env)));
}

JavacScope* JavacScope::getEnclosingScope() {
	if ($nc(this->env)->outer != nullptr && this->env->outer != this->env) {
		return create(this->env->outer);
	} else {
		return $new($JavacScope$2, this, this->env);
	}
}

$TypeElement* JavacScope::getEnclosingClass() {
	return ($nc(this->env)->outer == nullptr || this->env->outer == this->env ? ($TypeElement*)nullptr : $as($TypeElement, $nc(this->env->enclClass)->sym));
}

$ExecutableElement* JavacScope::getEnclosingMethod() {
	return ($nc(this->env)->enclMethod == nullptr ? ($ExecutableElement*)nullptr : $as($ExecutableElement, this->env->enclMethod->sym));
}

$Iterable* JavacScope::getLocalElements() {
	return $nc($cast($AttrContext, $nc(this->env)->info))->getLocalElements();
}

$Env* JavacScope::getEnv() {
	return this->env;
}

bool JavacScope::isStarImportScope() {
	return false;
}

bool JavacScope::equals(Object$* other) {
	$var(JavacScope, javacScope, nullptr);
	bool var$2 = $instanceOf(JavacScope, other);
	if (var$2) {
		$assign(javacScope, $cast(JavacScope, other));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $nc(this->env)->equals($nc(javacScope)->env);
	if (var$0) {
		bool var$3 = isStarImportScope();
		var$0 = var$3 == javacScope->isStarImportScope();
	}
	return var$0;
}

int32_t JavacScope::hashCode() {
	int32_t var$0 = $nc(this->env)->hashCode();
	return var$0 + (isStarImportScope() ? 1 : 0);
}

$String* JavacScope::toString() {
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("JavacScope[env="_s);
	var$0->append(this->env);
	var$0->append(",starImport="_s);
	var$0->append(isStarImportScope());
	var$0->append("]"_s);
	return $str(var$0);
}

bool JavacScope::lambda$static$0($Symbol* sym) {
	$init(JavacScope);
	$nc(sym)->apiComplete();
	$init($Kinds$Kind);
	return sym->kind != $Kinds$Kind::ERR;
}

void JavacScope::clinit$($Class* clazz) {
	$assignStatic(JavacScope::VALIDATOR, $new(JavacScope$$Lambda$lambda$static$0));
}

JavacScope::JavacScope() {
}

$Class* JavacScope::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.api.JavacScope$$Lambda$lambda$static$0")) {
			return JavacScope$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"VALIDATOR", "Ljava/util/function/Predicate;", "Ljava/util/function/Predicate<Lcom/sun/tools/javac/code/Symbol;>;", $PRIVATE | $STATIC | $FINAL, $staticField(JavacScope, VALIDATOR)},
		{"env", "Lcom/sun/tools/javac/comp/Env;", "Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PROTECTED | $FINAL, $field(JavacScope, env)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Env;)V", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)V", $PRIVATE, $method(JavacScope, init$, void, $Env*)},
		{"create", "(Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/api/JavacScope;", "(Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/api/JavacScope;", $STATIC, $staticMethod(JavacScope, create, JavacScope*, $Env*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(JavacScope, equals, bool, Object$*)},
		{"getEnclosingClass", "()Ljavax/lang/model/element/TypeElement;", nullptr, $PUBLIC, $virtualMethod(JavacScope, getEnclosingClass, $TypeElement*)},
		{"getEnclosingMethod", "()Ljavax/lang/model/element/ExecutableElement;", nullptr, $PUBLIC, $virtualMethod(JavacScope, getEnclosingMethod, $ExecutableElement*)},
		{"getEnclosingScope", "()Lcom/sun/tools/javac/api/JavacScope;", nullptr, $PUBLIC, $virtualMethod(JavacScope, getEnclosingScope, JavacScope*)},
		{"getEnv", "()Lcom/sun/tools/javac/comp/Env;", "()Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", $PUBLIC, $virtualMethod(JavacScope, getEnv, $Env*)},
		{"getLocalElements", "()Ljava/lang/Iterable;", "()Ljava/lang/Iterable<+Ljavax/lang/model/element/Element;>;", $PUBLIC, $virtualMethod(JavacScope, getLocalElements, $Iterable*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(JavacScope, hashCode, int32_t)},
		{"isStarImportScope", "()Z", nullptr, $PUBLIC, $virtualMethod(JavacScope, isStarImportScope, bool)},
		{"lambda$static$0", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JavacScope, lambda$static$0, bool, $Symbol*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JavacScope, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.api.JavacScope$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.api.JavacScope$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.api.JavacScope",
		"java.lang.Object",
		"com.sun.source.tree.Scope",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.api.JavacScope$2,com.sun.tools.javac.api.JavacScope$1"
	};
	$loadClass(JavacScope, name, initialize, &classInfo$$, JavacScope::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JavacScope);
	});
	return class$;
}

$Class* JavacScope::class$ = nullptr;

				} // api
			} // javac
		} // tools
	} // sun
} // com