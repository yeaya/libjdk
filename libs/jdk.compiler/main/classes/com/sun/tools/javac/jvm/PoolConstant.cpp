#include <com/sun/tools/javac/jvm/PoolConstant.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Types = ::com::sun::tools::javac::code::Types;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$Object* PoolConstant::poolKey($Types* types) {
	return this;
}

$Class* PoolConstant::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"poolKey", "(Lcom/sun/tools/javac/code/Types;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PoolConstant, poolKey, $Object*, $Types*)},
		{"poolTag", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PoolConstant, poolTag, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.PoolConstant$NameAndType", "com.sun.tools.javac.jvm.PoolConstant", "NameAndType", $PUBLIC | $STATIC | $FINAL},
		{"com.sun.tools.javac.jvm.PoolConstant$Dynamic", "com.sun.tools.javac.jvm.PoolConstant", "Dynamic", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant", "com.sun.tools.javac.jvm.PoolConstant", "LoadableConstant", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.tools.javac.jvm.PoolConstant",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.PoolConstant$NameAndType,com.sun.tools.javac.jvm.PoolConstant$Dynamic,com.sun.tools.javac.jvm.PoolConstant$Dynamic$BsmKey,com.sun.tools.javac.jvm.PoolConstant$LoadableConstant,com.sun.tools.javac.jvm.PoolConstant$LoadableConstant$BasicConstant"
	};
	$loadClass(PoolConstant, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PoolConstant);
	});
	return class$;
}

$Class* PoolConstant::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com