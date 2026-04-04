#include <com/sun/tools/javac/util/Dependencies.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Dependencies$CompletionCause.h>
#include <com/sun/tools/javac/util/Dependencies$DummyDependencies.h>
#include <jcpp.h>

using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Dependencies$CompletionCause = ::com::sun::tools::javac::util::Dependencies$CompletionCause;
using $Dependencies$DummyDependencies = ::com::sun::tools::javac::util::Dependencies$DummyDependencies;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$Context$Key* Dependencies::dependenciesKey = nullptr;

Dependencies* Dependencies::instance($Context* context) {
	$init(Dependencies);
	$var(Dependencies, instance, $cast(Dependencies, $nc(context)->get(Dependencies::dependenciesKey)));
	if (instance == nullptr) {
		$assign(instance, $new($Dependencies$DummyDependencies, context));
	}
	return instance;
}

void Dependencies::init$($Context* context) {
	$nc(context)->put(Dependencies::dependenciesKey, this);
}

void Dependencies::clinit$($Class* clazz) {
	$assignStatic(Dependencies::dependenciesKey, $new($Context$Key));
}

Dependencies::Dependencies() {
}

$Class* Dependencies::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dependenciesKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/util/Dependencies;>;", $PROTECTED | $STATIC | $FINAL, $staticField(Dependencies, dependenciesKey)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PROTECTED, $method(Dependencies, init$, void, $Context*)},
		{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/util/Dependencies;", nullptr, $PUBLIC | $STATIC, $staticMethod(Dependencies, instance, Dependencies*, $Context*)},
		{"pop", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Dependencies, pop, void)},
		{"push", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/util/Dependencies$CompletionCause;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Dependencies, push, void, $Symbol$ClassSymbol*, $Dependencies$CompletionCause*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.Dependencies$DummyDependencies", "com.sun.tools.javac.util.Dependencies", "DummyDependencies", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.util.Dependencies$GraphDependencies", "com.sun.tools.javac.util.Dependencies", "GraphDependencies", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.util.Dependencies$CompletionCause", "com.sun.tools.javac.util.Dependencies", "CompletionCause", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.tools.javac.util.Dependencies",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.Dependencies$DummyDependencies,com.sun.tools.javac.util.Dependencies$GraphDependencies,com.sun.tools.javac.util.Dependencies$GraphDependencies$FilterVisitor,com.sun.tools.javac.util.Dependencies$GraphDependencies$PruneVisitor,com.sun.tools.javac.util.Dependencies$GraphDependencies$CompletionNode,com.sun.tools.javac.util.Dependencies$GraphDependencies$CompletionNode$Kind,com.sun.tools.javac.util.Dependencies$GraphDependencies$Node,com.sun.tools.javac.util.Dependencies$GraphDependencies$DependenciesMode,com.sun.tools.javac.util.Dependencies$CompletionCause"
	};
	$loadClass(Dependencies, name, initialize, &classInfo$$, Dependencies::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Dependencies);
	});
	return class$;
}

$Class* Dependencies::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com