#include <com/sun/tools/javac/comp/TypeEnvs.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/comp/Env.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <jcpp.h>

using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Env = ::com::sun::tools::javac::comp::Env;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

$Context$Key* TypeEnvs::typeEnvsKey = nullptr;

TypeEnvs* TypeEnvs::instance($Context* context) {
	$init(TypeEnvs);
	$var(TypeEnvs, instance, $cast(TypeEnvs, $nc(context)->get(TypeEnvs::typeEnvsKey)));
	if (instance == nullptr) {
		$assign(instance, $new(TypeEnvs, context));
	}
	return instance;
}

void TypeEnvs::init$($Context* context) {
	$set(this, map, $new($HashMap));
	$nc(context)->put(TypeEnvs::typeEnvsKey, this);
}

$Env* TypeEnvs::get($Symbol$TypeSymbol* sym) {
	return $cast($Env, $nc(this->map)->get(sym));
}

$Env* TypeEnvs::put($Symbol$TypeSymbol* sym, $Env* env) {
	return $cast($Env, $nc(this->map)->put(sym, env));
}

$Env* TypeEnvs::remove($Symbol$TypeSymbol* sym) {
	return $cast($Env, $nc(this->map)->remove(sym));
}

$Collection* TypeEnvs::values() {
	return $nc(this->map)->values();
}

void TypeEnvs::clear() {
	$nc(this->map)->clear();
}

void TypeEnvs::clinit$($Class* clazz) {
	$assignStatic(TypeEnvs::typeEnvsKey, $new($Context$Key));
}

TypeEnvs::TypeEnvs() {
}

$Class* TypeEnvs::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TypeEnvs, serialVersionUID)},
		{"typeEnvsKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/comp/TypeEnvs;>;", $PROTECTED | $STATIC | $FINAL, $staticField(TypeEnvs, typeEnvsKey)},
		{"map", "Ljava/util/HashMap;", "Ljava/util/HashMap<Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", $PRIVATE, $field(TypeEnvs, map)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(TypeEnvs, init$, void, $Context*)},
		{"clear", "()V", nullptr, 0, $virtualMethod(TypeEnvs, clear, void)},
		{"get", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0, $virtualMethod(TypeEnvs, get, $Env*, $Symbol$TypeSymbol*)},
		{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/comp/TypeEnvs;", nullptr, $PUBLIC | $STATIC, $staticMethod(TypeEnvs, instance, TypeEnvs*, $Context*)},
		{"put", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/comp/Env;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0, $virtualMethod(TypeEnvs, put, $Env*, $Symbol$TypeSymbol*, $Env*)},
		{"remove", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/comp/Env;", "(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;)Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;", 0, $virtualMethod(TypeEnvs, remove, $Env*, $Symbol$TypeSymbol*)},
		{"values", "()Ljava/util/Collection;", "()Ljava/util/Collection<Lcom/sun/tools/javac/comp/Env<Lcom/sun/tools/javac/comp/AttrContext;>;>;", 0, $virtualMethod(TypeEnvs, values, $Collection*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.TypeEnvs",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TypeEnvs, name, initialize, &classInfo$$, TypeEnvs::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TypeEnvs);
	});
	return class$;
}

$Class* TypeEnvs::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com