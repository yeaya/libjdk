#include <com/sun/tools/javac/jvm/PoolConstant$Dynamic$BsmKey.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/PoolConstant$Dynamic.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Objects.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $PoolConstant$LoadableConstantArray = $Array<::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant>;
using $Types = ::com::sun::tools::javac::code::Types;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
using $List = ::com::sun::tools::javac::util::List;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Objects = ::java::util::Objects;
using $Function = ::java::util::function::Function;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class PoolConstant$Dynamic$BsmKey$$Lambda$lambda$new$0 : public $Function {
	$class(PoolConstant$Dynamic$BsmKey$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Function)
public:
	void init$($Types* types) {
		$set(this, types, types);
	}
	virtual $Object* apply(Object$* p) override {
		 return PoolConstant$Dynamic$BsmKey::lambda$new$0(types, $cast($PoolConstant$LoadableConstant, p));
	}
	$Types* types = nullptr;
};
$Class* PoolConstant$Dynamic$BsmKey$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, $PUBLIC, $field(PoolConstant$Dynamic$BsmKey$$Lambda$lambda$new$0, types)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types;)V", nullptr, $PUBLIC, $method(PoolConstant$Dynamic$BsmKey$$Lambda$lambda$new$0, init$, void, $Types*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PoolConstant$Dynamic$BsmKey$$Lambda$lambda$new$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.jvm.PoolConstant$Dynamic$BsmKey$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PoolConstant$Dynamic$BsmKey$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PoolConstant$Dynamic$BsmKey$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* PoolConstant$Dynamic$BsmKey$$Lambda$lambda$new$0::class$ = nullptr;

void PoolConstant$Dynamic$BsmKey::init$($Types* types, $PoolConstant$LoadableConstant* bsm, $PoolConstant$LoadableConstantArray* staticArgs) {
	$useLocalObjectStack();
	$set(this, bsm, bsm);
	$set(this, bsmKey, $nc(bsm)->poolKey(types));
	$set(this, staticArgs, staticArgs);
	$set(this, staticArgKeys, $cast($List, $$nc($$nc($Stream::of(staticArgs))->map($$new(PoolConstant$Dynamic$BsmKey$$Lambda$lambda$new$0, types)))->collect($($List::collector()))));
}

int32_t PoolConstant$Dynamic$BsmKey::hashCode() {
	int32_t var$0 = $nc(this->bsmKey)->hashCode();
	return var$0 + $nc(this->staticArgKeys)->hashCode();
}

bool PoolConstant$Dynamic$BsmKey::equals(Object$* obj) {
	$var(PoolConstant$Dynamic$BsmKey, key, nullptr);
	bool var$2 = $instanceOf(PoolConstant$Dynamic$BsmKey, obj);
	if (var$2) {
		$assign(key, $cast(PoolConstant$Dynamic$BsmKey, obj));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && $Objects::equals(this->bsmKey, $nc(key)->bsmKey);
	return var$0 && $Objects::equals(this->staticArgKeys, key->staticArgKeys);
}

$Object* PoolConstant$Dynamic$BsmKey::lambda$new$0($Types* types, $PoolConstant$LoadableConstant* p) {
	return $nc(p)->poolKey(types);
}

PoolConstant$Dynamic$BsmKey::PoolConstant$Dynamic$BsmKey() {
}

$Class* PoolConstant$Dynamic$BsmKey::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.jvm.PoolConstant$Dynamic$BsmKey$$Lambda$lambda$new$0")) {
			return PoolConstant$Dynamic$BsmKey$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"bsm", "Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;", nullptr, $PUBLIC | $FINAL, $field(PoolConstant$Dynamic$BsmKey, bsm)},
		{"staticArgs", "[Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;", nullptr, $PUBLIC | $FINAL, $field(PoolConstant$Dynamic$BsmKey, staticArgs)},
		{"bsmKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(PoolConstant$Dynamic$BsmKey, bsmKey)},
		{"staticArgKeys", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<*>;", $PRIVATE | $FINAL, $field(PoolConstant$Dynamic$BsmKey, staticArgKeys)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;[Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;)V", nullptr, $PRIVATE, $method(PoolConstant$Dynamic$BsmKey, init$, void, $Types*, $PoolConstant$LoadableConstant*, $PoolConstant$LoadableConstantArray*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PoolConstant$Dynamic$BsmKey, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(PoolConstant$Dynamic$BsmKey, hashCode, int32_t)},
		{"lambda$new$0", "(Lcom/sun/tools/javac/code/Types;Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PoolConstant$Dynamic$BsmKey, lambda$new$0, $Object*, $Types*, $PoolConstant$LoadableConstant*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.PoolConstant$Dynamic", "com.sun.tools.javac.jvm.PoolConstant", "Dynamic", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.jvm.PoolConstant$Dynamic$BsmKey", "com.sun.tools.javac.jvm.PoolConstant$Dynamic", "BsmKey", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.jvm.PoolConstant$Dynamic$BsmKey",
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
		"com.sun.tools.javac.jvm.PoolConstant"
	};
	$loadClass(PoolConstant$Dynamic$BsmKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PoolConstant$Dynamic$BsmKey);
	});
	return class$;
}

$Class* PoolConstant$Dynamic$BsmKey::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com