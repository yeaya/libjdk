#include <com/sun/tools/javac/util/SharedNameTable$NameImpl.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/SharedNameTable.h>
#include <jcpp.h>

using $Name = ::com::sun::tools::javac::util::Name;
using $SharedNameTable = ::com::sun::tools::javac::util::SharedNameTable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void SharedNameTable$NameImpl::init$($SharedNameTable* table) {
	$Name::init$(table);
}

int32_t SharedNameTable$NameImpl::getIndex() {
	return this->index;
}

int32_t SharedNameTable$NameImpl::getByteLength() {
	return this->length$;
}

int8_t SharedNameTable$NameImpl::getByteAt(int32_t i) {
	return $nc($(getByteArray()))->get(this->index + i);
}

$bytes* SharedNameTable$NameImpl::getByteArray() {
	return $nc($cast($SharedNameTable, this->table))->bytes;
}

int32_t SharedNameTable$NameImpl::getByteOffset() {
	return this->index;
}

int32_t SharedNameTable$NameImpl::hashCode() {
	return this->index;
}

bool SharedNameTable$NameImpl::equals(Object$* other) {
	$var($Name, name, nullptr);
	bool var$2 = $instanceOf($Name, other);
	if (var$2) {
		$assign(name, $cast($Name, other));
		var$2 = true;
	}
	bool var$1 = var$2;
	bool var$0 = var$1 && this->table == $nc(name)->table;
	return var$0 && this->index == name->getIndex();
}

SharedNameTable$NameImpl::SharedNameTable$NameImpl() {
}

$Class* SharedNameTable$NameImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"next", "Lcom/sun/tools/javac/util/SharedNameTable$NameImpl;", nullptr, 0, $field(SharedNameTable$NameImpl, next)},
		{"index", "I", nullptr, 0, $field(SharedNameTable$NameImpl, index)},
		{"length", "I", nullptr, 0, $field(SharedNameTable$NameImpl, length$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/SharedNameTable;)V", nullptr, 0, $method(SharedNameTable$NameImpl, init$, void, $SharedNameTable*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(SharedNameTable$NameImpl, equals, bool, Object$*)},
		{"getByteArray", "()[B", nullptr, $PUBLIC, $virtualMethod(SharedNameTable$NameImpl, getByteArray, $bytes*)},
		{"getByteAt", "(I)B", nullptr, $PUBLIC, $virtualMethod(SharedNameTable$NameImpl, getByteAt, int8_t, int32_t)},
		{"getByteLength", "()I", nullptr, $PUBLIC, $virtualMethod(SharedNameTable$NameImpl, getByteLength, int32_t)},
		{"getByteOffset", "()I", nullptr, $PUBLIC, $virtualMethod(SharedNameTable$NameImpl, getByteOffset, int32_t)},
		{"getIndex", "()I", nullptr, $PUBLIC, $virtualMethod(SharedNameTable$NameImpl, getIndex, int32_t)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(SharedNameTable$NameImpl, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.SharedNameTable$NameImpl", "com.sun.tools.javac.util.SharedNameTable", "NameImpl", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.util.SharedNameTable$NameImpl",
		"com.sun.tools.javac.util.Name",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.SharedNameTable"
	};
	$loadClass(SharedNameTable$NameImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SharedNameTable$NameImpl));
	});
	return class$;
}

$Class* SharedNameTable$NameImpl::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com