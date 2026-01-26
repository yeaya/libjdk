#include <java/lang/instrument/Instrumentation.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/Module.h>
#include <java/lang/instrument/ClassDefinition.h>
#include <java/lang/instrument/ClassFileTransformer.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/jar/JarFile.h>
#include <jcpp.h>

using $ClassDefinitionArray = $Array<::java::lang::instrument::ClassDefinition>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ClassFileTransformer = ::java::lang::instrument::ClassFileTransformer;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $JarFile = ::java::util::jar::JarFile;

namespace java {
	namespace lang {
		namespace instrument {

$MethodInfo _Instrumentation_MethodInfo_[] = {
	{"addTransformer", "(Ljava/lang/instrument/ClassFileTransformer;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Instrumentation, addTransformer, void, $ClassFileTransformer*, bool)},
	{"addTransformer", "(Ljava/lang/instrument/ClassFileTransformer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Instrumentation, addTransformer, void, $ClassFileTransformer*)},
	{"appendToBootstrapClassLoaderSearch", "(Ljava/util/jar/JarFile;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Instrumentation, appendToBootstrapClassLoaderSearch, void, $JarFile*)},
	{"appendToSystemClassLoaderSearch", "(Ljava/util/jar/JarFile;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Instrumentation, appendToSystemClassLoaderSearch, void, $JarFile*)},
	{"getAllLoadedClasses", "()[Ljava/lang/Class;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Instrumentation, getAllLoadedClasses, $ClassArray*)},
	{"getInitiatedClasses", "(Ljava/lang/ClassLoader;)[Ljava/lang/Class;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Instrumentation, getInitiatedClasses, $ClassArray*, $ClassLoader*)},
	{"getObjectSize", "(Ljava/lang/Object;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Instrumentation, getObjectSize, int64_t, Object$*)},
	{"isModifiableClass", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(Instrumentation, isModifiableClass, bool, $Class*)},
	{"isModifiableModule", "(Ljava/lang/Module;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Instrumentation, isModifiableModule, bool, $Module*)},
	{"isNativeMethodPrefixSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Instrumentation, isNativeMethodPrefixSupported, bool)},
	{"isRedefineClassesSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Instrumentation, isRedefineClassesSupported, bool)},
	{"isRetransformClassesSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Instrumentation, isRetransformClassesSupported, bool)},
	{"redefineClasses", "([Ljava/lang/instrument/ClassDefinition;)V", nullptr, $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(Instrumentation, redefineClasses, void, $ClassDefinitionArray*), "java.lang.ClassNotFoundException,java.lang.instrument.UnmodifiableClassException"},
	{"redefineModule", "(Ljava/lang/Module;Ljava/util/Set;Ljava/util/Map;Ljava/util/Map;Ljava/util/Set;Ljava/util/Map;)V", "(Ljava/lang/Module;Ljava/util/Set<Ljava/lang/Module;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/Module;>;>;Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/Module;>;>;Ljava/util/Set<Ljava/lang/Class<*>;>;Ljava/util/Map<Ljava/lang/Class<*>;Ljava/util/List<Ljava/lang/Class<*>;>;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(Instrumentation, redefineModule, void, $Module*, $Set*, $Map*, $Map*, $Set*, $Map*)},
	{"removeTransformer", "(Ljava/lang/instrument/ClassFileTransformer;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Instrumentation, removeTransformer, bool, $ClassFileTransformer*)},
	{"retransformClasses", "([Ljava/lang/Class;)V", "([Ljava/lang/Class<*>;)V", $PUBLIC | $TRANSIENT | $ABSTRACT, $virtualMethod(Instrumentation, retransformClasses, void, $ClassArray*), "java.lang.instrument.UnmodifiableClassException"},
	{"setNativeMethodPrefix", "(Ljava/lang/instrument/ClassFileTransformer;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Instrumentation, setNativeMethodPrefix, void, $ClassFileTransformer*, $String*)},
	{}
};

$ClassInfo _Instrumentation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.instrument.Instrumentation",
	nullptr,
	nullptr,
	nullptr,
	_Instrumentation_MethodInfo_
};

$Object* allocate$Instrumentation($Class* clazz) {
	return $of($alloc(Instrumentation));
}

$Class* Instrumentation::load$($String* name, bool initialize) {
	$loadClass(Instrumentation, name, initialize, &_Instrumentation_ClassInfo_, allocate$Instrumentation);
	return class$;
}

$Class* Instrumentation::class$ = nullptr;

		} // instrument
	} // lang
} // java