#include <com/sun/tools/javac/util/UnsharedNameTable$NameImpl.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/UnsharedNameTable.h>
#include <jcpp.h>

using $Name = ::com::sun::tools::javac::util::Name;
using $UnsharedNameTable = ::com::sun::tools::javac::util::UnsharedNameTable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void UnsharedNameTable$NameImpl::init$($UnsharedNameTable* table, $bytes* bytes, int32_t index) {
	$Name::init$(table);
	$set(this, bytes, bytes);
	this->index = index;
}

int32_t UnsharedNameTable$NameImpl::getIndex() {
	return this->index;
}

int32_t UnsharedNameTable$NameImpl::getByteLength() {
	return $nc(this->bytes)->length;
}

int8_t UnsharedNameTable$NameImpl::getByteAt(int32_t i) {
	return $nc(this->bytes)->get(i);
}

$bytes* UnsharedNameTable$NameImpl::getByteArray() {
	return this->bytes;
}

int32_t UnsharedNameTable$NameImpl::getByteOffset() {
	return 0;
}

UnsharedNameTable$NameImpl::UnsharedNameTable$NameImpl() {
}

$Class* UnsharedNameTable$NameImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"bytes", "[B", nullptr, $FINAL, $field(UnsharedNameTable$NameImpl, bytes)},
		{"index", "I", nullptr, $FINAL, $field(UnsharedNameTable$NameImpl, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/UnsharedNameTable;[BI)V", nullptr, 0, $method(UnsharedNameTable$NameImpl, init$, void, $UnsharedNameTable*, $bytes*, int32_t)},
		{"getByteArray", "()[B", nullptr, $PUBLIC, $virtualMethod(UnsharedNameTable$NameImpl, getByteArray, $bytes*)},
		{"getByteAt", "(I)B", nullptr, $PUBLIC, $virtualMethod(UnsharedNameTable$NameImpl, getByteAt, int8_t, int32_t)},
		{"getByteLength", "()I", nullptr, $PUBLIC, $virtualMethod(UnsharedNameTable$NameImpl, getByteLength, int32_t)},
		{"getByteOffset", "()I", nullptr, $PUBLIC, $virtualMethod(UnsharedNameTable$NameImpl, getByteOffset, int32_t)},
		{"getIndex", "()I", nullptr, $PUBLIC, $virtualMethod(UnsharedNameTable$NameImpl, getIndex, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.UnsharedNameTable$NameImpl", "com.sun.tools.javac.util.UnsharedNameTable", "NameImpl", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.util.UnsharedNameTable$NameImpl",
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
		"com.sun.tools.javac.util.UnsharedNameTable"
	};
	$loadClass(UnsharedNameTable$NameImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(UnsharedNameTable$NameImpl));
	});
	return class$;
}

$Class* UnsharedNameTable$NameImpl::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com