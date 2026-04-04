#include <sun/nio/cs/ext/SJIS_0213$Holder.h>
#include <java/security/AccessController.h>
#include <sun/nio/cs/CharsetMapping.h>
#include <sun/nio/cs/ext/SJIS_0213$Holder$1.h>
#include <sun/nio/cs/ext/SJIS_0213.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $CharsetMapping = ::sun::nio::cs::CharsetMapping;
using $SJIS_0213$Holder$1 = ::sun::nio::cs::ext::SJIS_0213$Holder$1;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$CharsetMapping* SJIS_0213$Holder::mapping = nullptr;

void SJIS_0213$Holder::init$() {
}

void SJIS_0213$Holder::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	$assignStatic(SJIS_0213$Holder::mapping, $cast($CharsetMapping, $AccessController::doPrivileged($$new($SJIS_0213$Holder$1))));
}

SJIS_0213$Holder::SJIS_0213$Holder() {
}

$Class* SJIS_0213$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mapping", "Lsun/nio/cs/CharsetMapping;", nullptr, $STATIC | $FINAL, $staticField(SJIS_0213$Holder, mapping)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SJIS_0213$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.SJIS_0213$Holder", "sun.nio.cs.ext.SJIS_0213", "Holder", $PRIVATE | $STATIC},
		{"sun.nio.cs.ext.SJIS_0213$Holder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.SJIS_0213$Holder",
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
		"sun.nio.cs.ext.SJIS_0213"
	};
	$loadClass(SJIS_0213$Holder, name, initialize, &classInfo$$, SJIS_0213$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SJIS_0213$Holder);
	});
	return class$;
}

$Class* SJIS_0213$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun