#include <com/sun/tools/javac/file/CacheFSInfo.h>
#include <com/sun/tools/javac/file/FSInfo.h>
#include <com/sun/tools/javac/util/Context$Factory.h>
#include <com/sun/tools/javac/util/Context.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <java/util/List.h>
#include <java/util/Optional.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $FSInfo = ::com::sun::tools::javac::file::FSInfo;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Factory = ::com::sun::tools::javac::util::Context$Factory;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $List = ::java::util::List;
using $Optional = ::java::util::Optional;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Function = ::java::util::function::Function;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class CacheFSInfo$$Lambda$lambda$preRegister$0 : public $Context$Factory {
	$class(CacheFSInfo$$Lambda$lambda$preRegister$0, $NO_CLASS_INIT, $Context$Factory)
public:
	void init$() {
	}
	virtual $Object* make($Context* c) override {
		return CacheFSInfo::lambda$preRegister$0(c);
	}
};
$Class* CacheFSInfo$$Lambda$lambda$preRegister$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CacheFSInfo$$Lambda$lambda$preRegister$0, init$, void)},
		{"make", "(Lcom/sun/tools/javac/util/Context;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CacheFSInfo$$Lambda$lambda$preRegister$0, make, $Object*, $Context*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.file.CacheFSInfo$$Lambda$lambda$preRegister$0",
		"java.lang.Object",
		"com.sun.tools.javac.util.Context$Factory",
		nullptr,
		methodInfos$$
	};
	$loadClass(CacheFSInfo$$Lambda$lambda$preRegister$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CacheFSInfo$$Lambda$lambda$preRegister$0);
	});
	return class$;
}
$Class* CacheFSInfo$$Lambda$lambda$preRegister$0::class$ = nullptr;

class CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1 : public $Function {
	$class(CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$(CacheFSInfo* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* x$0) override {
		return $of($nc(inst$)->lambda$getCanonicalFile$1($cast($Path, x$0)));
	}
	CacheFSInfo* inst$ = nullptr;
};
$Class* CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/file/CacheFSInfo;)V", nullptr, $PUBLIC, $method(CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1, init$, void, CacheFSInfo*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.file.CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1);
	});
	return class$;
}
$Class* CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1::class$ = nullptr;

class CacheFSInfo$$Lambda$isDirectory$2 : public $Function {
	$class(CacheFSInfo$$Lambda$isDirectory$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		return $of($sure($BasicFileAttributes, inst$)->isDirectory());
	}
};
$Class* CacheFSInfo$$Lambda$isDirectory$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CacheFSInfo$$Lambda$isDirectory$2, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CacheFSInfo$$Lambda$isDirectory$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.file.CacheFSInfo$$Lambda$isDirectory$2",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(CacheFSInfo$$Lambda$isDirectory$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CacheFSInfo$$Lambda$isDirectory$2);
	});
	return class$;
}
$Class* CacheFSInfo$$Lambda$isDirectory$2::class$ = nullptr;

class CacheFSInfo$$Lambda$isRegularFile$3 : public $Function {
	$class(CacheFSInfo$$Lambda$isRegularFile$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		return $of($sure($BasicFileAttributes, inst$)->isRegularFile());
	}
};
$Class* CacheFSInfo$$Lambda$isRegularFile$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CacheFSInfo$$Lambda$isRegularFile$3, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CacheFSInfo$$Lambda$isRegularFile$3, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.file.CacheFSInfo$$Lambda$isRegularFile$3",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(CacheFSInfo$$Lambda$isRegularFile$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CacheFSInfo$$Lambda$isRegularFile$3);
	});
	return class$;
}
$Class* CacheFSInfo$$Lambda$isRegularFile$3::class$ = nullptr;

class CacheFSInfo$$Lambda$maybeReadAttributes$4 : public $Function {
	$class(CacheFSInfo$$Lambda$maybeReadAttributes$4, $NO_CLASS_INIT, $Function)
public:
	void init$(CacheFSInfo* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* file) override {
		return $nc(inst$)->maybeReadAttributes($cast($Path, file));
	}
	CacheFSInfo* inst$ = nullptr;
};
$Class* CacheFSInfo$$Lambda$maybeReadAttributes$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CacheFSInfo$$Lambda$maybeReadAttributes$4, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/file/CacheFSInfo;)V", nullptr, $PUBLIC, $method(CacheFSInfo$$Lambda$maybeReadAttributes$4, init$, void, CacheFSInfo*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CacheFSInfo$$Lambda$maybeReadAttributes$4, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.file.CacheFSInfo$$Lambda$maybeReadAttributes$4",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CacheFSInfo$$Lambda$maybeReadAttributes$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CacheFSInfo$$Lambda$maybeReadAttributes$4);
	});
	return class$;
}
$Class* CacheFSInfo$$Lambda$maybeReadAttributes$4::class$ = nullptr;

void CacheFSInfo::init$() {
	$FSInfo::init$();
	$set(this, canonicalPathCache, $new($ConcurrentHashMap));
	$set(this, attributeCache, $new($ConcurrentHashMap));
	$set(this, jarClassPathCache, $new($ConcurrentHashMap));
}

void CacheFSInfo::preRegister($Context* context) {
	$init(CacheFSInfo);
	$load($FSInfo);
	$nc(context)->put($FSInfo::class$, $cast($Context$Factory, $$new(CacheFSInfo$$Lambda$lambda$preRegister$0)));
}

void CacheFSInfo::clearCache() {
	this->canonicalPathCache->clear();
	this->attributeCache->clear();
	this->jarClassPathCache->clear();
}

$Path* CacheFSInfo::getCanonicalFile($Path* file) {
	return $cast($Path, this->canonicalPathCache->computeIfAbsent(file, $$new(CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1, this)));
}

bool CacheFSInfo::exists($Path* file) {
	return $$nc(getAttributes(file))->isPresent();
}

bool CacheFSInfo::isDirectory($Path* file) {
	$useLocalObjectStack();
	return $$sure($Boolean, $$nc($$nc(getAttributes(file))->map($$new(CacheFSInfo$$Lambda$isDirectory$2)))->orElse($($Boolean::valueOf(false))))->booleanValue();
}

bool CacheFSInfo::isFile($Path* file) {
	$useLocalObjectStack();
	return $$sure($Boolean, $$nc($$nc(getAttributes(file))->map($$new(CacheFSInfo$$Lambda$isRegularFile$3)))->orElse($($Boolean::valueOf(false))))->booleanValue();
}

$List* CacheFSInfo::getJarClassPath($Path* file) {
	$synchronized(this->jarClassPathCache) {
		$var($List, jarClassPath, $cast($List, this->jarClassPathCache->get(file)));
		if (jarClassPath == nullptr) {
			$assign(jarClassPath, $FSInfo::getJarClassPath(file));
			this->jarClassPathCache->put(file, jarClassPath);
		}
		return jarClassPath;
	}
}

$Optional* CacheFSInfo::getAttributes($Path* file) {
	return $cast($Optional, this->attributeCache->computeIfAbsent(file, $$new(CacheFSInfo$$Lambda$maybeReadAttributes$4, this)));
}

$Optional* CacheFSInfo::maybeReadAttributes($Path* file) {
	$useLocalObjectStack();
	try {
		$load($BasicFileAttributes);
		return $Optional::of($($Files::readAttributes(file, $BasicFileAttributes::class$, $$new($LinkOptionArray, 0))));
	} catch ($IOException& e) {
		return $Optional::empty();
	}
	$shouldNotReachHere();
}

$Path* CacheFSInfo::lambda$getCanonicalFile$1($Path* x$0) {
	return $FSInfo::getCanonicalFile(x$0);
}

$FSInfo* CacheFSInfo::lambda$preRegister$0($Context* c) {
	$init(CacheFSInfo);
	$var($FSInfo, instance, $new(CacheFSInfo));
	$load($FSInfo);
	$nc(c)->put($FSInfo::class$, instance);
	return instance;
}

CacheFSInfo::CacheFSInfo() {
}

$Class* CacheFSInfo::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.file.CacheFSInfo$$Lambda$lambda$preRegister$0")) {
			return CacheFSInfo$$Lambda$lambda$preRegister$0::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.file.CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1")) {
			return CacheFSInfo$$Lambda$lambda$getCanonicalFile$1$1::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.file.CacheFSInfo$$Lambda$isDirectory$2")) {
			return CacheFSInfo$$Lambda$isDirectory$2::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.file.CacheFSInfo$$Lambda$isRegularFile$3")) {
			return CacheFSInfo$$Lambda$isRegularFile$3::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.file.CacheFSInfo$$Lambda$maybeReadAttributes$4")) {
			return CacheFSInfo$$Lambda$maybeReadAttributes$4::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"canonicalPathCache", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/nio/file/Path;Ljava/nio/file/Path;>;", $PROTECTED | $FINAL, $field(CacheFSInfo, canonicalPathCache)},
		{"attributeCache", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/nio/file/Path;Ljava/util/Optional<Ljava/nio/file/attribute/BasicFileAttributes;>;>;", $PROTECTED | $FINAL, $field(CacheFSInfo, attributeCache)},
		{"jarClassPathCache", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/nio/file/Path;Ljava/util/List<Ljava/nio/file/Path;>;>;", $PROTECTED | $FINAL, $field(CacheFSInfo, jarClassPathCache)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CacheFSInfo, init$, void)},
		{"clearCache", "()V", nullptr, $PUBLIC, $virtualMethod(CacheFSInfo, clearCache, void)},
		{"exists", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC, $virtualMethod(CacheFSInfo, exists, bool, $Path*)},
		{"getAttributes", "(Ljava/nio/file/Path;)Ljava/util/Optional;", "(Ljava/nio/file/Path;)Ljava/util/Optional<Ljava/nio/file/attribute/BasicFileAttributes;>;", $PROTECTED, $virtualMethod(CacheFSInfo, getAttributes, $Optional*, $Path*)},
		{"getCanonicalFile", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PUBLIC, $virtualMethod(CacheFSInfo, getCanonicalFile, $Path*, $Path*)},
		{"getJarClassPath", "(Ljava/nio/file/Path;)Ljava/util/List;", "(Ljava/nio/file/Path;)Ljava/util/List<Ljava/nio/file/Path;>;", $PUBLIC, $virtualMethod(CacheFSInfo, getJarClassPath, $List*, $Path*), "java.io.IOException"},
		{"isDirectory", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC, $virtualMethod(CacheFSInfo, isDirectory, bool, $Path*)},
		{"isFile", "(Ljava/nio/file/Path;)Z", nullptr, $PUBLIC, $virtualMethod(CacheFSInfo, isFile, bool, $Path*)},
		{"lambda$getCanonicalFile$1", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;", nullptr, $PRIVATE | $SYNTHETIC, $method(CacheFSInfo, lambda$getCanonicalFile$1, $Path*, $Path*)},
		{"lambda$preRegister$0", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/file/FSInfo;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CacheFSInfo, lambda$preRegister$0, $FSInfo*, $Context*)},
		{"maybeReadAttributes", "(Ljava/nio/file/Path;)Ljava/util/Optional;", "(Ljava/nio/file/Path;)Ljava/util/Optional<Ljava/nio/file/attribute/BasicFileAttributes;>;", $PROTECTED, $virtualMethod(CacheFSInfo, maybeReadAttributes, $Optional*, $Path*)},
		{"preRegister", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(CacheFSInfo, preRegister, void, $Context*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.file.CacheFSInfo",
		"com.sun.tools.javac.file.FSInfo",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CacheFSInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CacheFSInfo);
	});
	return class$;
}

$Class* CacheFSInfo::class$ = nullptr;

				} // file
			} // javac
		} // tools
	} // sun
} // com