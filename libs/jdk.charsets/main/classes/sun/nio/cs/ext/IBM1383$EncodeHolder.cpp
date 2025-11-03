#include <sun/nio/cs/ext/IBM1383$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM1383$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM1383.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM1383 = ::sun::nio::cs::ext::IBM1383;
using $IBM1383$DecodeHolder = ::sun::nio::cs::ext::IBM1383$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM1383$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM1383$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM1383$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _IBM1383$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IBM1383$EncodeHolder::*)()>(&IBM1383$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _IBM1383$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1383$EncodeHolder", "sun.nio.cs.ext.IBM1383", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM1383$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM1383$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_IBM1383$EncodeHolder_FieldInfo_,
	_IBM1383$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1383$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1383"
};

$Object* allocate$IBM1383$EncodeHolder($Class* clazz) {
	return $of($alloc(IBM1383$EncodeHolder));
}

$chars* IBM1383$EncodeHolder::c2b = nullptr;
$chars* IBM1383$EncodeHolder::c2bIndex = nullptr;

void IBM1383$EncodeHolder::init$() {
}

void clinit$IBM1383$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM1383$EncodeHolder::c2b, $new($chars, 26880));
	$assignStatic(IBM1383$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, u"\ufef4\u4edd\ufeee\uffe5"_s);
		$var($String, c2bNR, u"\ua1aa\u2014\ua1a4\u00b7\ua1a4\u8ea2\ufeee\uf83d\ufef4\uf83e"_s);
		$init($IBM1383$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM1383$DecodeHolder::b2cStr, $IBM1383$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 161, 254, IBM1383$EncodeHolder::c2b, IBM1383$EncodeHolder::c2bIndex);
	}
}

IBM1383$EncodeHolder::IBM1383$EncodeHolder() {
}

$Class* IBM1383$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(IBM1383$EncodeHolder, name, initialize, &_IBM1383$EncodeHolder_ClassInfo_, clinit$IBM1383$EncodeHolder, allocate$IBM1383$EncodeHolder);
	return class$;
}

$Class* IBM1383$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun