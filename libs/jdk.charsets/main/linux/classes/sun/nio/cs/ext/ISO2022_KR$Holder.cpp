#include <sun/nio/cs/ext/ISO2022_KR$Holder.h>
#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/EUC_KR.h>
#include <sun/nio/cs/ext/ISO2022_KR.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $EUC_KR = ::sun::nio::cs::EUC_KR;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$Charset* ISO2022_KR$Holder::ksc5601_cs = nullptr;

void ISO2022_KR$Holder::init$() {
}

void ISO2022_KR$Holder::clinit$($Class* clazz) {
	$assignStatic(ISO2022_KR$Holder::ksc5601_cs, $new($EUC_KR));
}

ISO2022_KR$Holder::ISO2022_KR$Holder() {
}

$Class* ISO2022_KR$Holder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ksc5601_cs", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ISO2022_KR$Holder, ksc5601_cs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ISO2022_KR$Holder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.ISO2022_KR$Holder", "sun.nio.cs.ext.ISO2022_KR", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.ISO2022_KR$Holder",
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
		"sun.nio.cs.ext.ISO2022_KR"
	};
	$loadClass(ISO2022_KR$Holder, name, initialize, &classInfo$$, ISO2022_KR$Holder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ISO2022_KR$Holder);
	});
	return class$;
}

$Class* ISO2022_KR$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun