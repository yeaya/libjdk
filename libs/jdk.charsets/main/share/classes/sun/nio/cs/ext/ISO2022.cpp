#include <sun/nio/cs/ext/ISO2022.h>
#include <java/nio/charset/Charset.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

void ISO2022::init$($String* csname, $StringArray* aliases) {
	$Charset::init$(csname, aliases);
}

ISO2022::ISO2022() {
}

$Class* ISO2022::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ISO2022, init$, void, $String*, $StringArray*)},
		{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC | $ABSTRACT},
		{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.ISO2022$Encoder", "sun.nio.cs.ext.ISO2022", "Encoder", $PROTECTED | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.nio.cs.ext.ISO2022",
		"java.nio.charset.Charset",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.cs.ext.ISO2022$Encoder"
	};
	$loadClass(ISO2022, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ISO2022);
	});
	return class$;
}

$Class* ISO2022::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun