#include <com/sun/tools/javac/jvm/PoolConstant$NameAndType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$UniqueType.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/ClassFile.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <jcpp.h>

using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$UniqueType = ::com::sun::tools::javac::code::Types$UniqueType;
using $ClassFile = ::com::sun::tools::javac::jvm::ClassFile;
using $Name = ::com::sun::tools::javac::util::Name;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void PoolConstant$NameAndType::init$($Name* name, $Type* type) {
	$set(this, name, name);
	$set(this, type, type);
}

int32_t PoolConstant$NameAndType::poolTag() {
	return $ClassFile::CONSTANT_NameandType;
}

$Object* PoolConstant$NameAndType::poolKey($Types* types) {
	return $new($Pair, this->name, $$new($Types$UniqueType, this->type, types));
}

PoolConstant$NameAndType::PoolConstant$NameAndType() {
}

$Class* PoolConstant$NameAndType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Lcom/sun/tools/javac/util/Name;", nullptr, $FINAL, $field(PoolConstant$NameAndType, name)},
		{"type", "Lcom/sun/tools/javac/code/Type;", nullptr, $FINAL, $field(PoolConstant$NameAndType, type)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/code/Type;)V", nullptr, 0, $method(PoolConstant$NameAndType, init$, void, $Name*, $Type*)},
		{"poolKey", "(Lcom/sun/tools/javac/code/Types;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PoolConstant$NameAndType, poolKey, $Object*, $Types*)},
		{"poolTag", "()I", nullptr, $PUBLIC, $virtualMethod(PoolConstant$NameAndType, poolTag, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.PoolConstant$NameAndType", "com.sun.tools.javac.jvm.PoolConstant", "NameAndType", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.tools.javac.jvm.PoolConstant$NameAndType",
		"java.lang.Object",
		"com.sun.tools.javac.jvm.PoolConstant",
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
	$loadClass(PoolConstant$NameAndType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PoolConstant$NameAndType);
	});
	return class$;
}

$Class* PoolConstant$NameAndType::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com