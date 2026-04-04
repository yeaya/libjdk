#include <com/sun/tools/javac/jvm/PoolConstant$Dynamic.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/PoolConstant$Dynamic$BsmKey.h>
#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant.h>
#include <com/sun/tools/javac/jvm/PoolConstant.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <jcpp.h>

using $PoolConstant$LoadableConstantArray = $Array<::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant>;
using $Types = ::com::sun::tools::javac::code::Types;
using $PoolConstant = ::com::sun::tools::javac::jvm::PoolConstant;
using $PoolConstant$Dynamic$BsmKey = ::com::sun::tools::javac::jvm::PoolConstant$Dynamic$BsmKey;
using $PoolConstant$LoadableConstant = ::com::sun::tools::javac::jvm::PoolConstant$LoadableConstant;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$PoolConstant$Dynamic$BsmKey* PoolConstant$Dynamic::bsmKey($Types* types) {
	$useLocalObjectStack();
	$var($PoolConstant$LoadableConstant, var$0, bootstrapMethod());
	return $new($PoolConstant$Dynamic$BsmKey, types, var$0, $(staticArgs()));
}

$Object* PoolConstant$Dynamic::poolKey($Types* types) {
	$useLocalObjectStack();
	$var($Object, var$0, bsmKey(types));
	return $new($Pair, var$0, $($$nc(dynamicType())->poolKey(types)));
}

$Class* PoolConstant$Dynamic::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"bootstrapMethod", "()Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PoolConstant$Dynamic, bootstrapMethod, $PoolConstant$LoadableConstant*)},
		{"bsmKey", "(Lcom/sun/tools/javac/code/Types;)Lcom/sun/tools/javac/jvm/PoolConstant$Dynamic$BsmKey;", nullptr, $PUBLIC, $virtualMethod(PoolConstant$Dynamic, bsmKey, $PoolConstant$Dynamic$BsmKey*, $Types*)},
		{"dynamicType", "()Lcom/sun/tools/javac/jvm/PoolConstant;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PoolConstant$Dynamic, dynamicType, $PoolConstant*)},
		{"poolKey", "(Lcom/sun/tools/javac/code/Types;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PoolConstant$Dynamic, poolKey, $Object*, $Types*)},
		{"staticArgs", "()[Lcom/sun/tools/javac/jvm/PoolConstant$LoadableConstant;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PoolConstant$Dynamic, staticArgs, $PoolConstant$LoadableConstantArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.PoolConstant$Dynamic", "com.sun.tools.javac.jvm.PoolConstant", "Dynamic", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.jvm.PoolConstant$Dynamic$BsmKey", "com.sun.tools.javac.jvm.PoolConstant$Dynamic", "BsmKey", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.jvm.PoolConstant$Dynamic",
		nullptr,
		"com.sun.tools.javac.jvm.PoolConstant",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.PoolConstant"
	};
	$loadClass(PoolConstant$Dynamic, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PoolConstant$Dynamic);
	});
	return class$;
}

$Class* PoolConstant$Dynamic::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com