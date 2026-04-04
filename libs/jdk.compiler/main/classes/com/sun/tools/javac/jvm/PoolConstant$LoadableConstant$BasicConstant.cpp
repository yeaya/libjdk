#include <com/sun/tools/javac/jvm/PoolConstant$LoadableConstant$BasicConstant.h>
#include <com/sun/tools/javac/code/Types.h>
#include <jcpp.h>

using $Types = ::com::sun::tools::javac::code::Types;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void PoolConstant$LoadableConstant$BasicConstant::init$(int32_t tag, Object$* data) {
	this->tag = tag;
	$set(this, data, data);
}

int32_t PoolConstant$LoadableConstant$BasicConstant::poolTag() {
	return this->tag;
}

$Object* PoolConstant$LoadableConstant$BasicConstant::poolKey($Types* types) {
	return this->data;
}

PoolConstant$LoadableConstant$BasicConstant::PoolConstant$LoadableConstant$BasicConstant() {
}

$Class* PoolConstant$LoadableConstant$BasicConstant::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tag", "I", nullptr, 0, $field(PoolConstant$LoadableConstant$BasicConstant, tag)},
		{"data", "Ljava/lang/Object;", nullptr, 0, $field(PoolConstant$LoadableConstant$BasicConstant, data)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/Object;)V", nullptr, $PRIVATE, $method(PoolConstant$LoadableConstant$BasicConstant, init$, void, int32_t, Object$*)},
		{"poolKey", "(Lcom/sun/tools/javac/code/Types;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PoolConstant$LoadableConstant$BasicConstant, poolKey, $Object*, $Types*)},
		{"poolTag", "()I", nullptr, $PUBLIC, $virtualMethod(PoolConstant$LoadableConstant$BasicConstant, poolTag, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant", "com.sun.tools.javac.jvm.PoolConstant", "LoadableConstant", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant$BasicConstant", "com.sun.tools.javac.jvm.PoolConstant$LoadableConstant", "BasicConstant", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant$BasicConstant",
		"java.lang.Object",
		"com.sun.tools.javac.jvm.PoolConstant$LoadableConstant",
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
	$loadClass(PoolConstant$LoadableConstant$BasicConstant, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PoolConstant$LoadableConstant$BasicConstant);
	});
	return class$;
}

$Class* PoolConstant$LoadableConstant$BasicConstant::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com