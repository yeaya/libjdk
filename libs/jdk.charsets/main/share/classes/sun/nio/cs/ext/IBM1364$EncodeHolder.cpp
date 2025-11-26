#include <sun/nio/cs/ext/IBM1364$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM1364$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM1364.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM1364 = ::sun::nio::cs::ext::IBM1364;
using $IBM1364$DecodeHolder = ::sun::nio::cs::ext::IBM1364$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM1364$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM1364$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM1364$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _IBM1364$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IBM1364$EncodeHolder::*)()>(&IBM1364$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _IBM1364$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1364$EncodeHolder", "sun.nio.cs.ext.IBM1364", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM1364$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM1364$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_IBM1364$EncodeHolder_FieldInfo_,
	_IBM1364$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1364$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1364"
};

$Object* allocate$IBM1364$EncodeHolder($Class* clazz) {
	return $of($alloc(IBM1364$EncodeHolder));
}

$chars* IBM1364$EncodeHolder::c2b = nullptr;
$chars* IBM1364$EncodeHolder::c2bIndex = nullptr;

void IBM1364$EncodeHolder::init$() {
}

void clinit$IBM1364$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM1364$EncodeHolder::c2b, $new($chars, 0x00009C00));
	$assignStatic(IBM1364$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, u"\u4148\u00ad\u4143\u00b7\u4149\u2015\u42a1\u223c\u496f\u2299\u4954\uff5e"_s);
		$init($IBM1364$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM1364$DecodeHolder::b2cStr, $IBM1364$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 254, IBM1364$EncodeHolder::c2b, IBM1364$EncodeHolder::c2bIndex);
	}
}

IBM1364$EncodeHolder::IBM1364$EncodeHolder() {
}

$Class* IBM1364$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(IBM1364$EncodeHolder, name, initialize, &_IBM1364$EncodeHolder_ClassInfo_, clinit$IBM1364$EncodeHolder, allocate$IBM1364$EncodeHolder);
	return class$;
}

$Class* IBM1364$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun