#include <sun/tools/jar/Main$Hasher.h>

#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/module/Configuration.h>
#include <java/lang/module/ModuleDescriptor.h>
#include <java/lang/module/ModuleFinder.h>
#include <java/lang/module/ModuleReference.h>
#include <java/lang/module/ResolvedModule.h>
#include <java/net/URI.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/Collection.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/module/ModuleHashes.h>
#include <jdk/internal/module/ModuleHashesBuilder.h>
#include <sun/tools/jar/Main$Hasher$1.h>
#include <sun/tools/jar/Main$Hasher$2.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $ModuleFinderArray = $Array<::java::lang::module::ModuleFinder>;
using $PathArray = $Array<::java::nio::file::Path>;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Configuration = ::java::lang::module::Configuration;
using $ModuleDescriptor = ::java::lang::module::ModuleDescriptor;
using $ModuleFinder = ::java::lang::module::ModuleFinder;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $ResolvedModule = ::java::lang::module::ResolvedModule;
using $URI = ::java::net::URI;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $Collection = ::java::util::Collection;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $ModuleHashes = ::jdk::internal::module::ModuleHashes;
using $ModuleHashesBuilder = ::jdk::internal::module::ModuleHashesBuilder;
using $Main = ::sun::tools::jar::Main;
using $Main$Hasher$1 = ::sun::tools::jar::Main$Hasher$1;
using $Main$Hasher$2 = ::sun::tools::jar::Main$Hasher$2;

namespace sun {
	namespace tools {
		namespace jar {

class Main$Hasher$$Lambda$lambda$new$0 : public $Function {
	$class(Main$Hasher$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* ref) override {
		 return $of(Main$Hasher::lambda$new$0($cast($ModuleReference, ref)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$Hasher$$Lambda$lambda$new$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$Hasher$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Main$Hasher$$Lambda$lambda$new$0, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Main$Hasher$$Lambda$lambda$new$0, apply, $Object*, Object$*)},
	{}
};
$ClassInfo Main$Hasher$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$Hasher$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Main$Hasher$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(Main$Hasher$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$Hasher$$Lambda$lambda$new$0::class$ = nullptr;

class Main$Hasher$$Lambda$lambda$new$1$1 : public $Predicate {
	$class(Main$Hasher$$Lambda$lambda$new$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Main$Hasher* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* mn) override {
		 return $nc(inst$)->lambda$new$1($cast($String, mn));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$Hasher$$Lambda$lambda$new$1$1>());
	}
	Main$Hasher* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$Hasher$$Lambda$lambda$new$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Main$Hasher$$Lambda$lambda$new$1$1, inst$)},
	{}
};
$MethodInfo Main$Hasher$$Lambda$lambda$new$1$1::methodInfos[3] = {
	{"<init>", "(Lsun/tools/jar/Main$Hasher;)V", nullptr, $PUBLIC, $method(Main$Hasher$$Lambda$lambda$new$1$1, init$, void, Main$Hasher*)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Main$Hasher$$Lambda$lambda$new$1$1, test, bool, Object$*)},
	{}
};
$ClassInfo Main$Hasher$$Lambda$lambda$new$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$Hasher$$Lambda$lambda$new$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Main$Hasher$$Lambda$lambda$new$1$1::load$($String* name, bool initialize) {
	$loadClass(Main$Hasher$$Lambda$lambda$new$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$Hasher$$Lambda$lambda$new$1$1::class$ = nullptr;

class Main$Hasher$$Lambda$name$2 : public $Function {
	$class(Main$Hasher$$Lambda$name$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($ResolvedModule, inst$)->name());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$Hasher$$Lambda$name$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$Hasher$$Lambda$name$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Main$Hasher$$Lambda$name$2, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Main$Hasher$$Lambda$name$2, apply, $Object*, Object$*)},
	{}
};
$ClassInfo Main$Hasher$$Lambda$name$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$Hasher$$Lambda$name$2",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Main$Hasher$$Lambda$name$2::load$($String* name, bool initialize) {
	$loadClass(Main$Hasher$$Lambda$name$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$Hasher$$Lambda$name$2::class$ = nullptr;

class Main$Hasher$$Lambda$lambda$new$2$3 : public $Predicate {
	$class(Main$Hasher$$Lambda$lambda$new$2$3, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Set* roots, $ModuleFinder* system) {
		$set(this, roots, roots);
		$set(this, system, system);
	}
	virtual bool test(Object$* mn) override {
		 return Main$Hasher::lambda$new$2(roots, system, $cast($String, mn));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$Hasher$$Lambda$lambda$new$2$3>());
	}
	$Set* roots = nullptr;
	$ModuleFinder* system = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$Hasher$$Lambda$lambda$new$2$3::fieldInfos[3] = {
	{"roots", "Ljava/util/Set;", nullptr, $PUBLIC, $field(Main$Hasher$$Lambda$lambda$new$2$3, roots)},
	{"system", "Ljava/lang/module/ModuleFinder;", nullptr, $PUBLIC, $field(Main$Hasher$$Lambda$lambda$new$2$3, system)},
	{}
};
$MethodInfo Main$Hasher$$Lambda$lambda$new$2$3::methodInfos[3] = {
	{"<init>", "(Ljava/util/Set;Ljava/lang/module/ModuleFinder;)V", nullptr, $PUBLIC, $method(Main$Hasher$$Lambda$lambda$new$2$3, init$, void, $Set*, $ModuleFinder*)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Main$Hasher$$Lambda$lambda$new$2$3, test, bool, Object$*)},
	{}
};
$ClassInfo Main$Hasher$$Lambda$lambda$new$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.tools.jar.Main$Hasher$$Lambda$lambda$new$2$3",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Main$Hasher$$Lambda$lambda$new$2$3::load$($String* name, bool initialize) {
	$loadClass(Main$Hasher$$Lambda$lambda$new$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$Hasher$$Lambda$lambda$new$2$3::class$ = nullptr;

$FieldInfo _Main$Hasher_FieldInfo_[] = {
	{"this$0", "Lsun/tools/jar/Main;", nullptr, $FINAL | $SYNTHETIC, $field(Main$Hasher, this$0)},
	{"hashesBuilder", "Ljdk/internal/module/ModuleHashesBuilder;", nullptr, $FINAL, $field(Main$Hasher, hashesBuilder)},
	{"finder", "Ljava/lang/module/ModuleFinder;", nullptr, $FINAL, $field(Main$Hasher, finder)},
	{"modules", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $FINAL, $field(Main$Hasher, modules)},
	{}
};

$MethodInfo _Main$Hasher_MethodInfo_[] = {
	{"<init>", "(Lsun/tools/jar/Main;Ljava/lang/module/ModuleDescriptor;Ljava/lang/String;)V", nullptr, 0, $method(Main$Hasher, init$, void, $Main*, $ModuleDescriptor*, $String*), "java.io.IOException"},
	{"computeHashes", "(Ljava/lang/String;)Ljdk/internal/module/ModuleHashes;", nullptr, 0, $virtualMethod(Main$Hasher, computeHashes, $ModuleHashes*, $String*)},
	{"lambda$new$0", "(Ljava/lang/module/ModuleReference;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Main$Hasher, lambda$new$0, $String*, $ModuleReference*)},
	{"lambda$new$1", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(Main$Hasher, lambda$new$1, bool, $String*)},
	{"lambda$new$2", "(Ljava/util/Set;Ljava/lang/module/ModuleFinder;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Main$Hasher, lambda$new$2, bool, $Set*, $ModuleFinder*, $String*)},
	{}
};

$InnerClassInfo _Main$Hasher_InnerClassesInfo_[] = {
	{"sun.tools.jar.Main$Hasher", "sun.tools.jar.Main", "Hasher", $PRIVATE},
	{"sun.tools.jar.Main$Hasher$2", nullptr, nullptr, 0},
	{"sun.tools.jar.Main$Hasher$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Main$Hasher_ClassInfo_ = {
	$ACC_SUPER,
	"sun.tools.jar.Main$Hasher",
	"java.lang.Object",
	nullptr,
	_Main$Hasher_FieldInfo_,
	_Main$Hasher_MethodInfo_,
	nullptr,
	nullptr,
	_Main$Hasher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.tools.jar.Main"
};

$Object* allocate$Main$Hasher($Class* clazz) {
	return $of($alloc(Main$Hasher));
}

void Main$Hasher::init$($Main* this$0, $ModuleDescriptor* descriptor, $String* fname) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$var($URI, uri, $nc($($Paths::get(fname, $$new($StringArray, 0))))->toUri());
	$var($ModuleReference, mref, $new($Main$Hasher$1, this, descriptor, uri, this$0));
	$set(this, finder, $ModuleFinder::compose($$new($ModuleFinderArray, {
		this$0->moduleFinder,
		static_cast<$ModuleFinder*>($$new($Main$Hasher$2, this, this$0, descriptor, mref))
	})));
	$var($Set, roots, $cast($Set, $nc($($nc($($nc($($nc($($nc(this->finder)->findAll()))->stream()))->map(static_cast<$Function*>($$new(Main$Hasher$$Lambda$lambda$new$0)))))->filter(static_cast<$Predicate*>($$new(Main$Hasher$$Lambda$lambda$new$1$1, this)))))->collect($($Collectors::toSet()))));
	$var($ModuleFinder, system, nullptr);
	$var($String, name, $nc(descriptor)->name());
	if (name != nullptr && $nc($($nc($($ModuleFinder::ofSystem()))->find(name)))->isPresent()) {
		$assign(system, $ModuleFinder::of($$new($PathArray, 0)));
	} else {
		$assign(system, $ModuleFinder::ofSystem());
	}
	$var($Configuration, config, $nc($($Configuration::empty()))->resolve(system, this->finder, roots));
	$set(this, modules, $cast($Set, $nc($($nc($($nc($($nc($($nc(config)->modules()))->stream()))->map(static_cast<$Function*>($$new(Main$Hasher$$Lambda$name$2)))))->filter(static_cast<$Predicate*>($$new(Main$Hasher$$Lambda$lambda$new$2$3, roots, system)))))->collect($($Collectors::toSet()))));
	$set(this, hashesBuilder, $new($ModuleHashesBuilder, config, this->modules));
}

$ModuleHashes* Main$Hasher::computeHashes($String* name) {
	$useLocalCurrentObjectStackCache();
	if (this->hashesBuilder == nullptr) {
		return nullptr;
	}
	return $cast($ModuleHashes, $nc($($nc(this->hashesBuilder)->computeHashes($($Set::of($of(name))))))->get(name));
}

bool Main$Hasher::lambda$new$2($Set* roots, $ModuleFinder* system, $String* mn) {
	bool var$0 = $nc(roots)->contains(mn);
	return var$0 && !$nc($($nc(system)->find(mn)))->isPresent();
}

bool Main$Hasher::lambda$new$1($String* mn) {
	return $nc($($nc(this->this$0->modulesToHash)->matcher(mn)))->find();
}

$String* Main$Hasher::lambda$new$0($ModuleReference* ref) {
	return $nc($($nc(ref)->descriptor()))->name();
}

Main$Hasher::Main$Hasher() {
}

$Class* Main$Hasher::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Main$Hasher$$Lambda$lambda$new$0::classInfo$.name)) {
			return Main$Hasher$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals(Main$Hasher$$Lambda$lambda$new$1$1::classInfo$.name)) {
			return Main$Hasher$$Lambda$lambda$new$1$1::load$(name, initialize);
		}
		if (name->equals(Main$Hasher$$Lambda$name$2::classInfo$.name)) {
			return Main$Hasher$$Lambda$name$2::load$(name, initialize);
		}
		if (name->equals(Main$Hasher$$Lambda$lambda$new$2$3::classInfo$.name)) {
			return Main$Hasher$$Lambda$lambda$new$2$3::load$(name, initialize);
		}
	}
	$loadClass(Main$Hasher, name, initialize, &_Main$Hasher_ClassInfo_, allocate$Main$Hasher);
	return class$;
}

$Class* Main$Hasher::class$ = nullptr;

		} // jar
	} // tools
} // sun