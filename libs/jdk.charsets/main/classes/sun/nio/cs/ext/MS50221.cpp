#include <sun/nio/cs/ext/MS50221.h>

#include <java/nio/charset/Charset.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/JIS_X_0212.h>
#include <sun/nio/cs/ext/MS50220.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $JIS_X_0212 = ::sun::nio::cs::ext::JIS_X_0212;
using $MS50220 = ::sun::nio::cs::ext::MS50220;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _MS50221_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MS50221::*)()>(&MS50221::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"doSBKANA", "()Z", nullptr, $PROTECTED},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MS50221_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.MS50221",
	"sun.nio.cs.ext.MS50220",
	nullptr,
	nullptr,
	_MS50221_MethodInfo_
};

$Object* allocate$MS50221($Class* clazz) {
	return $of($alloc(MS50221));
}

void MS50221::init$() {
	$MS50220::init$("x-windows-50221"_s, $($ExtendedCharsets::aliasesFor("x-windows-50221"_s)));
}

$String* MS50221::historicalName() {
	return "MS50221"_s;
}

bool MS50221::contains($Charset* cs) {
	return $MS50220::contains(cs) || ($instanceOf($JIS_X_0212, cs)) || ($instanceOf(MS50221, cs));
}

bool MS50221::doSBKANA() {
	return true;
}

MS50221::MS50221() {
}

$Class* MS50221::load$($String* name, bool initialize) {
	$loadClass(MS50221, name, initialize, &_MS50221_ClassInfo_, allocate$MS50221);
	return class$;
}

$Class* MS50221::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun