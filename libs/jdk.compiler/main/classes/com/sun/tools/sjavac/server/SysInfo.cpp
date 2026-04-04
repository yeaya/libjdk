#include <com/sun/tools/sjavac/server/SysInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

void SysInfo::init$(int32_t nc, int64_t mm) {
	this->numCores = nc;
	this->maxMemory = mm;
}

SysInfo::SysInfo() {
}

$Class* SysInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SysInfo, serialVersionUID)},
		{"numCores", "I", nullptr, $PUBLIC, $field(SysInfo, numCores)},
		{"maxMemory", "J", nullptr, $PUBLIC, $field(SysInfo, maxMemory)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IJ)V", nullptr, $PUBLIC, $method(SysInfo, init$, void, int32_t, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.server.SysInfo",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SysInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SysInfo);
	});
	return class$;
}

$Class* SysInfo::class$ = nullptr;

				} // server
			} // sjavac
		} // tools
	} // sun
} // com