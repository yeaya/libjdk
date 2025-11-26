#include <sun/nio/cs/ext/IBM949$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM949$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM949.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM949 = ::sun::nio::cs::ext::IBM949;
using $IBM949$DecodeHolder = ::sun::nio::cs::ext::IBM949$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM949$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM949$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM949$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _IBM949$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IBM949$EncodeHolder::*)()>(&IBM949$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _IBM949$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM949$EncodeHolder", "sun.nio.cs.ext.IBM949", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM949$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM949$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_IBM949$EncodeHolder_FieldInfo_,
	_IBM949$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM949$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM949"
};

$Object* allocate$IBM949$EncodeHolder($Class* clazz) {
	return $of($alloc(IBM949$EncodeHolder));
}

$chars* IBM949$EncodeHolder::c2b = nullptr;
$chars* IBM949$EncodeHolder::c2bIndex = nullptr;

void IBM949$EncodeHolder::init$() {
}

void clinit$IBM949$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM949$EncodeHolder::c2b, $new($chars, 0x00009800));
	$assignStatic(IBM949$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, nullptr);
		$init($IBM949$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM949$DecodeHolder::b2cStr, $IBM949$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 161, 254, IBM949$EncodeHolder::c2b, IBM949$EncodeHolder::c2bIndex);
	}
}

IBM949$EncodeHolder::IBM949$EncodeHolder() {
}

$Class* IBM949$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(IBM949$EncodeHolder, name, initialize, &_IBM949$EncodeHolder_ClassInfo_, clinit$IBM949$EncodeHolder, allocate$IBM949$EncodeHolder);
	return class$;
}

$Class* IBM949$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun