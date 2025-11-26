#include <sun/nio/cs/ext/IBM970$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM970$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM970.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM970 = ::sun::nio::cs::ext::IBM970;
using $IBM970$DecodeHolder = ::sun::nio::cs::ext::IBM970$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM970$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM970$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM970$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _IBM970$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IBM970$EncodeHolder::*)()>(&IBM970$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _IBM970$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM970$EncodeHolder", "sun.nio.cs.ext.IBM970", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM970$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM970$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_IBM970$EncodeHolder_FieldInfo_,
	_IBM970$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM970$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM970"
};

$Object* allocate$IBM970$EncodeHolder($Class* clazz) {
	return $of($alloc(IBM970$EncodeHolder));
}

$chars* IBM970$EncodeHolder::c2b = nullptr;
$chars* IBM970$EncodeHolder::c2bIndex = nullptr;

void IBM970$EncodeHolder::init$() {
}

void clinit$IBM970$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM970$EncodeHolder::c2b, $new($chars, 0x00009300));
	$assignStatic(IBM970$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, u"\ua1a4\u00b7\ua1a9\u00ad\ua1aa\u2015\ua1ad\u223c\ua2a6\uff5e\ua2c1\u2299\ua3dc\u20a9"_s);
		$init($IBM970$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM970$DecodeHolder::b2cStr, $IBM970$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 161, 254, IBM970$EncodeHolder::c2b, IBM970$EncodeHolder::c2bIndex);
	}
}

IBM970$EncodeHolder::IBM970$EncodeHolder() {
}

$Class* IBM970$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(IBM970$EncodeHolder, name, initialize, &_IBM970$EncodeHolder_ClassInfo_, clinit$IBM970$EncodeHolder, allocate$IBM970$EncodeHolder);
	return class$;
}

$Class* IBM970$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun