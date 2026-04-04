#include <sun/nio/cs/ext/SJIS_0213$Holder$1.h>
#include <java/io/InputStream.h>
#include <sun/nio/cs/CharsetMapping.h>
#include <sun/nio/cs/ext/SJIS_0213.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharsetMapping = ::sun::nio::cs::CharsetMapping;
using $SJIS_0213 = ::sun::nio::cs::ext::SJIS_0213;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

void SJIS_0213$Holder$1::init$() {
}

$Object* SJIS_0213$Holder$1::run() {
	$beforeCallerSensitive();
	$load($SJIS_0213);
	return $CharsetMapping::get($($SJIS_0213::class$->getResourceAsStream("sjis0213.dat"_s)));
}

SJIS_0213$Holder$1::SJIS_0213$Holder$1() {
}

$Class* SJIS_0213$Holder$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SJIS_0213$Holder$1, init$, void)},
		{"run", "()Lsun/nio/cs/CharsetMapping;", nullptr, $PUBLIC, $virtualMethod(SJIS_0213$Holder$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.cs.ext.SJIS_0213$Holder",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.SJIS_0213$Holder", "sun.nio.cs.ext.SJIS_0213", "Holder", $PRIVATE | $STATIC},
		{"sun.nio.cs.ext.SJIS_0213$Holder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.SJIS_0213$Holder$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lsun/nio/cs/CharsetMapping;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.ext.SJIS_0213"
	};
	$loadClass(SJIS_0213$Holder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SJIS_0213$Holder$1);
	});
	return class$;
}

$Class* SJIS_0213$Holder$1::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun